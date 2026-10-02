// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Button_Bestiary.UMG_FieldGuide_List_Button_Bestiary_C
struct UUMG_FieldGuide_List_Button_Bestiary_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button; 
	struct UTextBlock* Discovered; 
	struct UTextBlock* Name; 
	struct FBestiaryDataRowHandle Creature; 
	struct FMulticastInlineDelegate SelectedCreature; 
	int32_t Percent; 
	struct UFMODEvent* HoverSound; 
	bool Selected; 

	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void SetSelected(bool Selected); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_List_Button_Bestiary(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SelectedCreature__DelegateSignature(struct FBestiaryDataRowHandle Creature, int32_t Percent); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

