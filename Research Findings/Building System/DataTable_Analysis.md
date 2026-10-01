# Building System DataTables Overview

**Asset Date:** 2026-10-01  
**Source:** FModel JSON exports (D_BuildingLookup, D_BuildingPieces, D_BuildingSkins, D_BuildingStability, D_ItemsStatic)  
**Confidence:** Observed (directly from cooked assets)

## What These DataTables Control

These tables are the **configuration backbone** of the vanilla building system. They define:

1. **Piece Type Lookup** (D_BuildingLookup) — Which piece types exist
2. **Piece-to-Blueprint Mapping** (D_BuildingPieces) — Which blueprint spawns
3. **Material Variants** (D_BuildingSkins) — Visual appearance per material
4. **Stability Rules** (D_BuildingStability) — How stable each piece is
5. **Item Integration** (D_ItemsStatic) — How building items work as inventory items

---

## D_BuildingLookup: Piece Type Registry

**Purpose:** Central registry of all building piece types and their material variants

**Key Structure:**
```cpp
struct BuildingLookup {
  FName PieceName;           // "Floor", "Wall", "Frame", etc.
  bool AccumulationEnabled;  // Can pieces stack?
  
  // Material variants (one per buildable material)
  BuildableRowHandle Thatch;
  BuildableRowHandle Wood;
  BuildableRowHandle Refined_Wood;
  BuildableRowHandle Stone;
  BuildableRowHandle Concrete;
  BuildableRowHandle Aluminium;  // Iron
  BuildableRowHandle Glass;
  BuildableRowHandle ClayBrick;
  BuildableRowHandle Scoria;
  BuildableRowHandle ScoriaBrick;
  BuildableRowHandle Ice;
  BuildableRowHandle Dirt;
  BuildableRowHandle Steel;
  BuildableRowHandle StoneBrick;
  BuildableRowHandle Limestone;
  BuildableRowHandle BeeswaxWood;  // Reinforced
  BuildableRowHandle GlassTempered;
}
```

### Key Findings

**Piece Types Documented:** ~50+ variants including:
- **Floors:** Floor, Floor_Trapdoor, Floor_Half, Floor_Quarter
- **Walls:** Wall_Solid, Wall_Window_Frame, Wall_Window_DBL_L/R, Wall_Door_Frame, Wall_Door_DBL_L/R
- **Angles:** Wall_Angle_L, Wall_Angle_R, Wall_Angle_Peak, Wall_Angle_*_Invert
- **Frames:** Frame, Frame_Pillar, Frame_Angle
- **Beams:** Beam_Vertical, Beam_Horizontal, Beam_Diagonal
- **Ramps:** Ramp, Ramp_Stairs, Ramp_Half_L/R, Ramp_Roof_*
- **Roofs:** Various roof angles and peaks
- **Special:** Roof corners, half-pitch variants, inverted pieces

**AccumulationEnabled Flag:**
- **TRUE:** Frame, Floor, Trapdoor, Ramp, Stairs (can stack/accumulate)
- **FALSE:** Walls, Beams, Special pieces (single placement)

**Material Support:**
- All pieces support multiple materials
- **18 material variants** available per piece type
- Some materials optional (Glass/Tempered Glass not on all pieces)

---

## D_BuildingPieces: Blueprint-to-Asset Mapping

**Purpose:** Maps each piece variant to its actual blueprint and asset

**Key Structure:**
```cpp
struct BuildingPiece {
  FName Type;                              // References D_BuildingLookup row
  FString Icon;                            // UI icon path
  FString Blueprint;                       // Blueprint class to spawn
  FRowHandle Audio;                        // Sound effect to play
  FRowHandle Skin;                         // Material override reference
}
```

### Key Findings

**Examples:**
```
Name: Wood_Floor
Type: Floor
Blueprint: /Game/BP/Building/Wood/BP_Building_Floor_Wood.BP_Building_Floor_Wood_C
Audio: Wood
Icon: ITEM_Wood_Floor_0

Name: Stone_Wall_Solid
Type: Wall_Solid
Blueprint: /Game/BP/Building/Stone/BP_Building_Wall_Solid_Stone.BP_Building_Wall_Solid_Stone_C
Audio: Stone
Icon: ITEM_Stone_Wall_0
```

