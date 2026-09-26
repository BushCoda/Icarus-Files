# Icarus Building Mod Guide: World Grid and Piece Snap Points

This document is a proposed mod design based on the existing-system findings in [Icarus Building Guide.md](Icarus%20Building%20Guide.md). It is not a verified drop-in Blueprint recipe: the available FModel exports expose function/property metadata but not enough node wiring or native record implementation to name safe injection pins yet.

## Goal

Create two compatible placement modes:

1. Ground placement aligns pieces to a stable world-grid frame.
2. Building-on-building placement aligns compatible local snap points on individual pieces.

Keep the game's grid actors, recorder, placement validation, stability, and database load lifecycle in play unless further investigation proves a component can safely be replaced. The supplied exports show those native/grid pathways are involved in placement and loading.

## Design

### Shared world-grid frame

Define a stable world origin `O`, grid rotation `R`, and spacing vector `S`. For a terrain hit `P`, quantize in the grid's local frame and transform back:

```text
Local = inverse(R) * (P - O)
SnappedLocal = round(Local / S) * S
SnappedWorld = O + R * SnappedLocal
```

The existing exports show default values of 300 units for `BP_Building_Base.GridSize` and `(300, 300, 300)` for `BP_Grid_Base.GridSize`. Treat these as vanilla reference values, not universal dimensions: use the candidate building's footprint, alternate-rotation mode, and current grid orientation when deciding cell spacing. Do not round raw world X/Y/Z unless the desired grid is explicitly aligned to the world axes and origin.

A single logical frame does not necessarily require deleting or merging `BP_Grid_Base` actors. A conservative design lets the native grid actor/recorder own building registration while grid conversion derives from the same persistent origin and orientation. Removing grid creation or bypassing native registration could break validation, stability, or loading.

### Per-piece snap descriptors

Define snap locations in each piece's local coordinate frame. A descriptor should contain:

- local transform relative to a stable root;
- a role/tag (for example `FloorEdge`, `WallTop`, `BeamEnd`, `FoundationSide`);
- accepted target/source roles or piece categories;
- optional allowed rotations and an occupancy identifier.

Represent them as scene components, sockets, or data entries based on what the mod tool supports. Each child piece may also have a local mating transform that identifies the point on that child which should meet the target point.

When tracing an existing building, transform its descriptors to world space, filter by compatibility, then choose the best point using hit proximity and surface normal. Align the child's mating transform with the selected target transform:

```text
ChildWorld = TargetWorld * TargetSnapLocal * inverse(ChildMatingLocal)
```

For piece-to-piece placement, the matching snap point should normally take priority over ground-cell rounding. Apply any grid quantization only where that snap descriptor explicitly calls for it. Then run the existing collision, blocked-location, support/stability, and bounds checks.

## Implementation Steps

### 1. Export the complete existing graphs

Before editing, capture node links and execution pins for the trace, ground-hit, building-hit, grid conversion, and server add paths. Use the confirmed functions in the existing guide as starting points. The current text exports identify their signatures and temporaries but do not reveal the actual data flow.

Map where the preview transform is calculated, where it is applied to the ghost, and what the server receives when the player confirms placement. In particular, compare `ServerProcessBuildingHit`, `ServerProcessGroundHit`, `ServerAddNewBuilding`, and `ServerSpawnNewGridWithBuilding` rather than assuming one is the universal spawn path.

### 2. Add a shared ground-grid frame

Choose a persistent origin/rotation and reuse or adapt `BP_Grid_Base` conversion functions. Keep transforms in the grid's local frame for rounding, then convert back to world space. Preserve class-dependent dimensions and alternate rotations. If a placement offset is required, inspect the existing `ClientRaiseGridOffset`, `ClientLowerGridOffset`, `ServerSetGridOffset`, and `ManualNewGridOffset` path first; avoid creating a second offset state until its behavior is understood.

### 3. Add and resolve snap descriptors

Create compatible snap data for a small representative set first, such as one foundation, floor, wall, frame, and beam. Use local transforms and role tags rather than hard-coded per-class branches where possible. Keep descriptors independent of visual mesh pivots so a mesh adjustment does not silently change structural connection coordinates.

Candidate selection should reject incompatible roles, occupied points, invalid rotations, and excessive hit distances. Use a stable tie-breaker when two points are nearly equally close so preview results do not flicker while aiming between them.

### 4. Use one candidate transform for preview and placement

Put candidate generation behind one shared function used by the preview and confirmation paths. Do not only move the ghost mesh: the server's accepted transform could then differ from what the player saw.

Prefer server-side recomputation from the target building, snap identifier, child class, and rotation state. If the placement RPC sends a transform, validate it server-side and verify the target snap is still available. The current RPC signatures show possible extension points, but their actual graph connections and validation behavior remain unknown.

### 5. Preserve the save/load contract

Inspect `BuildingInfo`, `DatabaseBuildingGrid`, and the recorder before deciding what to store. Determine whether the saved data contains world transforms, grid-relative transforms, or both. Ensure the chosen grid origin and rotation remain stable through world reload. If snap reconstruction needs a target-point identifier or local offset, confirm that it can be stored in the existing record or derive it deterministically from the final transform.

Do not assume that post-placement changes are lost on reload, or that the save contains only absolute transforms, until that behavior is confirmed from the native schema or a controlled in-game test.

## Validation

Record the preview, server-accepted, and post-reload transforms for each test:

1. Ground placement at multiple offsets from the proposed origin.
2. Rotated grids, alternate rotations, and non-square or vertical pieces.
3. Each intended floor, wall, frame, beam, and foundation snap role.
4. Collision blocking, occupied points, support/stability, and world bounds.
5. Multiplayer placement from a remote client.
6. Save, reload, and compare transforms and grid registration.

The core criterion is that preview, server, and reload results agree within a small numeric tolerance and remain recognized by the original grid and stability systems.

## Additional Files Needed

The most useful next evidence is:

1. Full Blueprint graph exports with node links/exec pins for `PerformBuildingTrace`, `ProcessGroundHit`, `ProcessBuildingHit`, `ServerProcessGroundHit`, `ServerProcessBuildingHit`, `ServerAddNewBuilding`, `ServerSpawnNewGridWithBuilding`, `BuildingHitToGridRounded`, `DecideShifting`, `ShouldRotate`, `WorldSpaceToGridSpaceRounded`, `WorldSpaceToGridSpaceFloored`, and `CheckBuildingLocationFromWorldspaceRounded`.
2. Native definitions for `BuildingGridBase`, `BuildingGridRecorderComponent`, `BuildingGridManagerSubsystem`, `BuildingBase`, `BuildingInfo`, and `DatabaseBuildingGrid`, including record fields and add/validate/replication/save-load methods. The code that populates `PendingBuildingsFromDatabase` would clarify the load route.
3. Full component, socket, and class-default exports for representative floor, wall, frame, beam, and foundation pieces, including root transforms, collision components, sockets, grid dimensions, and local offsets.
4. Building-piece data rows used by the load event and the code that creates or serializes `BuildingInfo` records.
5. Game version/build and the exact modding toolchain available, since asset replacement, graph editing, and native RPC changes have different constraints.

If FModel cannot provide graph wiring or native class layouts, a controlled in-game multiplayer and save/reload test is the best next source of evidence. Exact node-by-node instructions should wait until the graph and server data path are known.
