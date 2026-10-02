# Vanilla Icarus Placement Flow

**Created:** 2026-10-01  
**Source:** BP_Building_Base, BP_Grid_Base, BP_Building_Floor JSON exports  
**Confidence:** Observed + Inferred

## Complete Placement Workflow

### Phase 1: Client-Side Preview (Continuous)

```
Player moves mouse / looks around
  ↓
Raycast from camera (client-side trace)
  ↓
Hit Terrain OR Hit Building?
  ├─→ HIT TERRAIN:
  │    └─→ BuildingHitToGridRounded(hit.location)
  │        ├─→ Convert world position to grid cell
  │        ├─→ Snap to 300-unit grid
  │        └─→ Apply RelativeFootprint offset
  │
  └─→ HIT BUILDING:
       └─→ ProcessBuildingHit(existing_piece)
           ├─→ Get existing piece's transform
           ├─→ Call existing_piece.ShouldRotate(new_piece_class, direction)
           ├─→ Calculate placement transform relative to existing piece
           └─→ Return shifted transform

Result: GridSpaceTrans (FTransform)
  ↓
Validate Placement (client-side visual check)
  ├─→ Check preview collision
  ├─→ Update material state (valid/invalid)
  └─→ Render preview actor at GridSpaceTrans

Loop: Continue until player clicks
```

### Phase 2: Server-Side Validation (On Click)

```
Player Clicks to Place
  ↓
Client sends RPC: "PlaceBuilding(GridSpaceTrans, PieceClass)"
  ↓
Server Receives RPC
  ↓
Re-Validate (server is authoritative):
  ├─→ Check GridSpaceTrans is still valid
  ├─→ Check occupancy at target cell
  │   └─→ Grid.IsOccupied(GridSpaceTrans)?
  │
  ├─→ Check collision against all existing pieces
  │   └─→ For each piece in grid:
  │       ├─→ Check distance
  │       └─→ Check collision volume overlap
  │
  └─→ Check stability (if applicable)
       └─→ Does piece have support?
       └─→ Will placement cause cascade failure?

If Valid:
  ├─→ Create Building Actor (spawn on server)
  ├─→ Set transform to GridSpaceTrans
  ├─→ Create BuildingInfo struct
  │   ├─→ WorldTransform = GridSpaceTrans
  │   ├─→ PieceClass = requested class
  │   ├─→ DamageState = 100%
  │   ├─→ StabilityState = baseline
  │   └─→ VariationIndex = 0 (standard orientation)
  │
  ├─→ Grid.RegisterBuilding(actor, BuildingInfo)
  │   ├─→ Add to occupancy map
  │   ├─→ Find connections to nearby pieces
  │   ├─→ Update recorder
  │   └─→ Fire OnBuildingAdded()
  │
  ├─→ BuildingSubsystem.SaveBuilding(BuildingInfo)
  │   └─→ Write to database
  │
  └─→ Replicate to all clients
       └─→ Destroy client preview actor
       └─→ Spawn networked building actor
       └─→ Clients apply visual state

If Invalid:
  └─→ Send failure message to client
      └─→ Destroy preview
      └─→ Show error message
      └─→ Return to Phase 1 (re-trace)
```

### Phase 3: Network Replication (Multi-Player)

```
Server broadcasts: "BuildingAdded(actor, transform)"
  ↓
All connected clients receive
  ↓
For each client:
  ├─→ Spawn networked actor at transform
  ├─→ Apply team/owner coloring
  ├─→ Play placement sound/effect
  └─→ Update local grid representation

Local client (who placed piece):
  └─→ SKIP replay (already has preview)
```

### Phase 4: Save/Load Cycle

```
Game saves (auto-save or manual):
  ├─→ For each building in level:
  │   └─→ For each piece in grid:
  │       ├─→ Serialize BuildingInfo to database
  │       │   └─→ WorldTransform
  │       │   └─→ PieceClass
  │       │   └─→ DamageState
  │       │   └─→ etc.
  │       │
  │       └─→ Write to save file
  │
  └─→ Save complete

Game loads (load save):
  ├─→ For each building in save data:
  │   ├─→ Create grid actor
  │   │
  │   └─→ For each piece in grid:
  │       ├─→ Deserialize BuildingInfo from database
  │       ├─→ Spawn building actor
  │       ├─→ Set transform to saved WorldTransform
  │       ├─→ Restore damage/stability state
  │       └─→ Register with grid
  │
  └─→ Load complete (building fully reconstructed)
```

---

## Key Decision Points

### 1. Client vs. Server Authority

| Phase | Logic | Authority |
|-------|-------|-----------|
| Trace | Where does piece point? | Client (visual feedback) |
| Transform Calc | Where should it snap? | Piece class (ShouldRotate) |
| Validation | Will it fit? | Server (final say) |
| Storage | Where is it saved? | Server (database) |

**Implication:** Client CAN be wrong. Server re-validates everything.

### 2. Grid vs. Piece Logic

