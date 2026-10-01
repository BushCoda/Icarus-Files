# BP_Building_Floor Analysis

**Asset:** BP_Building_Floor.json (117KB)  
**Export Date:** 2026-10-01  
**Source:** FModel JSON export  
**Confidence:** Observed (directly from cooked asset)

## Class Identity

- **Class Name:** `BP_Building_Floor_C`
- **Parent Class:** `BP_Building_Base_C`
- **Type:** `BlueprintGeneratedClass`
- **Package:** `Icarus/Content/BP/Building/BP_Building_Floor`
- **Purpose:** Standard floor piece. Overrides rotation and placement logic for horizontal surfaces.

## Overrides from Base

### 1. ShouldRotate() Function

**Signature:**
```cpp
ShouldRotate(
  Direction: ERotationalDirections,
  GridSpaceTrans: FTransform,
  NewBuilding: UClass,
  HitDistanceFromCenter: float,
  Dots: FVector,
  WorldRotToTest: FRotator,
  GridspaceRotTestAgainst: FRotator,
  RawHitNormal: FVector,
  Player: ACharacter,
  out Shifted: FTransform,
  out WantsBlockLikePlacement: bool,
  out BlockLikePlacementExtra: FTransform
)
```

**Logic Flow (from JSON):**

1. **Class Type Checks**
   - `ClassIsChildOf(NewBuilding, BP_Building_Floor_C)` — Can stack floors
   - `ClassIsChildOf(NewBuilding, BP_Building_Wall_C)` — Can place walls on floor
   - `ClassIsChildOf(NewBuilding, BP_Building_Beam_C)` — Can place beams on floor
   - `ClassIsChildOf(NewBuilding, BP_Building_Frame_C)` — Can place frames on floor

2. **Rotation Validation Per Neighbor Type**
   - If neighbor is Floor: Allow any rotation
   - If neighbor is Wall: Walls must be perpendicular to floor
   - If neighbor is Beam: Beams aligned to specific edges
   - If neighbor is Frame: Frames centered on floor

3. **Transform Calculation**
   - Breaks down input `GridSpaceTrans` (location, rotation, scale)
   - Composes new rotators based on direction and neighbor type
   - Creates output `Shifted` transform with appropriate offset
   - Sets `WantsBlockLikePlacement` if collisions need special handling

4. **Directional Shifts**
   - `LeftShift()`, `RightShift()`, `ForwardShift()`, `BackwardsShift()`
   - Each returns modified transform
   - Used for multi-cell pieces or offset alignment

### 2. RelativeFootprint (Property)

```cpp
UPROPERTY(EditAnywhere, BlueprintVisible)
FVector RelativeFootprint;
```

**Purpose:** Defines local offset from grid cell center to piece center

**Floor Value (Inferred):** ~(0, 0, 0) — Center of cell

### 3. Shift Functions

Floor implements directional shift helpers:

| Function | Purpose | Used For |
|----------|---------|----------|
| `LeftShift()` | Offset to left edge | Wall placement on left side |
| `RightShift()` | Offset to right edge | Wall placement on right side |
| `ForwardShift()` | Offset forward edge | Wall placement on front |
| `BackwardsShift()` | Offset back edge | Wall placement on back |

Each returns a modified transform aligned to that edge.

## Placement Rules Inferred

### Floor-to-Floor Stacking
- Any floor can stack on any floor
- No rotation restrictions
- Height offset: Room height (~300 units inferred)

### Wall-to-Floor Placement
- Wall must be perpendicular to floor
- Wall snaps to edge of floor (not center)
- Wall's `BottomEdge` aligns with Floor's `TopEdge`
- Direction determines which edge (left, right, front, back)

### Frame/Beam-to-Floor
- Frames/beams can attach to floor edges
- Beams typically on edges or diagonals
- Frames support roof/upper structures

### Rotational Constraints
- Floors: 90° rotations only (4 cardinal directions)
- Walls: Perpendicular to floor (2 perpendicular to floor's orientation)
- Beams: 45°/90° alignments (diagonal or cardinal)

## Code Flow Example

**Scenario: Player places Wall on Floor**

```
1. Client calls ShouldRotate(Wall, FloorTransform, Direction)
2. Function checks: ClassIsChildOf(Wall, WallClass) → TRUE
3. Determines wall is perpendicular placement
4. Calculates wall position based on direction (e.g., RightShift if Direction=Right)
5. Returns modified transform with wall aligned to floor edge
6. Client previews wall at that transform
7. Player clicks → Server validates and registers both pieces in grid
```

## Piece-Specific Properties

From JSON extraction:

```
BP_Building_Floor:
├── RelativeFootprint: FVector (likely 0, 0, -150 for "raised" floor)
├── WorkingDirection: ERotationalDirections (default North)
├── WorkingTransform: FTransform (shift amount per direction)
├── ShouldRotate(): Custom logic per neighbor type
└── Shift Functions: LeftShift, RightShift, ForwardShift, BackwardsShift
```

## Key Insights

1. **Piece-Local Compatibility:** Floor doesn't ask grid "who's nearby"—it checks the NEW piece being placed

2. **Transform-Based Snapping:** Uses transform composition, not point-based socket matching

3. **Directional Awareness:** Shift functions know which edge to align to

4. **Type-Based Rules:** Different piece types have different compatibility (Wall ≠ Frame ≠ Beam)

5. **No DataTable Lookup:** Rules appear hard-coded per piece class, not in external config

## Questions Requiring Testing

- [ ] **Exact Height Offset:** What is the room height constant used for vertical stacking?
- [ ] **Edge Width:** How wide are edge-snap zones (full 300 units or partial)?
- [ ] **Multi-Cell:** Can floors be half-floors or quarter-floors?
- [ ] **Rotation Precision:** Are only 0°, 90°, 180°, 270° valid or are 45° rotations possible?
- [ ] **Diagonal Compatibility:** Do diagonal floors exist and how do they place on standard floors?
- [ ] **Collision Bounds:** What collision volumes are used for placement validation?

## Integration with Custom Snap System

**Your snap system should:**

1. **Replicate this pattern:** Each piece defines compatible neighbors by type
2. **Use transform composition:** Calculate snap positions via transform math
3. **Support directional placement:** Track Direction enum for edge selection
4. **Allow piece overrides:** Let custom pieces define their own `ShouldRotate()` logic
5. **Preserve grid validation:** Grid still checks final occupancy

---

**Next Steps:**
- Analyze `BP_Building_Wall.json` for wall-specific placement rules
- Analyze `BP_Building_Frame.json` for frame attachment logic
- Analyze `BP_Building_Beam.json` for beam diagonal/support rules
- Document the `RotationalDirections` enum values (North, South, East, West)
- Create compatibility matrix (Floor × Wall, Wall × Wall, etc.)
