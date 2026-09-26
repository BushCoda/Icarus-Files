<h1 align="center" style="font-size: 2.8em; margin-bottom: 10px;">🔬 Icarus Modding Research & Community Hub</h1>

<p align="center" style="font-size: 1.1em; color: #666;">Community Research, Guides, and Modding Resources for Icarus</p>

<div align="center" style="margin: 20px 0;">

![Repo Banner](assets/Github_Banner_Modding.png)

</div>

<p align="center" style="margin-top: 15px; color: #555;">
An independent community repository for researching, documenting, and supporting modding for the game Icarus. This project brings together technical research, gameplay-system documentation, modding guides, extracted metadata, community projects, and tools useful to Icarus modders.
</p>

<p align="center" style="color: #888; font-size: 0.9em; font-style: italic;">
This is an unofficial community research project. It is not affiliated with or endorsed by RocketWerkz or the creators of Icarus.
</p>

---

<h2 align="center" style="font-size: 2.0em; margin-top: 30px; margin-bottom: 25px;">🚀 Quick Navigation</h2>

<div style="display: grid; grid-template-columns: 1fr 1fr 1fr; gap: 15px; margin-bottom: 30px;">

<div style="background: #f6f8fb; padding: 15px; border-radius: 8px; border-left: 4px solid #0969da;">

**📚 Research**

- [Building System Guide](Research%20Findings/Building%20System/Icarus%20Building%20Guide.md)
- Placement & grid systems
- Server mechanics

</div>

<div style="background: #f6f8fb; padding: 15px; border-radius: 8px; border-left: 4px solid #1f6feb;">

**🛠️ Modding**

- [Mod Development Guide](Mod%20Guide%20Suggestions/Building%20System/Icarus%20Building%20Mod%20Guide.md)
- Implementation patterns
- Best practices

</div>

<div style="background: #f6f8fb; padding: 15px; border-radius: 8px; border-left: 4px solid #2da44e;">

**🌍 Community**

- [Project Showcase](COMMUNITY_SHOWCASE.md)
- [Contributing](CONTRIBUTING.md)
- [Resources](RESOURCES.md)

</div>

</div>

---

<h2 align="center" style="font-size: 2.0em; margin-top: 30px; margin-bottom: 20px;">📖 Start Here</h2>

### Research & Documentation

This repository documents Icarus game systems through technical research and reverse engineering.

- **[Building System Research](Research%20Findings/Building%20System/Icarus%20Building%20Guide.md)** — Detailed analysis of placement mechanics, grid conversion, piece behavior, server entry points, and how building data is loaded and managed.

- **[Building Mod Development Guide](Mod%20Guide%20Suggestions/Building%20System/Icarus%20Building%20Mod%20Guide.md)** — Proposed approaches for world-grid and per-piece snap-point systems, including implementation strategies and validation techniques.

### Community Resources

Connect with the community and discover useful projects:

- **[Community Project Showcase](COMMUNITY_SHOWCASE.md)** — Browse mods, tools, guides, research, and other projects created by fellow modders. All projects remain independently owned and maintained.

- **[Contributing Guide](CONTRIBUTING.md)** — Learn how to submit research findings, corrections, guides, or other improvements to this repository.

- **[Resources & Tools](RESOURCES.md)** — Find external tools, documentation, references, and links useful for Icarus modding and research.

---

<h2 align="center" style="font-size: 2.0em; margin-top: 30px; margin-bottom: 20px;">🌍 Community Projects</h2>

This repository serves as a central directory and discovery point for Icarus-related community work.

The **[Community Project Showcase](COMMUNITY_SHOWCASE.md)** features projects including:

- 🏗️ Building and construction mods
- 🎮 Gameplay modifications and enhancements
- 🔧 Tools and utilities for modding
- 📚 Research repositories and guides
- 💻 Asset extraction and analysis tools
- 🧪 Experiments and proof-of-concept projects

**Key principle:** Featured projects remain in their original repositories. Authors keep full ownership and control. This repository provides curation and discovery, not mirroring or copying.

