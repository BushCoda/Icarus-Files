// BlueprintGeneratedClass BP_TreeFallAudio.BP_TreeFallAudio_C
struct ABP_TreeFallAudio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_GroundSurfaceChecker_C* BP_GroundSurfaceChecker; 
	struct UAudioOcclusionComponent* AudioOcclusion; 
	struct UAudioContextComponent* AudioContext; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FTreeAudioDataRowHandle AudioDataRow; 
	struct TArray<struct ABP_TreeBase_C*> TreeBases; 
	struct ABP_TreeBase_C* InitialTreeBase; 
	float TargetVerticalOffset; 
	float CurrentVerticalOffset; 
	struct UFMODAudioComponent* FallAudioComponent; 
	float positionLerpSpeed; 
	float VelocityUpdateFrequency; 
	float AbsoluteTimeoutLength; 
	float NotMovingTimeoutLength; 
	float BranchBreakTimeWindow; 
	float StopFallingDelayOnTrunkHit; 
	float LastDotProduct; 
	float LastVelocityFromPositionHistory; 
	struct TArray<float> BranchBreakTimes; 
	struct FVector AudioDebugLocation; 
	struct TArray<struct FTimerHandle> TimerHandles; 
	struct FPositionHistory VelocityPositionHistory; 
	bool IsFalling; 
	bool TrunkHasHitGround; 
	float LastMoveTime; 
	float HitImpulseMin; 
	float HitCooldownExpiry; 
	float HitImpulseMax; 
	float HitCooldownLength; 
	float HitCooldownLengthAfterLanding; 
	int32_t NumTrunkPrimitives; 
	float HitCooldownVarianceMultiplier; 

	void SetBranchBreakParameters(); // (Private|BlueprintCallable|BlueprintEvent)
	void SetFallParameters(float NewDotProduct); // (Private|BlueprintCallable|BlueprintEvent)
	void BranchDetached(); // (Private|BlueprintCallable|BlueprintEvent)
	void TrunkLanded(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAudioPosition(float DeltaSeconds, bool Instant); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetVelocityParameters(float AngularVelocity); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateAngularVelocity(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateFallParameters(); // (Private|BlueprintCallable|BlueprintEvent)
	void StopFallingAudio(); // (Private|BlueprintCallable|BlueprintEvent)
	void PlayFallingAudio(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayTrunkLandedSound(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Server_AddTreeBase(struct ABP_TreeBase_C* TreeBase); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayHitBuildingSound(struct FVector InLocation, enum class EPhysicalSurface Surface, float InputPin); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayHitSound(struct FVector InLocation, enum class EPhysicalSurface Surface, float InputPin); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RollNewCooldownTime(float BaseCooldownLength, float& NewTime); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetTrunkPrimitivesCount(struct ABP_TreeBase_C* TreeBase, int32_t& NumTrunks); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Server_TrunkHit(struct UBP_TreePrimitive_C* TreePrimitive, struct AActor* OtherActor, struct UPrimitiveComponent* OtherPrimitive, enum class EPhysicalSurface HitSurface, struct FVector HitLocation, float ImpulseValue, float Damage); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsReadyToLand(bool& ReadyToLand); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_TrunkHasHitGround(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_TreeBases(); // (BlueprintCallable|BlueprintEvent)
	void GetCurrentTreeBase(struct ABP_TreeBase_C*& TreeBase); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetCurrentRootTreePrimitive(struct UBP_TreePrimitive_C*& RootTreePrimitive); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void StopFalling(); // (BlueprintCallable|BlueprintEvent)
	void StartFalling(); // (BlueprintCallable|BlueprintEvent)
	void MULTI_PlayHitSound(struct FVector Location, float HitIntensity, enum class EPhysicalSurface Surface); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI_PlayHitBuildingSound(struct FVector Location, float Damage, enum class EPhysicalSurface Surface); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_TreeFallAudio(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

