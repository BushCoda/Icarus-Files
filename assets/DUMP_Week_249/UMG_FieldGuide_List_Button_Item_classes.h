// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C
struct UUMG_FieldGuide_List_Button_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button; 
	struct UTextBlock* Name; 
	struct FMulticastInlineDelegate SelectedItem; 
	struct UFMODEvent* HoverSound; 
	bool Selected; 
	struct FItemsStaticRowHandle ItemRow; 
	struct FFieldGuideCategoriesRowHandle CategoryRow; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void SetSelected(bool Selected); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_List_Button_Item(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SelectedItem__DelegateSignature(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

