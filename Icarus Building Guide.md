# Icarus Existing Building Placement System

This guide describes the building-placement and grid behavior visible in the supplied FModel exports. It distinguishes exported facts from hypotheses: the text dumps expose reflected functions, properties, and some defaults, but they do not include enough Blueprint node wiring or native C++ implementation to prove every runtime detail. Proposed changes are documented separately in [Icarus Building Mod Guide.md](Icarus%20Building%20Mod%20Guide.md).

## Evidence and Confidence

The exports directly establish function names, parameter types, some temporary values, class inheritance, and selected class defaults. Names such as `CallFunc_BuildingHitToGridRounded_OutWorldSpaceOnGrid` indicate that a call/output exists, but do not show execution order, conditions, or which value reaches the final spawn call. Treat flow descriptions below as a map of the likely path, not a complete decompilation.

In particular, these files do **not** prove that placement is client-authoritative, that saved records contain only absolute transforms, or that a post-placement offset is discarded on reload. Those claims need the native building-grid implementation and the record structure/load path.

## System Map

| Export | What it shows |
| --- | --- |
| [BP_PlayerBuildingPlacement](BP_PlayerBuildingPlacement.txt) | Placement trace and ground/building hit functions; server RPC signatures; new-grid and add-building entry points; grid-offset controls. |
| [BP_Grid_Base](BP_Grid_Base.txt) | Grid/world transform conversion, rounded and floored conversion functions, placement blocking outputs, and a `LoadSingleBuildingFromRecord` event. |
| [BP_IcarusGameMode](BP_IcarusGameMode.txt) | A `PendingBuildingsFromDatabase` array of native `DatabaseBuildingGrid` records, confirming a database-to-world building load path exists. |
| [BP_Building_Base](BP_Building_Base.txt) | Shared building placement functions and properties, including `BuildingHitToGridRounded`, `DecideShifting`, `ShouldRotate`, `BlockLikePlacementTranslation`, and `BuildingGridFootprint`. |
| [BP_Building_Floor](BP_Building_Floor.txt), [BP_Building_Wall](BP_Building_Wall.txt), [BP_Building_Frame.txt](BP_Building_Frame), [BP_Building_Beam](BP_Building_Beam.txt) | Piece-specific behavior. Floor and wall expose extra placement data; frame overrides `ShouldRotate`; beam derives from frame. |
| [BP_ActionableBehaviour_Building](BP_ActionableBehaviour_Building.txt), [BP_ActionableBehaviour_BuildingUpgrade](BP_ActionableBehaviour_BuildingUpgrade.txt) | Building actions and upgrades. They are adjacent gameplay behavior, not the primary placement-transform path visible in these exports. |

## Placement Flow: What the Exports Support

### Trace and hit classification

`BP_PlayerBuildingPlacement` contains `PerformBuildingTrace`, `ProcessGroundHit`, and `ProcessBuildingHit`. `PerformBuildingTrace` has a `HitResult` output and the placement component also has a tick event, which is consistent with a frequently updated preview. The exported metadata does not establish the exact trace shape, frequency, or complete exec-pin routing.

The two processing functions take different inputs:

- `ProcessGroundHit` receives a `HitResult`, the class being built, and a `FreespaceBuilding` flag. Its reflected temporaries include impact point/normal, actor, grid-space transforms, and the result of a placement-blocking check.
- `ProcessBuildingHit` receives the hit result, a `BP_Building_Base` target, and the class being built. Its reflected temporaries include the output of `BuildingHitToGridRounded` and relative-rotation enum values.

This supports a ground-placement path and a structure-targeting path. It does not establish that every non-building actor is treated as terrain or that a particular cast failure alone selects the ground path.

### Transform calculation and validation

The building-target path exposes `BP_Building_Base.BuildingHitToGridRounded`, whose parameters include the hit result, class to build, rotation state, and player; it returns an `OutWorldSpaceOnGrid` transform. Related functions include `DecideShifting`, `ShouldRotate`, and `BlockLikePlacementTranslation`.