| Question | Answer | Owner |
|----------|--------|-------|
| "What's occupying this cell?" | Grid manages occupancy map | Grid |
| "Can this piece rotate here?" | Piece defines compatibility rules | Piece |
| "What's the exact snap transform?" | Piece calculates via ShouldRotate() | Piece |
| "Is the structure stable?" | Grid checks connectivity | Grid |

**Implication:** Pieces are DUMB about structure. Grid is SMART about connectivity.

### 3. Transform Storage

Stored in `BuildingInfo`:

```cpp
struct BuildingInfo {
  FTransform WorldTransform;  // World-space position & rotation
  FName BuildableRowName;      // Piece type
  FName ItemStaticRowName;     // Item source
  // ... plus damage, stability, modifiers
}
```

**Implication:** **No grid-relative transform stored.** Just world space.

---

## Placement State Machine

```
┌─────────────────────────────────────────┐
│  IDLE: No building selected             │
│  └─→ Wait for player input              │
└──────────────────┬──────────────────────┘
                   │ Player selects piece type
                   ↓
┌─────────────────────────────────────────┐
│  PREVIEW: Piece following cursor        │
│  ├─→ Trace every frame                  │
│  ├─→ Calculate GridSpaceTrans           │
│  ├─→ Update preview transform           │
│  ├─→ Update material (valid/invalid)    │
│  └─→ Wait for click or cancel           │
├─ Cancel: Return to IDLE                 │
└───────────────────┬─────────────────────┘
                    │ Player clicks (place)
                    ↓
┌─────────────────────────────────────────┐
│  PLACING: Waiting for server response   │
│  └─→ Freeze preview                     │
│  └─→ Show "placing..." feedback         │
│  └─→ Await RPC response                 │
├─ Server accepts: Go to PLACED           │
└───────────────────┬─────────────────────┘
                    │
         ┌──────────┴──────────┐
         │ Server accepts      │ Server rejects
         ↓                     ↓
    PLACED              REJECTED
    └─→ Destroy         └─→ Show error
        preview         └─→ Resume PREVIEW
    └─→ Show placed
        piece
    └─→ Return to
        IDLE
```

---

## Critical Timing

### Client-Side Latency

- **Trace to preview:** ~1 frame (instant)
- **Click to server:** ~0.1 seconds network latency
- **Server validation:** ~0.05-0.1 seconds
- **Replication:** ~0.1 seconds to all clients

**Total:** ~0.25 seconds before piece appears for other players

### Out-of-Sync Risk

If server rejects placement but client already showed preview:
- Client's preview ≠ server's result
- Preview destroyed, real piece might appear elsewhere
- Player sees "rejection" and piece fails

**Mitigation:** Client predicts + server validates

---

## Edge Cases

### Case 1: Placing Wall on Floor Edge

```
1. Client traces and hits floor center
2. Floor's ShouldRotate(Wall, ...) called
3. Direction = "Right" (wall-to-right edge)
4. Floor calculates RightShift()
5. Returns transform at floor's right edge
6. Client previews wall on right edge
7. Server receives, validates, places wall
Result: Wall snaps to floor's right edge
```

### Case 2: Placing Floor Above Floor

```
1. Client traces and hits existing floor center
2. Floor's ShouldRotate(Floor, ...) called
3. Direction = "Up" (stack upward)
4. Floor calculates vertical offset (room height)
5. Returns transform above current floor
6. Client previews floor floating above
7. Server receives, validates (no collision), places
Result: Floor stacks perfectly on existing floor
```

### Case 3: Placing Beam Diagonally

```
1. Client traces and hits corner between 4 floors
2. Floor's ShouldRotate(Beam, ...) called
3. Direction = "Diagonal" or multi-cell logic
4. Beam is multi-cell piece spanning corner
5. Returns transform centered on corner
6. Client previews diagonal beam
7. Server validates occupancy for all 4 cells
8. Server places beam spanning all 4 cells
Result: Beam supports structure at corner
```

---

## Integration Points for Custom Snapping

Your mod can insert logic at:

1. **In `ShouldRotate()`:** Override piece compatibility rules
   ```
   // Currently hard-coded class checks
   if (ClassIsChildOf(NewBuilding, BP_Building_Wall_C)) { ... }
   
   // Custom: Could check DataTable instead
   if (SnapData.IsCompatible(NewBuilding, this)) { ... }
   ```

2. **In transform calculation:** Custom snap points
   ```
   // Currently: Shift from piece center
   // Custom: Snap point transforms relative to both pieces
   ```

3. **In grid validation:** Custom occupancy rules
   ```
   // Currently: Cell occupied or not
   // Custom: Cell + snap point compatible or not
   ```

4. **In BuildingInfo:** Store snap role or socket ID
   ```
   // Currently: Class + Variation only
   // Custom: Include snap role used for placement
   ```

---

**Next Steps:**
- Document `RotationalDirections` enum
- Create piece compatibility matrix (Wall↔Wall, Wall↔Floor, etc.)
- Test actual placement to measure constants (room height, shift amounts)
- Design custom snap data format that integrates with this workflow
