// WidgetBlueprintGeneratedClass UMG_InviteTOEden.UMG_InviteTOEden_C
struct UUMG_InviteTOEden_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_97; 
	struct UBorder* MainBorder; 
	struct UTextBlock* NPCNAME; 
	struct UUMG_IconTextButton_C* OptionAButton; 
	struct UUMG_IconTextButton_C* OptionBButton; 
	struct USizeBox* SizeBox_Main; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 

	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_InviteTOEden_OptionBButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_InviteTOEden_OptionAButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_InviteTOEden(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

