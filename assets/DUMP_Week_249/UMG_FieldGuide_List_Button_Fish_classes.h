// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Button_Fish.UMG_FieldGuide_List_Button_Fish_C
struct UUMG_FieldGuide_List_Button_Fish_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button; 
	struct UTextBlock* Name; 
	struct FFishDataRowHandle Fish; 
	struct FMulticastInlineDelegate SelectedFish; 
	bool Discovered; 
	struct UFMODEvent* HoverAudio; 
	bool Selected; 

	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void SetSelected(bool Selected); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_List_Button_Fish(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SelectedFish__DelegateSignature(struct FFishDataRowHandle Creature, bool Discovered); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

