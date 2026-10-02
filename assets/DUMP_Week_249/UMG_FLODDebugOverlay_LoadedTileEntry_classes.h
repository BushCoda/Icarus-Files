// WidgetBlueprintGeneratedClass UMG_FLODDebugOverlay_LoadedTileEntry.UMG_FLODDebugOverlay_LoadedTileEntry_C
struct UUMG_FLODDebugOverlay_LoadedTileEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TB_LoadedTileDestroyedInstanceCount; 
	struct UTextBlock* TB_LoadedTileName; 
	struct UTextBlock* TB_LoadedTileRecordActiveInstanceCount; 
	struct UTextBlock* TB_LoadedTileRecordCount; 
	struct UTextBlock* TB_LoadedTileRecordInstanceCount; 
	int32_t NumInstances; 
	int32_t NumActiveInstances; 
	int32_t NumDestroyedInstances; 

	void InitForTile(struct AFLODTile* Tile); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FLODDebugOverlay_LoadedTileEntry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

