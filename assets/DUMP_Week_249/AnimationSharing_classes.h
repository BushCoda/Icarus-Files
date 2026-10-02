// Class AnimationSharing.AnimSharingStateInstance
struct UAnimSharingStateInstance : UAnimInstance {
	struct UAnimSequence* AnimationToPlay; 
	float PermutationTimeOffset; 
	float PlayRate; 
	bool bStateBool; 
	struct UAnimSharingInstance* Instance; 

	void GetInstancedActors(struct TArray<struct AActor*>& Actors); // (Final|Native|Protected|HasOutParms|BlueprintCallable)
};

// Class AnimationSharing.AnimSharingTransitionInstance
struct UAnimSharingTransitionInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> FromComponent; 
	struct TWeakObjectPtr<struct USkeletalMeshComponent> ToComponent; 
	float BlendTime; 
	bool bBlendBool; 
};

// Class AnimationSharing.AnimSharingAdditiveInstance
struct UAnimSharingAdditiveInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> BaseComponent; 
	struct TWeakObjectPtr<struct UAnimSequence> AdditiveAnimation; 
	float Alpha; 
	bool bStateBool; 
};

// Class AnimationSharing.AnimSharingInstance
struct UAnimSharingInstance : UObject {
	struct TArray<struct AActor*> RegisteredActors; 
	struct UAnimationSharingStateProcessor* StateProcessor; 
	struct TArray<struct UAnimSequence*> UsedAnimationSequences; 
	struct UEnum* StateEnum; 
	struct AActor* SharingActor; 
};

// Class AnimationSharing.AnimationSharingManager
struct UAnimationSharingManager : UObject {
	struct TArray<struct USkeleton*> Skeletons; 
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData; 

	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton); // (Final|Native|Public|BlueprintCallable)
	struct UAnimationSharingManager* GetAnimationSharingManager(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable)
	bool CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* Setup); // (Final|Native|Static|Public|BlueprintCallable)
	bool AnimationSharingEnabled(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class AnimationSharing.AnimationSharingSetup
struct UAnimationSharingSetup : UObject {
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups; 
	struct FAnimationSharingScalability ScalabilitySettings; 
};

// Class AnimationSharing.AnimationSharingStateProcessor
struct UAnimationSharingStateProcessor : UObject {
	struct TSoftObjectPtr<UEnum> AnimationStateEnum; 

	void ProcessActorState(int32_t& OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // (Native|Event|Public|HasOutParms|BlueprintEvent)
	struct UEnum* GetAnimationStateEnum(); // (Native|Event|Public|BlueprintEvent)
};

