// WidgetBlueprintGeneratedClass UMG_Fishing.UMG_Fishing_C
struct UUMG_Fishing_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* FishImage; 
	struct UProgressBar* FishingProgress; 
	struct UTextBlock* FishName; 
	struct UImage* FishRarity; 
	struct UBorder* GoldenZone; 
	struct UTextBlock* Quality; 
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt; 
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_6; 
	float FishSpeed; 
	int32_t FishTargetX; 
	bool FishHasReachedTarget; 
	struct FMulticastInlineDelegate FishCaught; 
	float CatchSpeed; 
	float CurrentProgress; 
	struct FMulticastInlineDelegate FishLost; 
	struct FItemData Fish; 
	bool IsFishing; 
	float GoldenZoneLeft; 
	float GoldenZoneRight; 
	bool IsReeling; 
	bool WidgetActive; 

	float GetZoneModifier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetRarityColour(struct FSlateColor& Color); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void StopMinigame(); // (Public|BlueprintCallable|BlueprintEvent)
	void Reset(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GoldenZoneMovement(float Delta); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateProgress(float Delta); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsFishInZone(bool& InZone); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FishMovement(float Delta); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_D5C124624117D085040657BA30762E76(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void StartCatchingFish(struct FItemData Fish); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetReeling(bool IsReeling); // (BlueprintCallable|BlueprintEvent)
	void HideWidget(); // (BlueprintCallable|BlueprintEvent)
	void FishReachedLocation(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Fishing(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FishLost__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void FishCaught__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

