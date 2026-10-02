// WidgetBlueprintGeneratedClass UMG_TalentGraph.UMG_TalentGraph_C
struct UUMG_TalentGraph_C : UTalentGraphWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_1; 
	struct UPanningPanel* Panner; 
	struct UHorizontalBox* TalentTreeHorizontalBox; 
	struct UHorizontalBox* TitleWidgets; 
	struct FSlateBrush BackgroundBrush; 
	bool HideTitle; 

	void OnZoomChanged(int32_t Level, float Scale); // (Event|Protected|BlueprintCallable|BlueprintEvent)
	void Setup Panner(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnTalentTreeAdded(struct UTalentTreeWidget* TalentTree); // (BlueprintCallable|BlueprintEvent)
	void PostSetup(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentGraph(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

