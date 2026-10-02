// Class MotionWarping.AnimNotifyState_MotionWarping
struct UAnimNotifyState_MotionWarping : UAnimNotifyState {
	struct URootMotionModifier* RootMotionModifier; 

	void OnWarpUpdate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // (Event|Public|BlueprintEvent|Const)
	void OnWarpEnd(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // (Event|Public|BlueprintEvent|Const)
	void OnWarpBegin(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // (Event|Public|BlueprintEvent|Const)
	void OnRootMotionModifierUpdate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // (Final|Native|Public|Const)
	void OnRootMotionModifierDeactivate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // (Final|Native|Public|Const)
	void OnRootMotionModifierActivate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier); // (Final|Native|Public|Const)
	struct URootMotionModifier* AddRootMotionModifier(struct UMotionWarpingComponent* MotionWarpingComp, struct UAnimSequenceBase* Animation, float StartTime, float EndTime); // (Native|Event|Public|BlueprintEvent|Const)
};

// Class MotionWarping.MotionWarpingUtilities
struct UMotionWarpingUtilities : UBlueprintFunctionLibrary {

	void GetMotionWarpingWindowsFromAnimation(struct UAnimSequenceBase* Animation, struct TArray<struct FMotionWarpingWindowData>& OutWindows); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetMotionWarpingWindowsForWarpTargetFromAnimation(struct UAnimSequenceBase* Animation, struct FName WarpTargetName, struct TArray<struct FMotionWarpingWindowData>& OutWindows); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FTransform ExtractRootMotionFromAnimation(struct UAnimSequenceBase* Animation, float StartTime, float EndTime); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

// Class MotionWarping.MotionWarpingComponent
struct UMotionWarpingComponent : UActorComponent {
	bool bSearchForWindowsInAnimsWithinMontages; 
	struct FMulticastInlineDelegate OnPreUpdate; 
	struct TWeakObjectPtr<struct ACharacter> CharacterOwner; 
	struct TArray<struct URootMotionModifier*> Modifiers; 
	struct TArray<struct FMotionWarpingTarget> WarpTargets; 

	int32_t RemoveWarpTarget(struct FName WarpTargetName); // (Final|Native|Public|BlueprintCallable)
	void DisableAllRootMotionModifiers(); // (Final|Native|Public|BlueprintCallable)
	void AddOrUpdateWarpTargetFromTransform(struct FName WarpTargetName, struct FTransform TargetTransform); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void AddOrUpdateWarpTargetFromLocationAndRotation(struct FName WarpTargetName, struct FVector TargetLocation, struct FRotator TargetRotation); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void AddOrUpdateWarpTargetFromLocation(struct FName WarpTargetName, struct FVector TargetLocation); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void AddOrUpdateWarpTargetFromComponent(struct FName WarpTargetName, struct USceneComponent* Component, struct FName BoneName, bool bFollowComponent); // (Final|Native|Public|BlueprintCallable)
	void AddOrUpdateWarpTarget(struct FMotionWarpingTarget& WarpTarget); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class MotionWarping.RootMotionModifier
struct URootMotionModifier : UObject {
	struct TWeakObjectPtr<struct UAnimSequenceBase> Animation; 
	float StartTime; 
	float EndTime; 
	float PreviousPosition; 
	float CurrentPosition; 
	float Weight; 
	struct FTransform StartTransform; 
	float ActualStartTime; 
	struct FDelegate OnActivateDelegate; 
	struct FDelegate OnUpdateDelegate; 
	struct FDelegate OnDeactivateDelegate; 
	enum class ERootMotionModifierState State; 
};

// Class MotionWarping.RootMotionModifier_Warp
struct URootMotionModifier_Warp : URootMotionModifier {
	struct FName WarpTargetName; 
	enum class EWarpPointAnimProvider WarpPointAnimProvider; 
	struct FTransform WarpPointAnimTransform; 
	struct FName WarpPointAnimBoneName; 
	bool bWarpTranslation; 
	bool bIgnoreZAxis; 
	enum class EAlphaBlendOption AddTranslationEasingFunc; 
	struct UCurveFloat* AddTranslationEasingCurve; 
	bool bWarpRotation; 
	enum class EMotionWarpRotationType RotationType; 
	float WarpRotationTimeMultiplier; 
	struct FTransform CachedTargetTransform; 
};

// Class MotionWarping.RootMotionModifier_SimpleWarp
struct URootMotionModifier_SimpleWarp : URootMotionModifier_Warp {
};

// Class MotionWarping.RootMotionModifier_Scale
struct URootMotionModifier_Scale : URootMotionModifier {
	struct FVector Scale; 

	struct URootMotionModifier_Scale* AddRootMotionModifierScale(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FVector InScale); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
struct URootMotionModifier_AdjustmentBlendWarp : URootMotionModifier_Warp {
	bool bWarpIKBones; 
	struct TArray<struct FName> IKBones; 
	struct FTransform CachedMeshTransform; 
	struct FTransform CachedMeshRelativeTransform; 
	struct FTransform CachedRootMotion; 
	struct FAnimSequenceTrackContainer Result; 
};

// Class MotionWarping.RootMotionModifier_SkewWarp
struct URootMotionModifier_SkewWarp : URootMotionModifier_Warp {

	struct URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InWarpTargetName, enum class EWarpPointAnimProvider InWarpPointAnimProvider, struct FTransform InWarpPointAnimTransform, struct FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

