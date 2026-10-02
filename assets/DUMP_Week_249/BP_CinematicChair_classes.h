// BlueprintGeneratedClass BP_CinematicChair.BP_CinematicChair_C
struct ABP_CinematicChair_C : ABP_SeatBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UPostProcessComponent* PostProcess; 
	struct UBoxComponent* Box; 
	struct USceneComponent* Scene; 
	struct AIcarusPlayerCharacter* PreviousPlayer; 
	struct AIcarusPlayerController* OwningController; 
	bool MarkForDestroy; 
	struct UW_SpectatorUI_C* SpectatorUI; 

	struct FRotator GetSeatedPlayerControlRotation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct APawn* GetPossesTarget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsDriverSeat(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool LeaveSeat(bool bChangeSeat, bool bForce); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnAttachedPlayerDestroyed(struct AActor* DestroyedAttachedPlayer); // (Event|Protected|BlueprintEvent)
	void SettingsUpdated(struct FPostProcessSettings Settings); // (BlueprintCallable|BlueprintEvent)
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue); // (BlueprintEvent)
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_2(float AxisValue); // (BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ClearOwningController(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_CinematicChair(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

