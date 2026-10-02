// WidgetBlueprintGeneratedClass UMG_SleepScreen.UMG_SleepScreen_C
struct UUMG_SleepScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Fade; 
	struct UUMG_SleepChecks_C* CampfireCheck; 
	struct UImage* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* Corner_5; 
	struct UImage* Corner_6; 
	struct UImage* Corner_7; 
	struct UImage* Corner_8; 
	struct UTextBlock* CurrentTimeText; 
	struct UTextBlock* ExitText; 
	struct UBorder* FadeBorder; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_71; 
	struct UTextBlock* ModifierWarningText; 
	struct UOverlay* Overlay_SleepScreen; 
	struct UUMG_SleepChecks_C* PlayersSleepingCheck; 
	struct UUMG_Keybind_C* PressFKeybind; 
	struct UTextBlock* SleepText; 
	struct UTextBlock* Text; 
	struct UUMG_SleepChecks_C* TimeCheck; 
	struct UImage* TimeIcon; 
	struct UUMG_Party_C* UMG_Party; 
	struct UTextBlock* Value; 
	struct TSoftClassPtr<UObject> BedSeatClass; 
	float FadeAlpha; 
	float FadeSpeed; 
	bool Sleeping; 
	struct AIcarusActor* BedActor; 
	int32_t TempComfort; 

	void UpdateComfortLevel(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateSleepModifiers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetAudioSleepParameter(float FadeValue); // (Private|BlueprintCallable|BlueprintEvent)
	int32_t GetSleepingPlayerCount(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateSleepingState(bool Sleeping); // (Public|BlueprintCallable|BlueprintEvent)
	void AttachedSeatChanged(); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SleepScreen(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

