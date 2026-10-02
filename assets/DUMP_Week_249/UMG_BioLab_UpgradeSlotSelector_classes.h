// WidgetBlueprintGeneratedClass UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C
struct UUMG_BioLab_UpgradeSlotSelector_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Close; 
	struct UWidgetAnimation* Open; 
	struct UHorizontalBox* ChoicesHBox; 
	struct UImage* DividerArrow; 
	struct UOverlay* MainBounds; 
	struct UUMG_BioLab_UpgradeSlotMain_C* MainSlot; 
	bool ShowingChoices; 
	struct FLivingItemUpgradesRowHandle PendingChangeUpgrade; 
	int32_t SlotIndex; 
	struct FMulticastInlineDelegate CommitSlotChange; 
	struct FMulticastInlineDelegate OnShowChoices; 
	struct FMulticastInlineDelegate OnChoiceHovered; 
	struct FMulticastInlineDelegate OnChoiceUnhovered; 
	bool AllowSwappingUpgrades; 
	struct FTimerHandle CloseChoicesAnimTimer; 
	struct UUMG_BioLab_PurchaseUpgradeDetails_C* PurchaseDetails; 
	struct FMulticastInlineDelegate OnSlotFocused; 
	struct FMulticastInlineDelegate OnSlotUnfocused; 
	bool SlotUnlocked; 

	void GetBaseMargin(struct FVector2D& BaseSize); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetBaseSize(struct FVector2D& BaseSize); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool CanChooseUpgrades(struct FLivingItemSlotState& LivingItemSlotState); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetSlotState(struct FLivingItemSlotState SlotState); // (BlueprintCallable|BlueprintEvent)
	void OnInitialized(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnMainSlotClicked(); // (BlueprintCallable|BlueprintEvent)
	void ShowChoices(); // (BlueprintCallable|BlueprintEvent)
	void HideChoices(); // (BlueprintCallable|BlueprintEvent)
	void UpgradeChoiceClicked(struct FLivingItemUpgradesRowHandle Upgrade); // (BlueprintCallable|BlueprintEvent)
	void CancelChangeUpgrade(); // (BlueprintCallable|BlueprintEvent)
	void ConfirmChangeUpgrade(); // (BlueprintCallable|BlueprintEvent)
	void ShowCannotAffordPrompt(); // (BlueprintCallable|BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void ChoiceHovered(struct FLivingItemUpgradesRowHandle Upgrade); // (BlueprintCallable|BlueprintEvent)
	void ChoiceUnhovered(struct FLivingItemUpgradesRowHandle Upgrade); // (BlueprintCallable|BlueprintEvent)
	void FinishHideChoices(); // (BlueprintCallable|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnSlotHovered(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_UpgradeSlotSelector(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnSlotUnfocused__DelegateSignature(int32_t SlotIndex); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnSlotFocused__DelegateSignature(int32_t SlotIndex); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnChoiceUnhovered__DelegateSignature(int32_t SlotIndex, struct FLivingItemUpgradesRowHandle Upgrade); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnChoiceHovered__DelegateSignature(int32_t SlotIndex, struct FLivingItemUpgradesRowHandle Upgrade); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnShowChoices__DelegateSignature(int32_t SlotIndex); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void CommitSlotChange__DelegateSignature(int32_t SlotIndex, struct FLivingItemUpgradesRowHandle Upgrade); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

