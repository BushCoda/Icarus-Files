// WidgetBlueprintGeneratedClass UMG_ExperienceNotifier.UMG_ExperienceNotifier_C
struct UUMG_ExperienceNotifier_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* Events; 
	struct UScrollBox* Scroll; 
	bool EventFound; 

	void OnExperienceEvent(struct FExperienceEventsRowHandle ExperienceEvent, int32_t ExperienceGained); // (BlueprintCallable|BlueprintEvent)
	void OnBestiaryProgress(struct FBestiaryDataRowHandle Group, int32_t NowPoints, int32_t MaxPoints); // (BlueprintCallable|BlueprintEvent)
	void OnInitialized(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnChallengeProgressed(struct FItemData& ItemData, int32_t ProgressAmount); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddNotify(struct UWidget* Content); // (BlueprintCallable|BlueprintEvent)
	void MoveToEnd(struct UWidget* Content); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ExperienceNotifier(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

