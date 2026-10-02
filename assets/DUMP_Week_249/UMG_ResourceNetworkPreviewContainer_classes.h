// WidgetBlueprintGeneratedClass UMG_ResourceNetworkPreviewContainer.UMG_ResourceNetworkPreviewContainer_C
struct UUMG_ResourceNetworkPreviewContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* ResourcePreviewBox; 

	void TryGetGeneratorFlowValues(struct FGeneratorRowHandle GeneratorRow, struct FIcarusResourcesEnum ResourceType, bool& HasFlow, enum class EResourceNetworkFlowType& FlowType, int32_t& FlowAmount); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddConnectionWidget(enum class EResourceNetworkFlowType FlowType, int32_t ResourceValue, struct FItemData ItemData, struct FOptionalResourceFlowsRowHandle OptionalFlowType, struct FIcarusResourcesRowHandle IcarusResource); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update(struct FItemData Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ResourceNetworkPreviewContainer(int32_t EntryPoint); // (Final|UbergraphFunction)
};

