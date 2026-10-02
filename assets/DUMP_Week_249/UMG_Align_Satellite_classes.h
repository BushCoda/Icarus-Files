// WidgetBlueprintGeneratedClass UMG_Align_Satellite.UMG_Align_Satellite_C
struct UUMG_Align_Satellite_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Arrow; 
	struct UImage* Center; 
	struct UImage* Circle; 
	struct UHorizontalBox* HB_Time; 
	struct UUMG_BasicButton_2_C* Left; 
	struct UImage* Line1; 
	struct UImage* Line2; 
	struct UImage* OuterCircle; 
	struct UTextBlock* Progress; 
	struct UUMG_BasicButton_2_C* Right; 
	struct UTextBlock* StatusText; 
	struct UCanvasPanel* Target; 
	struct UTextBlock* Text_TimeDisplay; 
	struct UImage* TrackCone; 
	struct UUMG_CloseButton_2_C* UMG_CloseButton_3; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_105; 
	float Player_Speed; 
	float Player_Remainder; 
	int32_t Colonist_Degrees; 
	float Colonist_Speed; 
	int32_t Colonist_Target; 
	bool ColonistHasReachedTarget; 
	int32_t Progress_Value; 
	float Progress_Temp; 
	float TempValue; 
	int32_t Player_Degrees; 
	int32_t AcceptableDistance; 
	float In Delta Time; 
	float Progress_Speed; 
	struct FFMODEventInstance MinigameAudio; 
	bool Completed; 
	bool InputRight; 
	bool InputLeft; 
	struct FDateTime MiniGameStartTime; 
	struct FDateTime MiniGameEndTime; 

	void UpdateArcadeMachineTime(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SubmitArcadeMachineScore(struct ABP_Colony_Arcade_Machine_C* InputPin); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FArcadeMachineScore GetArcadeMachineScore(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ColonistReachedLocation(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetDegrees(int32_t NewDegrees); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnInitialized(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnMiniGameCompleted(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Align_Satellite(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

