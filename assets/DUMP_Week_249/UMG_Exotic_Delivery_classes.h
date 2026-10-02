// WidgetBlueprintGeneratedClass UMG_Exotic_Delivery.UMG_Exotic_Delivery_C
struct UUMG_Exotic_Delivery_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* AnglePiece; 
	struct UUMG_Inventory_C* Backpack; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UTextBlock* DropshipInventoryPrompt; 
	struct UUMG_Inventory_C* Loadout; 
	struct UTextBlock* MissionEndPrompt; 
	struct UUMG_BasicButton_2_C* Return; 
	struct UUMG_PersistentMountList_C* UMG_PersistentMountList; 
	struct FInventoryIDEnum Inventory ID; 
	struct TArray<struct AIcarusMountCharacter*> MountsToRemove; 

	void EmptyMountInventories(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSelectedMountActors(struct TArray<struct ABP_Mount_Base_C*>& SelectedMounts); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void AreSelectedMountsReadyToTransport(bool& Ready); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsHostWithClients(bool& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void DoNothing(); // (BlueprintCallable|BlueprintEvent)
	void OnYes(); // (BlueprintCallable|BlueprintEvent)
	void BeginDelivery(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Exotic_Delivery(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

