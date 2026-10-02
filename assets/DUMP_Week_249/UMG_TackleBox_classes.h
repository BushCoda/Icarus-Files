// WidgetBlueprintGeneratedClass UMG_TackleBox.UMG_TackleBox_C
struct UUMG_TackleBox_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UUMG_InventoryItemSlow_C* Fish1; 
	struct UUMG_InventoryItemSlow_C* Fish2; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_81; 
	struct UVerticalBox* InventoryVertBox; 
	struct UUMG_InventoryItemSlow_C* Lure1; 
	struct UUMG_InventoryItemSlow_C* Lure2; 
	struct UUMG_InventoryItemSlow_C* Lure3; 
	struct UBorder* MainBorder; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_105; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 

	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_TackleBox(int32_t EntryPoint); // (Final|UbergraphFunction)
};

