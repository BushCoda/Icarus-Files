// WidgetBlueprintGeneratedClass UMG_ExperienceTracker.UMG_ExperienceTracker_C
struct UUMG_ExperienceTracker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* FlashExpBar; 
	struct UWidgetAnimation* FadeOutEXPBar; 
	struct UWidgetAnimation* FadeInEXPBar; 
	struct UTextBlock* AttributePoints; 
	struct UTextBlock* BlueprintPoints; 
	struct UProgressBar* ExpBar; 
	struct URetainerBox* ExpBarAndText; 
	struct UTextBlock* ExpText; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UInvalidationBox* InvalidationBox_2; 
	struct UTextBlock* LevelText; 
	struct UTextBlock* LevelText_2; 
	struct UTextBlock* SoloPoints; 
	int32_t CachedLevel; 
	bool EXPVisible; 
	float PreviousEXP; 
	float Time; 
	float TargetEXP; 
	float TargetDebtEXP; 
	float PreviousDebtEXP; 
	bool BlueprintText; 
	bool TalentsInitialized; 
	bool ExperienceInitialised; 

	void GARBAGE(float DeltaTime); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Point Text(struct UTalentModelInterface_Const* Model, struct UTextBlock* Text Widget); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Finished_0AE4788F4A5B07730F9D15A0EA2C6E85(); // (BlueprintCallable|BlueprintEvent)
	void Finished_8874A4634270ECC8886C5F9F22417BDF(); // (BlueprintCallable|BlueprintEvent)
	void OnExperienceUpdated(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnPlayerModelChanged(struct UTalentModelInterface_Const* Model); // (BlueprintCallable|BlueprintEvent)
	void OnBlueprintModelChanged(struct UTalentModelInterface_Const* Model); // (BlueprintCallable|BlueprintEvent)
	void Update Experience and Level Text(); // (BlueprintCallable|BlueprintEvent)
	void Update Level Up Glow(); // (BlueprintCallable|BlueprintEvent)
	void Update Experience Bar Visibility(); // (BlueprintCallable|BlueprintEvent)
	void BlueprintModelViewChanged(struct UTalentControllerComponent* Controller); // (BlueprintCallable|BlueprintEvent)
	void PlayerModelViewChanged(struct UTalentControllerComponent* Controller); // (BlueprintCallable|BlueprintEvent)
	void SoloModelViewCHanged(struct UTalentControllerComponent* Controller); // (BlueprintCallable|BlueprintEvent)
	void OnSoloModelChanged(struct UTalentModelInterface_Const* Model); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ExperienceTracker(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

