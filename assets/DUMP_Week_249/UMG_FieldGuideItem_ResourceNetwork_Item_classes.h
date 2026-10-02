// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_ResourceNetwork_Item.UMG_FieldGuideItem_ResourceNetwork_Item_C
struct UUMG_FieldGuideItem_ResourceNetwork_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Corner_Animation; 
	struct UTextBlock* AmountText; 
	struct UButton* Button_1; 
	struct UOverlay* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* Corner_5; 
	struct UProgressBar* RecievingProgressBar; 
	struct UImage* ResourceIcon; 
	struct FSlateColor OxygenWhite; 
	struct FSlateColor FuelGreen; 
	struct FSlateColor WaterBlue; 
	struct FSlateColor EnergyYellow; 
	struct FMulticastInlineDelegate ResourceClicked; 
	struct FIcarusResourcesEnum Resource; 

	void SetupTooltip(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup_IconNumber(struct FIcarusResourcesEnum ResourceType, int32_t Amount); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct FIcarusResourcesEnum ResourceType, int32_t Amount, enum class EResourceNetworkFlowType FlowType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_FieldGuideItem_ResourceNetwork_Item_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuideItem_ResourceNetwork_Item_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuideItem_ResourceNetwork_Item_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_ResourceNetwork_Item(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ResourceClicked__DelegateSignature(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle Item); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

