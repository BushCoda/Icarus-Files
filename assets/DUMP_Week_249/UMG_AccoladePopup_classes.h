// WidgetBlueprintGeneratedClass UMG_AccoladePopup.UMG_AccoladePopup_C
struct UUMG_AccoladePopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* SlideOut; 
	struct UWidgetAnimation* SlideIn; 
	struct UTextBlock* AccoladeDescription; 
	struct UTextBlock* AccoladeTitle; 
	struct UImage* AchievementImage; 
	struct UImage* Image_257; 
	struct UInvalidationBox* InvalidationBox_Description; 
	struct UInvalidationBox* InvalidationBox_Title; 
	struct UImage* Line; 
	struct UBorder* MainBorder; 
	struct UImage* MedalImage; 
	struct UOverlay* Overlay_5; 
	struct UImage* RibbonImage; 
	struct UScaleBox* ScaleBox_Title; 
	struct TArray<struct FAccoladesRowHandle> QueuedAccolades; 
	float PopupTime; 
	float TimeBetweenPopups; 
	float InitialDelayTime; 
	struct UFMODEvent* FMODEvent_Popup; 

	void PlayPopupSound(); // (Private|BlueprintCallable|BlueprintEvent)
	void UpdateState(struct FAccoladesRowHandle Accolade); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Finished_A1C5DA234732A9E7D3855CA0319F1CEA(); // (BlueprintCallable|BlueprintEvent)
	void Finished_3BB1A4E9422B43C9055CF99036EF0D9F(); // (BlueprintCallable|BlueprintEvent)
	void OnAccoladeCompleted(struct FAccoladeCompletedState Accolade); // (BlueprintCallable|BlueprintEvent)
	void UpdateAccolades(); // (BlueprintCallable|BlueprintEvent)
	void InitAccoladePopup(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_AccoladePopup(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

