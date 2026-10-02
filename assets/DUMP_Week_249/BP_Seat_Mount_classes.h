// BlueprintGeneratedClass BP_Seat_Mount.BP_Seat_Mount_C
struct ABP_Seat_Mount_C : ABP_SeatBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Backup_Exit_05; 
	struct USceneComponent* Backup_Exit_04; 
	struct USceneComponent* Backup_Exit_03; 
	struct USkeletalMeshComponent* SaddleSkeletalMesh; 
	struct USceneComponent* Backup_Exit_02; 
	struct USceneComponent* Backup_Exit_01; 
	struct USceneComponent* Exit_02; 
	struct USceneComponent* Exit_01; 
	struct FItemData SaddleItemData; 
	struct FSaddlesRowHandle SaddleDataRow; 
	struct FVector CameraAttachOffset; 
	bool AutoRun; 
	struct UFMODAudioComponent* SaddleAudio; 
	float LerpedYawRate; 
	bool CartActive; 
	int32_t FarmingCartModifierUID; 
	struct UFMODEvent* FMODEvent_ActivateFail; 
	struct TArray<struct UChildActorComponent*> PassengerSeats; 

	void Setup Passenger Seats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DebugDrawExitLocators(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanActivateCart(bool& CanActivate); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FGameplayTagContainer GetSaddleTags(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_CartActive(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsMountSeat(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateAudioParameters(); // (Public|BlueprintCallable|BlueprintEvent)
	struct AIcarusPlayerController* GetPossesTargetController(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector CalculateSpringArmOffset(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnRep_SaddleDataRow(); // (BlueprintCallable|BlueprintEvent)
	void InitialiseWithSaddleData(struct FSaddlesRowHandle SaddleData); // (Public|BlueprintCallable|BlueprintEvent)
	void GetAudioSeatType(enum class EAudioSeatType& Type); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CanPlayerEnterSeat(struct AIcarusPlayerCharacter* PlayerCharacter); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct APawn* GetPossesTarget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnLoaded_B88D173A4964F83FEC477F8471D4FBA7(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_ED13DDE04EB6D4E6D144218EA985DD54(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void InpActEvt_Fire_K2Node_InputActionEvent_7(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Jump_K2Node_InputActionEvent_6(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_5(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_4(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_AutoRun_K2Node_InputActionEvent_3(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_AltFire_K2Node_InputActionEvent_2(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_AltInteract_K2Node_InputActionEvent_1(struct FKey Key); // (BlueprintEvent)
	void OnLoaded_E21A5140499D5CD5824B7BB170FB2B13(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnMountDeath(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void DetachPlayerFromSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FVector& ExitLocation, struct FRotator& ExitRotation, bool bChangeSeat); // (Event|Public|HasOutParms|BlueprintEvent)
	void AttachPlayerToSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FRotator& EnterRotation); // (Event|Public|HasOutParms|BlueprintEvent)
	void SetupSaddleCosmetics(); // (BlueprintCallable|BlueprintEvent)
	void TryAttachSpringArmToCharacter(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnMountEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4(float AxisValue); // (BlueprintEvent)
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue); // (BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void Server_ToggleCartActive(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void OnRepActivateCartAudio(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Seat_Mount(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

