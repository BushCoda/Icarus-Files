# Piece Type Compatibility Matrix

**Created:** 2026-10-01  
**Source:** D_BuildingLookup.json + D_BuildingPieces.json  
**Confidence:** Directly observed from DataTable

## All Piece Types

### Horizontal Placement (Floors)

| Piece Type | Stackable | Material Variants | Notes |
|------------|-----------|-------------------|-------|
| **Floor** | ✅ Yes | 15 variants | Standard floor, base for all construction |
| **Floor_Trapdoor** | ✅ Yes | 13 variants | Openable floor (door mechanic) |
| **Floor_Half** | ⚠️ Partial | 2 variants | 50% floor (wood only) |
| **Floor_Quarter** | ⚠️ Partial | 2 variants | 25% floor (wood only) |

### Vertical Placement (Walls)

| Piece Type | Stackable | Material Variants | Notes |
|------------|-----------|-------------------|-------|
| **Wall_Solid** | ❌ No | 15 variants | Standard wall, no openings |
| **Wall_Window_Frame** | ❌ No | 15 variants | Single window opening |
| **Wall_Window_DBL_L** | ❌ No | 15 variants | Double window (left variant) |
| **Wall_Window_DBL_R** | ❌ No | 15 variants | Double window (right variant) |
| **Wall_Door_Frame** | ❌ No | 15 variants | Single door opening |
| **Wall_Door_DBL_L** | ❌ No | 15 variants | Double door (left variant) |
| **Wall_Door_DBL_R** | ❌ No | 15 variants | Double door (right variant) |
| **Wall_Half** | ❌ No | 2 variants | 50% wall height |
| **Wall_Half_Upper** | ❌ No | 2 variants | 50% wall height (upper) |
| **Wall_Angle_L** | ❌ No | 15 variants | 45° corner (left) |
| **Wall_Angle_R** | ❌ No | 15 variants | 45° corner (right) |
| **Wall_Angle_Peak** | ❌ No | 15 variants | Peak (roof/roof hybrid) |
| **Wall_Angle_L_Invert** | ❌ No | 15 variants | Inverted 45° corner (left) |
| **Wall_Angle_R_Invert** | ❌ No | 15 variants | Inverted 45° corner (right) |

### Slope/Ramp Placement

| Piece Type | Stackable | Material Variants | Notes |
|------------|-----------|-------------------|-------|
| **Ramp** | ✅ Yes | 13 variants | Diagonal slope (standard pitch) |
| **Ramp_Stairs** | ✅ Yes | 13 variants | Stepped slope (with treads) |
| **Ramp_Half_L** | ⚠️ Partial | 2 variants | 50% ramp (left variant) |
| **Ramp_Half_R** | ⚠️ Partial | 2 variants | 50% ramp (right variant) |
| **Ramp_Roof_Angle** | ❌ No | 1 variant | Angled roof piece |
| **Ramp_Roof_Peak** | ❌ No | 1 variant | Peak roof terminator |
| **Ramp_Roof_Corner_L** | ❌ No | 1 variant | Roof corner (left) |
| **Ramp_Roof_Corner_R** | ❌ No | 1 variant | Roof corner (right) |
| **Ramp_Roof_Corner_L_Invert** | ❌ No | 1 variant | Inverted roof corner (left) |
| **Ramp_Roof_Corner_R_Invert** | ❌ No | 1 variant | Inverted roof corner (right) |
| **Ramp_HalfPitch_Lower** | ❌ No | 1 variant | Half-pitch roof (lower) |
| **Ramp_HalfPitch_Upper** | ❌ No | 1 variant | Half-pitch roof (upper) |

### Support Structure (Frames & Beams)

| Piece Type | Stackable | Material Variants | Notes |
|------------|-----------|-------------------|-------|
| **Frame** | ✅ Yes | 5 variants | Full cubic frame (old, deprecated) |
| **Frame_Pillar** | ❌ No | 15 variants | Vertical support post |
| **Frame_Angle** | ❌ No | 5 variants | Half-frame / angled support |
| **Beam_Vertical** | ❌ No | 15 variants | Vertical beam support |
| **Beam_Horizontal** | ❌ No | 15 variants | Horizontal beam support |
| **Beam_Diagonal** | ❌ No | 15 variants | Diagonal beam support (45°) |

### Roof/Specialized

| Piece Type | Stackable | Material Variants | Notes |
|------------|-----------|-------------------|-------|
| **Wall_HalfPitch_Lower_L** | ❌ No | 1 variant | Half-pitch wall (lower, left) |
| **Wall_HalfPitch_Lower_R** | ❌ No | 1 variant | Half-pitch wall (lower, right) |
| **Wall_HalfPitch_Upper_L** | ❌ No | 1 variant | Half-pitch wall (upper, left) |
| **Wall_HalfPitch_Upper_R** | ❌ No | 1 variant | Half-pitch wall (upper, right) |

---

## Material Support Matrix

**Legend:** ✅ = Full support, ⚠️ = Limited, ❌ = No support

