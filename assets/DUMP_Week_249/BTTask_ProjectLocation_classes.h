// BlueprintGeneratedClass BTTask_ProjectLocation.BTTask_ProjectLocation_C
struct UBTTask_ProjectLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector InLocationKey; 
	struct FBlackboardKeySelector OutProjectedLocationKey; 
	struct FVector TargetLocation; 
	struct UNavigationQueryFilter* Filter Class; 
	struct FVector Query Extent; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_ProjectLocation(int32_t EntryPoint); // (Final|UbergraphFunction)
};

