// Class AnimGraphRuntime.AnimSequencerInstance
struct UAnimSequencerInstance : UAnimInstance {
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	struct FName NotifyName; 
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	struct FName NotifyName; 
};

// Class AnimGraphRuntime.KismetAnimationLibrary
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary {

	void K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void K2_StartProfilingTimer(); // (Final|Native|Static|Public|BlueprintCallable)
	struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FTransform K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix); // (Final|Native|Static|Public|BlueprintCallable)
	float K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, struct FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, struct FRuntimeFloatCurve& CustomCurve); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
struct UPlayMontageCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnCompleted; 
	struct FMulticastInlineDelegate OnBlendOut; 
	struct FMulticastInlineDelegate OnInterrupted; 
	struct FMulticastInlineDelegate OnNotifyBegin; 
	struct FMulticastInlineDelegate OnNotifyEnd; 

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // (Final|Native|Protected|HasOutParms)
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // (Final|Native|Protected|HasOutParms)
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // (Final|Native|Protected)
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // (Final|Native|Protected)
	struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AnimGraphRuntime.SequencerAnimationSupport
struct USequencerAnimationSupport : UInterface {
};

