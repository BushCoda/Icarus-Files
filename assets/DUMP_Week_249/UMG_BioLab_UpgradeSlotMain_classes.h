// WidgetBlueprintGeneratedClass UMG_BioLab_UpgradeSlotMain.UMG_BioLab_UpgradeSlotMain_C
struct UUMG_BioLab_UpgradeSlotMain_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* CurrentModifierIcon; 
	struct UImage* LockIcon; 
	struct UButton* SlotButton; 
	struct UImage* SlotTypeIcon; 
	bool CanSelect; 
	struct FMulticastInlineDelegate UpgradeSlotClicked; 
	bool GenerateTooltips; 
	struct FMulticastInlineDelegate OnSlotHovered; 

	void SetSlotState(struct FLivingItemSlotState SlotState); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BioLab_UpgradeSlot_SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_UpgradeSlotMain(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnSlotHovered__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void UpgradeSlotClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

