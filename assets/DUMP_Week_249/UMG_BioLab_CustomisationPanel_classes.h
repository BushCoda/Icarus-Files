// WidgetBlueprintGeneratedClass UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C
struct UUMG_BioLab_CustomisationPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ContentFadeIn; 
	struct UCanvasPanel* ContentCanvas; 
	struct UImage* Dropshadow; 
	struct UOverlay* NoWeaponSelectedPopup; 
	struct UUMG_BioLab_StatBox_C* StatBox; 
	struct UUMG_BioLab_WireCanvas_C* UMG_BioLab_LivingItemSlotCanvas; 
	struct UImage* WeaponImage; 
	struct TArray<struct UUMG_BioLab_UpgradeSlotSelector_C*> UpgradeSlots; 
	struct FItemData CurrentItem; 
	struct FItemData PendingItem; 
	struct ABP_LivingItemPreview_C* ItemPreviewer; 
	struct TArray<struct UUMG_WirePin_C*> Pins; 
	bool NewItemSelected; 
	struct UMaterialInstanceDynamic* DynamicMaterial; 
	struct UCurveFloat* FadeInCurve; 
	float BlendStartTime; 

	void SelectItem(struct FItemData Item); // (BlueprintCallable|BlueprintEvent)
	void OnShowChoices(int32_t SlotIndex); // (BlueprintCallable|BlueprintEvent)
	void OnChoiceHovered(int32_t SlotIndex, struct FLivingItemUpgradesRowHandle Upgrade); // (BlueprintCallable|BlueprintEvent)
	void OnChoiceUnhovered(int32_t SlotIndex, struct FLivingItemUpgradesRowHandle Upgrade); // (BlueprintCallable|BlueprintEvent)
	void CommitSlotChange(int32_t SlotIndex, struct FLivingItemUpgradesRowHandle Upgrade); // (BlueprintCallable|BlueprintEvent)
	void OnInitialized(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnSlotFocused(int32_t SlotIndex); // (BlueprintCallable|BlueprintEvent)
	void OnSlotUnfocused(int32_t SlotIndex); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitialisePreview(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_CustomisationPanel(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

