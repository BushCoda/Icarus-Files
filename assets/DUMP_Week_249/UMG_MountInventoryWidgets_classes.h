// WidgetBlueprintGeneratedClass UMG_MountInventoryWidgets.UMG_MountInventoryWidgets_C
struct UUMG_MountInventoryWidgets_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UOverlay* APPointBox; 
	struct UImage* AttributeGlow; 
	struct UUMG_ToggleButton_MenuHeader_C* Button_MountCargo; 
	struct UUMG_ToggleButton_MenuHeader_C* Button_Skills; 
	struct UUMG_ToggleButton_MenuHeader_C* Button_Stats; 
	struct UButton* ShowMoreButton; 
	struct UTextBlock* ShowMoreText; 
	struct UNamedSlot* TalentMenuSlot; 
	struct UTextBlock* TalentPoints; 
	struct UUMG_MountInventory_C* UMG_MountInventory; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; 
	struct UUMG_StatDisplayMount_C* UMG_StatDisplayMount; 
	struct UWidgetSwitcher* WidgetSwitcher_MountInventory; 
	struct AActor* Linked Actor; 
	struct FMulticastInlineDelegate OnShowMoreStatsClicked; 

	void MountTalentModelUpdated(struct UTalentModelInterface_Const* Model); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetLinkedActor(struct AActor* LinkedActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_MountInventoryWidgets_Button_MountCargo_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_MountInventoryWidgets_Button_Stats_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_MountInventoryWidgets_Button_Skills_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_MountInventoryWidgets_ShowMoreButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_MountInventoryWidgets(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OnShowMoreStatsClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

