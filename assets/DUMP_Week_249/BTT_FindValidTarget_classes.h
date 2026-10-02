// BlueprintGeneratedClass BTT_FindValidTarget.BTT_FindValidTarget_C
struct UBTT_FindValidTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetKey; 
	float MaxTargetDistance; 
	enum class ERelationshipType TargetRelationship; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindValidTarget(int32_t EntryPoint); // (Final|UbergraphFunction)
};

