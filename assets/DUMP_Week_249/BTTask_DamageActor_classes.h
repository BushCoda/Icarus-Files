// BlueprintGeneratedClass BTTask_DamageActor.BTTask_DamageActor_C
struct UBTTask_DamageActor_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActorKey; 
	int32_t DamageAmount; 
	enum class EIcarusDamageType DamageType; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_DamageActor(int32_t EntryPoint); // (Final|UbergraphFunction)
};

