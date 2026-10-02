// WidgetBlueprintGeneratedClass UMG_AccoladeTooltip.UMG_AccoladeTooltip_C
struct UUMG_AccoladeTooltip_C : UUserWidget {
	struct UImage* AccoladeImage; 
	struct UBorder* Border_1; 
	struct UBorder* Border_3; 
	struct UTextBlock* CompleteDate; 
	struct UTextBlock* Description; 
	struct UImage* divider; 
	struct UBorder* Gradient; 
	struct UTextBlock* ProgressText; 
	struct UProgressBar* RankProgressBar; 
	struct UBorder* RankProgressBorder; 
	struct USizeBox* SizeBox_1; 
	struct USizeBox* SizeBox_2; 
	struct UTextBlock* Status; 
	struct UBorder* StatusBorder; 
	struct UTextBlock* TalentName; 
	struct UUniformGridPanel* TaskGrid; 
	struct USizeBox* TooltipSizeBox; 
	struct FAccoladesRowHandle Accolade; 
	struct FSlateColor CompletedTitle_Colour; 
	struct FF_ChallengeState Base; 
	int32_t TaskGridColumns; 
	float DefaultTooltipWidth; 
	float TaskListTooltipWidth; 
	bool Achievement; 

	void UpdateState(int32_t CurrentValue, int32_t MaxValue, struct FDateTime CompletedTime, bool Complete, struct TArray<struct FAccoladeTaskState>& TaskStates); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Init(struct FAccoladesRowHandle Accolade); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