👉 **Want your project featured?** See [How to Get Featured](COMMUNITY_SHOWCASE.md#how-to-get-featured).

---

<h2 align="center" style="font-size: 2.0em; margin-top: 30px; margin-bottom: 20px;">📂 Repository Structure</h2>

The repository is organized by research area and content type. The building system is the initial research focus, with additional systems to be documented over time.

```text
Icarus-Files/
├── 📄 README.md
├── 📄 COMMUNITY_SHOWCASE.md
├── 📄 CONTRIBUTING.md
├── 📄 RESOURCES.md
├── 📁 assets/
│   └── Github_Banner_Modding.png
├── 📁 Research Findings/
│   ├── Building System/
│   │   └── Icarus Building Guide.md
│   └── [Future research areas]
├── 📁 Mod Guide Suggestions/
│   ├── Building System/
│   │   └── Icarus Building Mod Guide.md
│   └── [Future guides]
└── 📁 Dumps/
    ├── Building System/
    │   └── [Extracted research files]
    └── [Future research areas]
```

### Asset Dumps

The Building System `.txt` files in `Dumps/Building System/` are FModel exports from these Blueprint assets and systems:

| Category | Files |
|----------|-------|
| **Placement & Grids** | `BP_PlayerBuildingPlacement.txt`, `BP_Grid_Base.txt` |
| **Building Components** | `BP_Building_Base.txt`, `BP_Building_Floor.txt`, `BP_Building_Wall.txt`, `BP_Building_Frame.txt`, `BP_Building_Beam.txt` |
| **Actions & Upgrades** | `BP_ActionableBehaviour_Building.txt`, `BP_ActionableBehaviour_BuildingUpgrade.txt` |
| **Game Lifecycle** | `BP_IcarusGameInstance.txt`, `BP_IcarusGameMode.txt`, `BP_IcarusGameState.txt` |

This research is limited to cooked assets and in-game observations. The exports expose reflected properties, function signatures, selected defaults, inheritance, component templates, and related metadata governing building logic.

---

<h2 align="center" style="font-size: 2.0em; margin-top: 30px; margin-bottom: 20px;">🔍 Research Status</h2>

This repository is actively being developed. The building-placement and grid systems are the initial focus, but long-term goals include documenting additional Icarus systems.

**Future research areas may include:**
- Items, crafting, and recipes
- Characters, creatures, and AI behavior
- Missions, prospects, and progression systems
- Inventory and storage mechanics
- Gameplay rules and world systems
- Networking and server/client behavior
- Data tables and configuration systems

**Important:** Findings should be read with their confidence and evidence in mind. Useful contributions identify what was directly observed, what was inferred, and what still requires testing.

---

<h2 align="center" style="font-size: 2.0em; margin-top: 30px; margin-bottom: 20px;">🤝 Contributing</h2>

Research, corrections, experiments, and additional evidence are welcome. This project thrives on community contributions.

### Contribution Guidelines

When contributing, please include:

- ✅ The **game build/version** being discussed
- ✅ The **tool and extraction method** used (if applicable)
- ✅ A clear **description of the evidence** and how to reproduce the observation
- ✅ Whether the finding is **observed, inferred, or experimentally verified**

### Submission Types

- **Research findings** — New discoveries or analysis of game systems
- **Corrections** — Fixes to existing documentation
- **Documentation improvements** — Clarifications, organization, or completeness
- **Community project submissions** — Links to mods, tools, or guides for the showcase

### What Not to Submit

- ❌ Game packages, binaries, or proprietary assets
- ❌ Personal data or private information
- ❌ Material you don't have permission to redistribute

For detailed guidelines, see **[CONTRIBUTING.md](CONTRIBUTING.md)**.

---

<h2 align="center" style="font-size: 2.0em; margin-top: 30px; margin-bottom: 20px;">📚 Resources & Links</h2>

| Resource | Purpose |
|----------|---------|
| [COMMUNITY_SHOWCASE.md](COMMUNITY_SHOWCASE.md) | Browse featured mods, tools, research, and guides |
| [CONTRIBUTING.md](CONTRIBUTING.md) | Learn contribution standards and submission process |
| [RESOURCES.md](RESOURCES.md) | External tools, documentation, and modding references |

---

<h2 align="center" style="font-size: 2.0em; margin-top: 30px; margin-bottom: 20px;">⚖️ License & Third-Party Content</h2>

**No repository license is currently specified.** Do not assume that notes, extracted metadata, or Icarus-related content may be reused or redistributed under an open-source license without explicit permission.

### Important Notes

- Game assets and systems remain the property of **RocketWerkz**
- Community projects retain their own individual licenses
- Any external material should be credited to the original author
- Featured community projects are not endorsed—only curated for discovery

---

<div align="center" style="margin-top: 40px; padding-top: 20px; border-top: 1px solid #e0e0e0;">

<p style="color: #666; font-size: 0.95em;">
📧 Questions? <a href="https://github.com/BushCoda/Icarus-Files/issues">Open an issue</a> or reach out to <a href="https://github.com/BushCoda">@BushCoda</a>
</p>

<p style="color: #999; font-size: 0.85em;">
Last updated: 2026-09-26 | Icarus Modding Central Research Repository
</p>

</div>
