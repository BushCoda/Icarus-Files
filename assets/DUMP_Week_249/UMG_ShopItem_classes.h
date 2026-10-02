// WidgetBlueprintGeneratedClass UMG_ShopItem.UMG_ShopItem_C
struct UUMG_ShopItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* CategoryIcon; 
	struct UImage* CategoryImage; 
	struct UBorder* CostBorder; 
	struct UHorizontalBox* CostList; 
	struct UImage* Image_104; 
	struct UButton* ItemButton; 
	struct UTextBlock* ItemName; 
	struct UImage* Shadow; 
	struct FWorkshopPack WorkshopPack; 
	int32_t Index; 
	struct FMulticastInlineDelegate Purchase; 
	struct FSlateColor TextColour_Default; 
	struct FSlateColor TextColour_Hovered; 
	struct FLinearColor ImagePurple; 
	struct FLinearColor ImageBlack; 

	void UpdateVisuals(bool Hovered); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_ShopItem(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Purchase__DelegateSignature(int32_t Index); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

