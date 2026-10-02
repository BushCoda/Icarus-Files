// BlueprintGeneratedClass BTTask_FindClosestActor.BTTask_FindClosestActor_C
struct UBTTask_FindClosestActor_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AActor* ActorType; 
	float MinDistance; 
	bool HasFoundActor; 
	struct AActor* ClosestActor; 
	struct FName BlackboardName; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_FindClosestActor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