The grid blueprint exposes `WorldSpaceToGridSpaceRounded`, `WorldSpaceToGridSpaceFloored`, `GridSpaceToWorldSpace`, and `CheckBuildingLocationFromWorldspaceRounded`. The placement-check signature includes the candidate world transform, building type, alternate-rotation and snap-to-grid flags, and outputs a blocked flag plus world- and grid-space transforms. This shows that snapping and validation are class- and grid-aware, not simply independent rounding of the hit point's three world coordinates.

### Grid ownership and server calls

`BP_PlayerBuildingPlacement` declares server RPCs including `ServerProcessBuildingHit`, `ServerProcessGroundHit`, `ServerAddNewBuilding`, `ServerSpawnNewGridWithBuilding`, and `ServerSetGridOffset`. `ServerAddNewBuilding` takes a focused grid, a world transform, and the desired class. The process-hit RPC signatures instead take hit data and building references/classes. The exact calls between them and their server-side checks need the graph exports.

`BP_Grid_Base` uses native `BuildingGridBase` functions and references `BuildingGridRecorderComponent` and `BuildingGridManagerSubsystem`. There is also a `LoadSingleBuildingFromRecord` event with buildable row name, item-static row name, and a `BuildingInfo` struct parameter. This is evidence of a grid-owned record/load pathway, but not evidence of the record's fields or whether transforms are stored in world, grid-local, or both spaces.

`BP_IcarusGameMode` also exposes `PendingBuildingsFromDatabase`, an array of native `DatabaseBuildingGrid` structs. Together, these symbols establish that building-grid records are queued from the database and loaded through the grid system. The struct definition and code that fills it are not among the supplied files, so no claim is made here about stored transforms or reload snapping behavior.

The placement component exposes `ClientRaiseGridOffset`, `ClientLowerGridOffset`, `ServerSetGridOffset`, `ManualNewGridOffset`, grid-focus controls, and interpolation caches. This confirms that grid-offset and grid-focus behavior already exists. The exported function signatures do not show the exact input bindings, offset step size, or how the server applies the value.

## Existing Piece Snap Behavior

The shared building base has a `BuildingGridFootprint` vector, a replicated `GridSpaceRotation`, and placement-related state such as `BlockLikePlacement` and `ClampHitNormalToUpOrDown`. `DecideShifting` takes both world and grid-space rotations, distance from the building center, the raw hit normal, and the candidate building class. These signatures suggest the placement decision considers face/side context and the candidate type.

Piece classes customize this behavior rather than relying on a visible generic socket list in the supplied exports:

- Floor exposes `RelativeFootprint` and overrides `ShouldRotate`.
- Wall exposes `ExtraGridSpaceTrans` and overrides `ShouldRotate`.
- Frame overrides `ShouldRotate`.
- Beam inherits from Frame in the exported class metadata.

The supplied exports do not show a general array of named snap sockets or the complete class-specific rules. The visible evidence supports a combination of grid conversion, hit/normal-based shifting, and per-class transforms. It is not enough to conclude whether mesh sockets or other authored components also participate.

## Grid Defaults and Record Loading

The exported class defaults include `BP_Building_Base.GridSize = 300.0` and `BP_Grid_Base.GridSize = (300, 300, 300)`. These are useful reference defaults, but they do not prove that every piece uses those dimensions or that placement rounds absolute world coordinates to multiples of 300. The conversion functions also accept a building class, rotation, and snap-to-grid settings.

`BP_Grid_Base` exposes `LoadSingleBuildingFromRecord`, whose parameters include buildable row name, item-static row name, and `BuildingInfo`. `BP_IcarusGameMode` has a `PendingBuildingsFromDatabase` array of native `DatabaseBuildingGrid` records. These establish a database-to-grid loading pathway. The supplied files do not define the record fields or reveal whether transforms are stored in world space, grid space, or both.

## What These Exports Cannot Establish

- The exact execution order and node connections in placement functions.
- Whether the preview transform is recomputed, trusted, or independently validated by the server.
- The complete math in grid conversion and class-specific rotation/shift functions.
- The serialized fields in `BuildingInfo` and `DatabaseBuildingGrid`, or the exact save/reload transform behavior.
- Whether individual meshes contain relevant sockets/components that were not included in these exports.

The design proposal and step-by-step mod plan are in [Icarus Building Mod Guide.md](Icarus%20Building%20Mod%20Guide.md).