// WidgetBlueprintGeneratedClass UMG_ItemStats.UMG_ItemStats_C
struct UUMG_ItemStats_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* AlterationBorder; 
	struct UVerticalBox* AlterationList; 
	struct UBorder* AmmoType; 
	struct UTextBlock* AmmoTypeText; 
	struct UTextBlock* AttachmentDescription; 
	struct UBorder* AttachmentSlot; 
	struct UImage* divider; 
	struct UImage* divider_3; 
	struct UBorder* ModifierBorder; 
	struct UVerticalBox* ModifierList; 
	struct UBorder* PoweredEffects; 
	struct UVerticalBox* PoweredModifier; 
	struct UBorder* SetBonus; 
	struct UVerticalBox* SetBonusList; 
	struct USpacer* SetBonusSpacer; 
	struct UVerticalBox* StatList; 
	struct UBorder* StatsBorder; 
	struct USpacer* StatsSpacer; 
	struct UUMG_ToolDamage_C* UMG_ToolDamage; 
	bool IsSetBonus; 
	bool IsSetBonusActive; 
	struct FItemData Item; 
	struct FStatsEnum Affliction Stat; 
	bool ConsumableModifier; 
	struct TArray<struct FAlterationsEnum> AlterationPreview; 
	float ArbitraryStatMultiplier; 
	bool NeedsUpdate; 
	struct FArmourSetsRowHandle Armor Set Override; 
	bool HideAfflictions; 

	void UpdateArmorStats(struct FItemData Item, struct FArmourSetsRowHandle Armor Set Override); // (Public|BlueprintCallable|BlueprintEvent)
	void ForceUpdate(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Has Any Visible Stats(bool& HasStats); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Update Building Type Stats(struct FBuildingTypesRowHandle BuildingTypeRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ApplyArbitraryMultiplier(int32_t InStat, int32_t& OutModifiedStat); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateAlterations(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update(struct FItemData Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ItemStats(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

