// WidgetBlueprintGeneratedClass UMG_DropShip.UMG_DropShip_C
struct UUMG_DropShip_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* AnglePiece; 
	struct UUMG_Inventory_C* Backpack; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UTextBlock* DropshipInventoryPrompt; 
	struct UUMG_Inventory_C* Equipment; 
	struct UImage* Gradient; 
	struct UImage* Image; 
	struct UImage* Image_107; 
	struct UUMG_Inventory_C* Loadout; 
	struct UTextBlock* MissionEndPrompt; 
	struct UUMG_BasicButton_2_C* Return; 
	struct UUMG_IconTextButton_C* TakeAllButton; 
	struct FInventoryIDEnum Inventory ID; 
	struct FFactionMissionsRowHandle Mission; 
	struct FProspectListRowHandle Mission Prospect; 
	struct FSessionFlagsRowHandle Session Flag; 
	struct TArray<struct FLaunchItemReturnInfo> PlayerOwnedItemsToReturn; 
	struct TArray<struct FItemData> NonReturnableItems; 
	bool HasValidatedReturnItems; 
	struct AIcarusPlayerController* ControllerRef; 

	bool IsTryingToReturnNonPlayerOwnedItems(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetIcarusMap(struct FTalentArchetypesRowHandle& Archetype); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsHostWithClients(bool& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ReturnToStation(); // (BlueprintCallable|BlueprintEvent)
	void HostConfirmation(); // (BlueprintCallable|BlueprintEvent)
	void DoNothing(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_DropShip_TakeAllButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void OnItemsValidated(struct TArray<struct FLaunchItemReturnInfo>& OwnedItems, struct TArray<struct FItemData>& NonReturnableItems); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReturnItemsConfirm(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_DropShip(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

