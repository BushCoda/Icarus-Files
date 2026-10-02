// ScriptStruct AnimationSharing.TickAnimationSharingFunction
struct FTickAnimationSharingFunction : FTickFunction {
};

// ScriptStruct AnimationSharing.AnimationSharingScalability
struct FAnimationSharingScalability {
	struct FPerPlatformBool UseBlendTransitions; 
	struct FPerPlatformFloat BlendSignificanceValue; 
	struct FPerPlatformInt MaximumNumberConcurrentBlends; 
	struct FPerPlatformFloat TickSignificanceValue; 
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
struct FPerSkeletonAnimationSharingSetup {
	struct USkeleton* Skeleton; 
	struct USkeletalMesh* SkeletalMesh; 
	struct UAnimSharingTransitionInstance* BlendAnimBlueprint; 
	struct UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; 
	struct UAnimationSharingStateProcessor* StateProcessorClass; 
	struct TArray<struct FAnimationStateEntry> AnimationStates; 
};

// ScriptStruct AnimationSharing.AnimationStateEntry
struct FAnimationStateEntry {
	char State; 
	struct TArray<struct FAnimationSetup> AnimationSetups; 
	bool bOnDemand; 
	bool bAdditive; 
	float BlendTime; 
	bool bReturnToPreviousState; 
	bool bSetNextState; 
	char NextState; 
	struct FPerPlatformInt MaximumNumberOfConcurrentInstances; 
	float WiggleTimePercentage; 
	bool bRequiresCurves; 
};

// ScriptStruct AnimationSharing.AnimationSetup
struct FAnimationSetup {
	struct UAnimSequence* AnimSequence; 
	struct UAnimSharingStateInstance* AnimBlueprint; 
	struct FPerPlatformInt NumRandomizedInstances; 
	struct FPerPlatformBool Enabled; 
};

