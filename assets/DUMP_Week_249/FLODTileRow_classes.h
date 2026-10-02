// WidgetBlueprintGeneratedClass FLODTileRow.FLODTileRow_C
struct UFLODTileRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText FLODTileName; 
	struct AFLODTile* FLODTile; 

	void SetFLODTile(struct AFLODTile* FLODTile); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_FLODTileRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

