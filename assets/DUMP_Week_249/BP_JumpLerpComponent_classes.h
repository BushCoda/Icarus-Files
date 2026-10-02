// BlueprintGeneratedClass BP_JumpLerpComponent.BP_JumpLerpComponent_C
struct UBP_JumpLerpComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsJumpLerping; 
	struct FVector StartingLocation; 
	float LastAlpha; 
	float LastXAlpha; 
	enum class EVisibilityBasedAnimTickOption StartingTickType; 
	bool UseMontageBlendAlpha; 
	bool IgnoreCapsuleHeight; 
	struct FTransform Target; 
	bool BlendRotation; 
	struct FTransform StartingTransform; 

	void GetOwningCharacter(struct ACharacter*& Character); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void StartJumpLerpTowardsTarget(struct FVector TargetLocation, struct TArray<struct AActor*>& ActorsToMoveIgnore, bool UseMontageBlendOutAsAlpha, bool IgnoreCapsuleHeight); // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FinishJumpLerp(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void TickJumpLerp(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void StartJumpLerpTowardsTransform(struct FTransform TargetTransform, struct TArray<struct AActor*>& ActorsToMoveIgnore, bool UseMontageBlendOutAsAlpha, bool IgnoreCapsuleHeight); // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_JumpLerpComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

