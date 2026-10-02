// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C
struct UUMG_FieldGuide_List_Category_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* CategoryButton; 
	struct UVerticalBox* List; 
	struct UTextBlock* Name; 
	struct UUMG_ButtonIcon_C* UMG_ButtonIcon; 
	struct FText CategoryText; 
	struct FMulticastInlineDelegate Clicked; 
	bool Selected; 

	void ClearChildren(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateCategoryButtonImage(); // (Public|BlueprintCallable|BlueprintEvent)
	void AddWidget(struct UUserWidget* Widget); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Bestiary_Category_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ToggleExpand(); // (BlueprintCallable|BlueprintEvent)
	void ClickedInternal(); // (BlueprintCallable|BlueprintEvent)
	void SetSelected(bool Selected); // (BlueprintCallable|BlueprintEvent)
	void ClearSelection(); // (BlueprintCallable|BlueprintEvent)
	void Expand(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_List_Category(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Clicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

