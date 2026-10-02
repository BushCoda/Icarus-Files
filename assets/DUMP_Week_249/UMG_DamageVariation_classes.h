// WidgetBlueprintGeneratedClass UMG_DamageVariation.UMG_DamageVariation_C
struct UUMG_DamageVariation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Description; 
	bool IsSetBonus; 
	bool IsSetBonusActive; 

	void Initialise(int32_t Min, int32_t Max, struct FText Type); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_DamageVariation(int32_t EntryPoint); // (Final|UbergraphFunction)
};

