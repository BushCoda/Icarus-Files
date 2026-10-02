// WidgetBlueprintGeneratedClass UMG_MissionCompleteFaction.UMG_MissionCompleteFaction_C
struct UUMG_MissionCompleteFaction_C : UUserWidget {
	struct UTextBlock* MissionName; 
	struct UTextBlock* Status; 
	struct UImage* SuccessImage; 
	struct FSlateColor Color; 

	void Update(bool Success, struct FFactionMissionsRowHandle FactionMission, struct FText ProspectName); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

