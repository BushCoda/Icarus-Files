// WidgetBlueprintGeneratedClass UMG_ResourceNetworkPreview.UMG_ResourceNetworkPreview_C
struct UUMG_ResourceNetworkPreview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* IconImage; 
	struct UTextBlock* IconValue; 
	struct UTexture* ResourceIcon; 
	struct FSlateColor Colour; 

	void GetFillableMaxStoredUnits(struct FItemData ItemData, int32_t& MaxStoredUnits, struct FIcarusResourcesEnum& ResourceType); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FormatStorageLabel(int32_t Stored, int32_t Capacity, int32_t Rate, struct FText Units, struct FText& LabelText); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update(enum class EResourceNetworkFlowType FlowType, int32_t ResourceValue, struct FItemData ItemData, struct FOptionalResourceFlowsRowHandle OptionalFlowType, struct FIcarusResourcesRowHandle IcarusResource); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ResourceNetworkPreview(int32_t EntryPoint); // (Final|UbergraphFunction)
};

