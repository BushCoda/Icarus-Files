// WidgetBlueprintGeneratedClass UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C
struct UUMG_BioLab_UpgradeSlotChoice_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* HoverIndicator; 
	struct UButton* SlotButton; 
	struct UImage* UpgradeIcon; 
	struct FMulticastInlineDelegate UpgradeChoiceClicked; 
	struct FLivingItemUpgradesRowHandle Upgrade; 
	struct FMulticastInlineDelegate ChoiceHovered; 
	struct FMulticastInlineDelegate ChoiceUnhovered; 

	void BndEvt__UMG_BioLab_UpgradeSlot_SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void SetUpgrade(struct FLivingItemUpgradesRowHandle Upgrade, bool IsCurrentChoice); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_BioLab_UpgradeSlotChoice_SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_BioLab_UpgradeSlotChoice_SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_UpgradeSlotChoice(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ChoiceUnhovered__DelegateSignature(struct FLivingItemUpgradesRowHandle Upgrade); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ChoiceHovered__DelegateSignature(struct FLivingItemUpgradesRowHandle Upgrade); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void UpgradeChoiceClicked__DelegateSignature(struct FLivingItemUpgradesRowHandle Upgrade); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

