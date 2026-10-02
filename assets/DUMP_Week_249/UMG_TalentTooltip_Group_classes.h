// WidgetBlueprintGeneratedClass UMG_TalentTooltip_Group.UMG_TalentTooltip_Group_C
struct UUMG_TalentTooltip_Group_C : UTalentTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Background; 
	struct UImage* Base; 
	struct UImage* BenchIcons; 
	struct UTextBlock* BlueprintName; 
	struct UImage* Corner; 
	struct UTextBlock* CostAmount; 
	struct UOverlay* CostSection; 
	struct UOverlay* CraftedAtOverlay; 
	struct UTextBlock* CraftingLocation; 
	struct UProgressBar* ExpandProgressBar; 
	struct USizeBox* OverallSize; 
	struct UVerticalBox* RequiredMatsSection; 
	struct UImage* TopGlow; 
	struct UImage* UnlockImage; 
	struct FTalentsRowHandle OldTalent; 
	struct FProcessorRecipesRowHandle Recipe; 
	bool HasMaterials; 
	struct TArray<struct FStatsEnum> Blacklist; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnTalentSet(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentTooltip_Group(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