**Naming Convention:** `{Material}_{PieceType}` or `{Material}_{PieceType}_{Variant}`

**Blueprint Organization:**
- Organized by material: `/Game/BP/Building/{Material}/`
- Wood, Stone, Concrete, Iron, Glass, etc.
- Interior variants in `/InteriorWood/` subfolder
- Refined/reinforced versions separate

**Deprecated Entries:**
- Some old Frame pieces marked `bIsDeprecated: true`
- Suggests system refactoring over time

---

## D_BuildingSkins: Material Override System

**Purpose:** Defines material slot overrides per piece variant

**Key Structure:**
```cpp
struct BuildingSkin {
  FName Name;                                    // Skin identifier
  TMap<int32, FString> BaseMeshMaterialSlotOverrides;  // Slot → Material path
  TMap<int32, FString> FrameMaterialSlotOverrides;     // Frame variant overrides
}
```

### Key Findings

**Example (Scoria_Floor):**
```json
"BaseMeshMaterialSlotOverrides": {
  "0": "M_BLD_Floor_Stone_Scoria_A",
  "1": "M_BLD_Floor_Stone_Scoria_B",
  "2": "M_BLD_Floor_Stone_Scoria_C"
}
```

**Implications:**
- Pieces can have **multiple material slots** (0, 1, 2, 3+)
- Each slot can be overridden independently
- Materials vary by variant (Scoria has A/B/C variants)
- Brick variants often have separate "Cement" material slot

**Material Variety:**
- Stone variants: A, B, C
- Brick variants: Often A, B, Cement (3-5 slots)
- Frame/Pillar: Usually A, B (2 slots)
- Roof pieces: Single material slot typically

---

## D_BuildingStability: Structural Integrity Rules

**Purpose:** Defines stability constants per piece type and material

**Key Structure:**
```cpp
struct BuildingStability {
  int32 BuildingTier;                    // Material tier (1-8)
  float MaxHardStability;                // Hard anchor limit
  float HardStabilityMaxRange;           // How far to search for supports
  float MinimumUnstableStability;        // Below this = unstable
  float StabilityPassMultiplier;         // Cascading stability reduction
  float MaxAnchoredStability;            // Total support capacity
  float LowestGreenStability;            // "Good" threshold
  float YellowStability;                 // "Warning" threshold
  float HighestRedStability;             // "Danger" threshold
}
```

### Tier System

**Stability Tiers (BuildingTier):**

| Tier | Material | Purpose |
|------|----------|---------|
| 1 | Thatch | Temporary, weak |
| 2 | Interior Wood | Interior refinement |
| 3 | Wood, Glass, Ice | Basic construction |
| 6 | Stone, Iron, Clay Brick, Tempered Glass | Medium durability |
| 8 | Concrete, Dirt | Maximum durability |

### Stability Constants

**Wood (Tier 3):**
```
MaxHardStability: 10
MaxAnchoredStability: 5
YellowStability: 1.0
HighestRedStability: 0.1
```

**Stone (Tier 6):**
```
MaxHardStability: 20
HardStabilityMaxRange: 5
MaxAnchoredStability: 15
LowestGreenStability: 6.0
YellowStability: 2.5
HighestRedStability: 1.3
```

**Concrete (Tier 8):**
```
MaxHardStability: 40
HardStabilityMaxRange: 6
MaxAnchoredStability: 30
LowestGreenStability: 20
YellowStability: 10
HighestRedStability: 5.2
StabilityPassMultiplier: 0.666  // Reduces cascading damage
```

**Reinforced Wood (Tier 6):**
```
MaxHardStability: (same as Wood tier 3)
MaxAnchoredStability: 5
YellowStability: 1.0
```

### Key Insights

1. **Material Tiers Directly Affect Stability:** Higher tier = more stability capacity
2. **Range Matters:** Concrete can check 6 grid cells away; Wood only 4
3. **Reinforced = Promoted:** Reinforced wood jumps to Tier 6 (same as Stone)
4. **Color Thresholds:** Green/Yellow/Red zones defined per material tier
5. **Cascade Reduction:** Concrete reduces cascading damage (0.666 multiplier)

