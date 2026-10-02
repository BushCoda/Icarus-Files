// BlueprintGeneratedClass BP_Seat_MountPassenger.BP_Seat_MountPassenger_C
struct ABP_Seat_MountPassenger_C : ABP_SeatBase_C {
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
	struct UFMODAudioComponent* SaddleAudio; 
	float LerpedYawRate; 
	struct UFMODEvent* FMODEvent_ActivateFail; 

	struct FGameplayTagContainer GetSaddleTags(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsMountSeat(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateAudioParameters(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FVector CalculateSpringArmOffset(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnRep_SaddleDataRow(); // (BlueprintCallable|BlueprintEvent)
	void InitialiseWithSaddleData(struct FSaddlesRowHandle SaddleData); // (Public|BlueprintCallable|BlueprintEvent)
	void GetAudioSeatType(enum class EAudioSeatType& Type); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CanPlayerEnterSeat(struct AIcarusPlayerCharacter* PlayerCharacter); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnLoaded_0A1A08C94E5806B269525BB7A9CD472A(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_DBF1A82B41191A0E4B63C1837703B884(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_6B2458764B42E85DEF0B7A881529A1C5(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnMountDeath(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void DetachPlayerFromSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FVector& ExitLocation, struct FRotator& ExitRotation, bool bChangeSeat); // (Event|Public|HasOutParms|BlueprintEvent)
	void AttachPlayerToSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FRotator& EnterRotation); // (Event|Public|HasOutParms|BlueprintEvent)
	void SetupSaddleCosmetics(); // (BlueprintCallable|BlueprintEvent)
	void TryAttachSpringArmToCharacter(); // (BlueprintCallable|BlueprintEvent)
	void OnMountEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnRepActivateCartAudio(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Seat_MountPassenger(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

