// BlueprintGeneratedClass BP_FactionBoss_Controller.BP_FactionBoss_Controller_C
struct ABP_FactionBoss_Controller_C : AAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBlackboardData* DefaultBlackboard; 
	struct UBehaviorTree* DefaultBehaviourTree; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_FactionBoss_Controller(int32_t EntryPoint); // (Final|UbergraphFunction)
};

