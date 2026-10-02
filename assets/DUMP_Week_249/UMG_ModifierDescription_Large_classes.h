// WidgetBlueprintGeneratedClass UMG_ModifierDescription_Large.UMG_ModifierDescription_Large_C
struct UUMG_ModifierDescription_Large_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* BottomDivider; 
	struct UTextBlock* BuffDescription; 
	struct UTextBlock* BuffName; 
	struct UVerticalBox* BuffStatList; 
	struct UImage* divider_3; 
	struct UBorder* ModifierBorder; 
	struct UImage* TopDivider; 
	struct UTextBlock* TriggerText; 
	struct FString BuffName; 

	void SetActiveState(bool IsActive); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseSeedTalent(struct FModifier& Modifier, int32_t Effectiveness); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitialiseAffliction(struct FStatAfflictionsRowHandle Afflication); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitialiseModifier(struct FModifier& Modifier, int32_t DurationModifier, int32_t EffectivenessModifier); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_ModifierDescription_Large(int32_t EntryPoint); // (Final|UbergraphFunction)
};

