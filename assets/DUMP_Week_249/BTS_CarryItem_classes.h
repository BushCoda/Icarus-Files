// BlueprintGeneratedClass BTS_CarryItem.BTS_CarryItem_C
struct UBTS_CarryItem_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector ItemActorKey; 
	struct AIcarusItem* ItemReference; 
	struct FName MouthSocket; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_CarryItem(int32_t EntryPoint); // (Final|UbergraphFunction)
};

