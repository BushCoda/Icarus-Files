// WidgetBlueprintGeneratedClass UMG_ModifierPopup.UMG_ModifierPopup_C
struct UUMG_ModifierPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* AuraRangeText; 
	struct UBorder* ModifierBackground; 
	struct UTextBlock* ModifierDescription; 
	struct UTextBlock* ModifierName; 
	struct UVerticalBox* StatsList; 
	struct UBorder* TitleBorder; 
	struct FModifierStateData Modifier Row; 
	int32_t CachedEffectiveness; 

	void UpdateAura(bool IsAura, int32_t AuraRange); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ScaleStat(struct FStatsEnum StatEnum, int32_t StatValue, int32_t& ScaledStat); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateEffectiveness(int32_t Effectiveness); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ModifierPopup(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

