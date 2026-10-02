// BlueprintGeneratedClass BTTask_TrySpawnAdditionalAI_AtLocation.BTTask_TrySpawnAdditionalAI_AtLocation_C
struct UBTTask_TrySpawnAdditionalAI_AtLocation_C : UBTTask_TrySpawnAdditionalAI_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector SpawnActorOrLocation; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_TrySpawnAdditionalAI_AtLocation(int32_t EntryPoint); // (Final|UbergraphFunction)
};

