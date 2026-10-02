// WidgetBlueprintGeneratedClass UMG_PlayerInventory.UMG_PlayerInventory_C
struct UUMG_PlayerInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_Inventory_C* Inventory; 
	struct USizeBox* InventorySize; 
	struct USizeBox* KeypromptsSizebox; 
	struct URetainerBox* RetainerBox_1; 
	struct UUMG_PhysicalKeyPrompt_C* SplitStack; 
	struct UUMG_IconTextButton_C* StoreAllButton; 
	struct UUMG_PhysicalKeyPrompt_C* Transfer; 
	struct UUMG_IconTextButton_C* TransferLikeButton; 
	struct UUMG_EnvirosuitSlots_C* UMG_EnvirosuitSlots; 
	struct UUMG_PhysicalKey_C* UMG_PhysicalKey; 
	struct UUMG_PhysicalKey_C* UMG_PhysicalKey_2; 
	struct UUMG_Sort_C* UMG_Sort; 
	struct AActor* LinkedActor; 
	bool bShowStoreAll; 
	bool bHideSurvival; 
	float InventoryHeightOverride; 

	void IsReadOnlyInventoryOrSingleSlot(bool& ReadOnly); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindLinkedInventory(struct UInventory*& Inventory); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void BndEvt__StoreAllButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Initialise(struct AActor* LinkedActor); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_PlayerInventory_StoreAllButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OverrideInventorySizeBox(float InMaxDesiredHeight); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_PlayerInventory(int32_t EntryPoint); // (Final|UbergraphFunction)
};

