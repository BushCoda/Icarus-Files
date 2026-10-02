// BlueprintGeneratedClass BTT_FindRandomPointAroundTarget.BTT_FindRandomPointAroundTarget_C
struct UBTT_FindRandomPointAroundTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector InTargetActor; 
	struct FBlackboardKeySelector OutTargetLocationKey; 
	float Radius; 
	bool ProjectToGround; 
	float ProjectionDistance; 
	float ProjectionOffset; 
	struct FVector PostProjectionOffset; 
	bool ProjectToNavigation; 
	struct FVector NavProjectionExtent; 
	bool MakePostProjectionRelative; 
	struct APawn* PawnRef; 
	bool AddHalfCapsuleHeight; 
	struct ACharacter* CharacterRef; 
	float CapsuleHalfHeightMultiplier; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindRandomPointAroundTarget(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

