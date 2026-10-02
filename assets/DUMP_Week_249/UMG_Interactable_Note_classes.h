// WidgetBlueprintGeneratedClass UMG_Interactable_Note.UMG_Interactable_Note_C
struct UUMG_Interactable_Note_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UBorder* MainBorder; 
	struct UImage* Note_Image; 
	struct UScrollBox* Note_Text; 
	struct UTextBlock* TextBlock_58; 
	struct UTextBlock* TitleText; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UWidgetSwitcher* WidgetSwitcher_1; 
	struct UInventory* Inventory; 
	struct FItemData ItemData; 
	struct UFMODEvent* OpenNoteAudio; 
	struct UFMODEvent* CloseNoteAudio; 
	struct FText BuiltString; 

	void GetNoteRow(struct FCollectableNotesRowHandle& NoteRow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ToPercent(int32_t Current, int32_t Max, float& Percent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Initialise(struct FItemData Item); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Interactable_Note(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