---

## D_ItemsStatic: Item Trait System

**Purpose:** Defines what traits/capabilities each item has

**Key Structure:**
```cpp
struct ItemStaticData {
  // Traits (references to other DataTables)
  BuildableRowHandle Buildable;      // Building config (if buildable)
  BuildableRowHandle Durable;        // Health/damage properties
  BuildableRowHandle Flammable;      // Burn properties
  
  // Plus 30+ other traits (Meshable, Itemable, Consumable, etc.)
  
  // Metadata
  TArray<GameplayTag> Manual_Tags;   // User-defined tags
  TArray<GameplayTag> Generated_Tags;  // Auto-generated from traits
}
```

### Building Items Example

**Wood_Floor:**
```
Buildable: Wood_Floor
Durable: Wood_Building
Flammable: Flammable_Building_Wood
Usable: Place
Audio: WoodDeployable

Manual_Tags: [
  "Building.Wood",
  "Audio.Shelter",
  "FieldGuide.Building.Floors"
]
```

**Stone_Wall_Solid:**
```
Buildable: Stone_Wall_Solid
Durable: Stone_Building
Usable: Place
Audio: Stone

Manual_Tags: [
  "Building.Stone",
  "Audio.Shelter",
  "FieldGuide.Building.Walls"
]
```

### Key Insights

1. **Trait-Based:** Items don't hardcode behavior; traits define capabilities
2. **Buildable Reference:** Each building item references its buildable config
3. **Flammability Varies:** Wooden pieces flammable; stone/concrete are not
4. **Material Variants:** Each material has separate Durable trait entry
5. **Tags for Organization:** GameplayTags used for UI, filtering, discovery

---

## System Integration Map

```
Player Crafts Wood Floor
  ↓
D_ItemsStatic["Wood_Floor"] loaded
  └─→ Buildable: Wood_Floor
  
Player Places Wood Floor
  ↓
D_BuildingLookup["Floor"] → Finds material variant
  └─→ D_BuildingPieces["Wood_Floor"] loaded
       └─→ Blueprint: BP_Building_Floor_Wood_C
       └─→ Audio: Wood
       └─→ Icon: ITEM_Wood_Floor_0
  
Blueprint Spawns
  ↓
D_BuildingSkins["Wood_Floor"] applied
  └─→ Material slots 0,1,2 overridden
  
Piece Registers with Grid
  ↓
D_BuildingStability["Wood_General"] loaded
  └─→ MaxHardStability: 10
  └─→ HardStabilityMaxRange: 4
  └─→ YellowStability: 1.0
  
Stability Check on Adjacent Pieces
  └─→ All nearby pieces queried
  └─→ Stability value calculated
  └─→ Visual feedback updated per stability tier
```

---

## Custom System Integration Points

**Your snap system can:**

1. **Extend D_BuildingLookup** — Add piece type compatibility rules
   ```
   "Compatible_Types": ["Floor", "Wall", "Frame"]
   "SnapRoles": ["Base", "Wall", "Support"]
   ```

2. **Extend D_BuildingStability** — Add snap-point support factors
   ```
   "SnapPointBonus": 1.5  // Support from snapping
   "MaxSnapConnections": 4
   ```

3. **Add New Traits in D_ItemsStatic** — Define snap behavior
   ```
   "SnapData": SnapConfigRowHandle
   ```

4. **Create D_BuildingSnapRoles** — New table for snap role rules
   ```
   {
     "Floor_Base",
     "Floor_Edge",
     "Wall_Bottom",
     "Wall_Top",
     "Frame_Corner",
     etc.
   }
   ```

---

**Next Steps:**
- Document piece type compatibility matrix from D_BuildingLookup
- Analyze which pieces support which materials
- Create compatibility chart (Floor ↔ Wall, Wall ↔ Wall, etc.)
- Design snap role assignment for each piece type
- Test placement to observe actual shift behavior
