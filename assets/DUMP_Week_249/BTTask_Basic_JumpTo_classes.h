// BlueprintGeneratedClass BTTask_Basic_JumpTo.BTTask_Basic_JumpTo_C
struct UBTTask_Basic_JumpTo_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetLocationKey; 
	struct FVector Target; 
	struct AIcarusNPCGOAPCharacter* CharacterReference; 
	struct FVector StartingLocation; 
	float LastAlpha; 
	float LastXAlpha; 
	struct UAnimMontage* JumpMontageOverride; 
	enum class EMovementMode New Movement Mode; 
	bool AdjustForTargetVelocity; 
	float TimeToReachTarget; 

	void GetMontage(struct UAnimMontage*& Montage); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void OnJumpFinished(struct UAnimMontage* Montage, bool bInterrupted); // (BlueprintCallable|BlueprintEvent)
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void StartJump(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTTask_Basic_JumpTo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

