// WidgetBlueprintGeneratedClass UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C
struct UUMG_Exotic_Transport_Interface_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* AnglePiece; 
	struct UUMG_BasicButton_2_C* BiolabButton; 
	struct UTextBlock* CanRequest; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UUMG_BasicButton_2_C* CloseEquipmentButton; 
	struct UOverlay* EquipmentPanels; 
	struct UUMG_BasicButton_2_C* EquipmentPanelToggleButton; 
	struct UTextBlock* IncorrectBiome; 
	struct UUMG_BasicButton_2_C* LoadoutToggleButton; 
	struct UBackgroundBlur* MainPanel; 
	struct UOverlay* MissionsAvailable; 
	struct UOverlay* NoMissionsAvailable; 
	struct UTextBlock* Requested; 
	struct UOverlay* RequestFeedbackPanel; 
	struct UUMG_BasicButton_2_C* Return; 
	struct UTextBlock* TextBlock_Rerequest; 
	struct UUMG_BioLab_Space_C* UMG_BioLab_Space; 
	struct UUMG_CargoRequest_C* UMG_CargoRequest; 
	struct UTextBlock* Unsheltered; 
	struct UUMG_BasicButton_2_C* WorkshopButton; 
	struct UNamedSlot* WorkshopPanelSlot; 
	struct FInventoryIDEnum Inventory ID; 
	float RequestCooldownTime; 
	float NextRequestGameTime; 
	bool DoesRespawnPodExist; 
	struct ABP_EquipmentRequestInventoryContainer_C* EquipmentInventoryContainer; 

	void CheckForPods(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetLinkedActorInventoryComponent(struct UInventoryComponent*& InventoryComponent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsRequestingNewDropship(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateNextRequestCooldown(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsHostWithClients(bool& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RequestPod(); // (BlueprintCallable|BlueprintEvent)
	void DoNothing(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Exotic_Transport_Interface_WorkshopToggleButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_Exotic_Transport_Interface_WorkshopButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_Exotic_Transport_Interface_LoadoutToggleButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ShowWorkshop(); // (BlueprintCallable|BlueprintEvent)
	void ShowLoadouts(); // (BlueprintCallable|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Exotic_Transport_Interface_CloseEquipmentButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnEquipmentRequestButtonClicked(); // (BlueprintCallable|BlueprintEvent)
	void SetPendingLoadoutExtension(); // (BlueprintCallable|BlueprintEvent)
	void CheckRequestPod(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Exotic_Transport_Interface_BiolabButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ShowBiolab(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Exotic_Transport_Interface(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