| Piece Type | Thatch | Wood | Refined | Stone | Concrete | Iron | Glass | ClayBrick | Scoria | ScoriaBrick | Ice | Dirt | Steel | StoneBrick | Limestone | BeeswaxWood | Tempered |
|------------|--------|------|---------|-------|----------|------|-------|-----------|--------|------------|-----|------|-------|-----------|-----------|-------------|----------|
| Floor | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ❌ | ❌ | ✅ | ✅ | ✅ | ✅ |
| Floor_Trapdoor | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ❌ | ✅ | ✅ | ✅ | ✅ | ❌ | ❌ | ✅ | ✅ | ✅ | ❌ |
| Floor_Half | ✅ | ✅ | ✅ | ❌ | ❌ | ❌ | ❌ | ❌ | ❌ | ❌ | ❌ | ❌ | ❌ | ❌ | ❌ | ❌ | ❌ |
| Wall_Solid | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ❌ | ❌ | ✅ | ✅ | ✅ | ✅ |
| Wall_Window_Frame | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ❌ | ❌ | ✅ | ✅ | ✅ | ✅ |
| Wall_Door_Frame | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ❌ | ❌ | ✅ | ✅ | ✅ | ✅ |
| Frame_Pillar | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ❌ | ❌ | ✅ | ✅ | ✅ | ✅ |
| Beam_Vertical | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ❌ | ❌ | ✅ | ✅ | ✅ | ✅ |
| Ramp | ✅ | ✅ | ✅ | ✅ | ✅ | ✅ | ❌ | ✅ | ✅ | ✅ | ✅ | ❌ | ❌ | ✅ | ✅ | ✅ | ❌ |

### Material Notes

- **Thatch:** Tier 1, lowest tier, limited variants
- **Wood:** Tier 3, most common, all piece types
- **Refined Wood:** Interior variant, Tier 2, limited support
- **Stone:** Tier 6, most versatile (support for ~90% of pieces)
- **Concrete:** Tier 8, support for most pieces
- **Iron:** Limited to certain pieces
- **Glass:** Limited (not on trapdoors, ramps, some walls)
- **Glass Tempered:** Tier 6 glass variant, limited to certain pieces
- **Scoria/Clay Brick:** Special stone variants (newer content)
- **Dirt:** Limited use (mostly frames and ramps)
- **BeeswaxWood:** Reinforced wood variant

---

## Piece Compatibility by Context

### Can Be Placed ON Floor

```
Pieces that snap to Floor:
├─ Wall (any orientation)
├─ Wall_Window_* (any orientation)
├─ Wall_Door_* (any orientation)
├─ Wall_Half (any orientation)
├─ Wall_Angle_* (specific orientations)
├─ Ramp (upward slope)
├─ Frame_Pillar (vertical support)
├─ Beam_Vertical (vertical support)
└─ Beam_Horizontal (supported above)
```

### Can Be Placed ON Wall

```
Pieces that snap to Wall:
├─ Wall (perpendicular orientation)
├─ Frame_Pillar (corner/edge mounting)
├─ Ramp (roof slope)
└─ Roof pieces (wall-mounted)
```

### Can Stack

```
Pieces that stack vertically:
├─ Floor (on Floor)
├─ Floor_Trapdoor (on Floor)
├─ Ramp (on Ramp, continuous slope)
├─ Ramp_Stairs (on Ramp_Stairs)
└─ Frame (on Frame, deprecated)
```

### Cannot Stack (Single Layer)

```
All wall types
All beam types
All angled pieces
Pillars
Special roof pieces
```

---

## Design Patterns Observed

### 1. **Grid-Based Quantization**
- All pieces align to 300-unit grid
- Vertical height appears to be free (or large quantization)
- Horizontal placement follows cardinal directions (N, S, E, W)

### 2. **Piece Type Determines Stackability**
- **Horizontal pieces:** Floors, Ramps → Stackable
- **Vertical pieces:** Walls → Not stackable
- **Support pieces:** Frames, Beams → Context-dependent

### 3. **Material Tier System**
- **Tier 1:** Thatch (early game)
- **Tier 2:** Interior Wood (decorative)
- **Tier 3:** Wood, Glass, Ice (basic construction)
- **Tier 6:** Stone, Iron, Clay/Scoria Brick, Tempered Glass (mid game)
- **Tier 8:** Concrete, Dirt (late game)

### 4. **Deprecated Pieces**
- Old Frame pieces marked deprecated
- Suggests system evolution over updates
- New designs prefer Pillar + Beam approach

### 5. **Variant Types**
- **Full pieces:** 300×300 size
- **Half pieces:** 150×300 or 300×150 size
- **Quarter pieces:** 150×150 size
- **Angled pieces:** 45° rotations
- **Inverted pieces:** Flipped orientations

---

## Snap Role Candidates (for your system)

Based on observable piece types, snap roles could be:

```cpp
enum class EBuildingSnapRole : uint8 {
  // Horizontal anchors
  Base_Floor,              // Floor piece (can support walls)
  Base_Floor_Half,         // Half-floor variant
  Base_Floor_Quarter,      // Quarter-floor variant
  
  // Vertical anchors
  Wall_Bottom,             // Wall's bottom edge (sits on floor)
  Wall_Top,                // Wall's top edge (supports roof)
  Wall_Side_Left,          // Wall's left edge
  Wall_Side_Right,         // Wall's right edge
  
  // Support structures
  Support_Pillar,          // Vertical pillar
  Support_Beam_Horizontal, // Horizontal beam
  Support_Beam_Vertical,   // Vertical beam
  Support_Beam_Diagonal,   // Diagonal beam
  
  // Roof pieces
  Roof_Ridge,              // Peak/ridge support
  Roof_Rafter,             // Angled rafter
  Roof_Corner,             // Corner piece
  
  // Special
  Ramp_Base,               // Bottom of ramp
  Ramp_Top,                // Top of ramp
  Ramp_Edge,               // Ramp edge/side
  
  // Openings
  Opening_Window,          // Window frame opening
  Opening_Door,            // Door frame opening
};
```

---

**Next Steps:**
- Create snap compatibility rules for each combination
- Test piece placement to measure actual shift values
- Document edge-snap behavior empirically
- Design multi-cell support for beams and special pieces
