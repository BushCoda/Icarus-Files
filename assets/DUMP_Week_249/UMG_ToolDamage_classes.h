// WidgetBlueprintGeneratedClass UMG_ToolDamage.UMG_ToolDamage_C
struct UUMG_ToolDamage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* divider_3; 
	struct USpacer* Spacer; 
	struct USpacer* Spacer_70; 
	struct UUMG_DamageVariation_C* UMG_DamageVariation_Collision; 
	struct UUMG_DamageVariation_C* UMG_DamageVariation_Electric; 
	struct UUMG_DamageVariation_C* UMG_DamageVariation_Electric_Powered; 
	struct UUMG_DamageVariation_C* UMG_DamageVariation_Explosive; 
	struct UUMG_DamageVariation_C* UMG_DamageVariation_Fire; 
	struct UUMG_DamageVariation_C* UMG_DamageVariation_Frost; 
	struct UUMG_DamageVariation_C* UMG_DamageVariation_Laser; 
	struct UUMG_DamageVariation_C* UMG_DamageVariation_Melee; 
	struct UUMG_DamageVariation_C* UMG_DamageVariation_Poison; 
	struct UUMG_DamageVariation_C* UMG_DamageVariation_Projectile; 
	bool IsSetBonus; 
	bool IsSetBonusActive; 
	struct FItemData Item; 

	void UpdateDamage(struct FText Type, struct FStatsEnum Damage, struct FStatsEnum Variation, struct UUMG_DamageVariation_C* Target, bool& Valid); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Update(struct FItemData Item); // (Public|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_ToolDamage(int32_t EntryPoint); // (Final|UbergraphFunction)
};

