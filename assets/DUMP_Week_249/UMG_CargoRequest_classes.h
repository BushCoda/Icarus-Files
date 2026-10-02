// WidgetBlueprintGeneratedClass UMG_CargoRequest.UMG_CargoRequest_C
struct UUMG_CargoRequest_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* AnimateIn; 
	struct UUMG_Inventory_C* MainInventory; 
	struct UTextBlock* MountWarning; 
	struct UBorder* MountWarningPrompt; 
	struct UUMG_BasicButton_2_C* RequestButton; 
	struct UTextBlock* TextBlock_NumSelectedMounts; 
	struct UTextBlock* TextBlock_Rerequest; 
	struct UUMG_DropCargo_C* UMG_DropCargo; 
	struct UUMG_InsurancePanel_C* UMG_InsurancePanel; 
	struct UUMG_ItemsOnDropsList_C* UMG_ItemsOnDropsList; 
	struct UUMG_PersistentMountList_C* UMG_PersistentMountList; 
	struct FMulticastInlineDelegate OnRequestButtonClicked; 
	bool RequestButtonLockedByTimer; 
	struct UInventory* CargoInventory; 
	int32_t NumSelectedMounts; 
	struct FTagQueriesRowHandle Query; 

	void OnPersistentMountSelectionStateUpdated(struct UUMG_PersistentMountInfo_C* PersistentMountWidget); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSelectedLoadoutData(struct FPlayerLoadoutData& LoadoutData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetInsuranceEnabled(bool& Insured); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PlayOpenAnimation(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitInventory(struct UInventory* CargoInventory, struct UInventory* MetaInventory); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_CargoRequest_RequestButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void UpdateRequestTime(struct FText RemainingTimeText); // (BlueprintCallable|BlueprintEvent)
	void SetRequestTimeVisibility(bool Visible); // (BlueprintCallable|BlueprintEvent)
	void SetRequestButtonEnabled(bool Enabled); // (BlueprintCallable|BlueprintEvent)
	void UpdateRequestButtonEnabled(); // (BlueprintCallable|BlueprintEvent)
	void OnCargoInventoryItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void SetInsuranceLocked(bool Locked); // (BlueprintCallable|BlueprintEvent)
	void UpdateMountWarning(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CargoRequest(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnRequestButtonClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

