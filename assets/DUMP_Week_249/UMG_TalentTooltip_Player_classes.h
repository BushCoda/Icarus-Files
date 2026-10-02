// WidgetBlueprintGeneratedClass UMG_TalentTooltip_Player.UMG_TalentTooltip_Player_C
struct UUMG_TalentTooltip_Player_C : UTalentTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Description; 
	struct UVerticalBox* DescriptionBox; 
	struct UImage* DividerBottom; 
	struct UImage* DividerTop; 
	struct UUMG_KeybindPrompt_C* RespecPrompt; 
	struct UTextBlock* TalentName; 
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt; 
	struct TArray<int32_t> GroupSizes; 
	struct TArray<int32_t> GroupStartIndices; 

	void BuildStatDescriptionList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnTalentSet(); // (Event|Public|BlueprintEvent)
	void Set State(struct FTalentModelData Data); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentTooltip_Player(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

