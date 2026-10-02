// WidgetBlueprintGeneratedClass UMG_RadarMapGrid.UMG_RadarMapGrid_C
struct UUMG_RadarMapGrid_C : URadarMapGridBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* gridimage; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnRenderGridImage(bool bInRenderImage); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RadarMapGrid(int32_t EntryPoint); // (Final|UbergraphFunction)
};

