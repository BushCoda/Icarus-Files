# Icarus Modding Research

An independent research repository documenting the Icarus building-placement and grid systems, based on Blueprint metadata and other information that could be extracted for study. The goal is to understand the existing systems, record uncertainties, and develop testable ideas for future mods.

This is an unofficial community research project. It is not affiliated with or endorsed by RocketWerkz or the creators of Icarus.

## Start Here

- [Existing Building System](Icarus%20Building%20Guide.md) explains the placement, grid conversion, piece behavior, server entry points, and record-loading clues visible in the current exports. It distinguishes observed facts from unknowns.
- [Building Mod Guide](Icarus%20Building%20Mod%20Guide.md) proposes a world-grid and per-piece snap-point design, with an implementation and validation plan. It is exploratory, not a drop-in mod or a verified set of Blueprint edits.

## Repository Contents

The `.txt` files are FModel exports associated with the following Blueprint assets and systems:

| Area | Files |
| --- | --- |
| Placement and grids | `BP_PlayerBuildingPlacement.txt`, `BP_Grid_Base.txt` |
| Shared building behavior and pieces | `BP_Building_Base.txt`, `BP_Building_Floor.txt`, `BP_Building_Wall.txt`, `BP_Building_Frame.txt`, `BP_Building_Beam.txt` |
| Building actions and upgrades | `BP_ActionableBehaviour_Building.txt`, `BP_ActionableBehaviour_BuildingUpgrade.txt` |
| Game lifecycle context | `BP_IcarusGameInstance.txt`, `BP_IcarusGameMode.txt`, `BP_IcarusGameState.txt` |

These exports expose reflected properties, function signatures, selected defaults, and related metadata. They do not consistently include complete Blueprint node connections or the native C++ implementation. Names and temporary values can suggest a flow, but should not be treated as proof of execution order or runtime behavior without graph or in-game confirmation.

## Research Status

This repository is a work in progress. Current notes focus on the building-placement pipeline, grid transforms and defaults, piece-specific placement behavior, server RPC signatures, and database-to-grid loading clues. Important details remain unverified, including the complete placement graph, native record layouts, and exact save/reload transform behavior.

Findings should be read with their confidence and evidence in mind. A useful contribution identifies what was directly observed, what is inferred, and what still needs testing.

## Contributing

Research, corrections, and additional evidence are welcome. When opening an issue or pull request, include:

- The game build/version and the asset or function being discussed.
- The tool and extraction method used, where relevant.
- A concise description of the evidence and how to reproduce the observation.
- Whether the statement is observed, inferred, or experimentally verified.

The most useful next evidence is complete Blueprint graph data for the placement and grid-conversion functions, native definitions for building-grid and record types, and component/socket/default data for representative building pieces. The mod guide lists the current details being sought.

Please only share material you are permitted to redistribute. Avoid committing game packages, original game binaries, proprietary assets, or personal data. Before adding extracted data or other third-party material, check the applicable terms and permissions.

## License and Third-Party Content

No repository license is currently specified. Do not assume that the notes, extracted metadata, or any Icarus-related content may be reused or redistributed under an open-source license. A license can be added later for original contributions once their ownership and third-party content have been reviewed.
