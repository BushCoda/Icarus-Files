// BlueprintGeneratedClass BTService_UpdateSettlerAnimState.BTService_UpdateSettlerAnimState_C
struct UBTService_UpdateSettlerAnimState_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector AnimStateKey; 
	enum class SettlementNPC_AnimState DesiredAnimState; 
	enum class SettlementNPC_AnimState FallbackDefaultAnimState; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTService_UpdateSettlerAnimState(int32_t EntryPoint); // (Final|UbergraphFunction)
};

