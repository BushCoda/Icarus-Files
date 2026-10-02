// BlueprintGeneratedClass BTT_GetLocationAtDistanceFromTarget.BTT_GetLocationAtDistanceFromTarget_C
struct UBTT_GetLocationAtDistanceFromTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector OutLocationKey; 
	struct FBlackboardKeySelector TargetActorOrLocation; 
	struct FVector TargetLocation; 
	struct AActor* OwnerRef; 
	float DistanceToTarget; 
	bool ProjectToNavigation; 
	struct FVector ProjectionExtent; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_GetLocationAtDistanceFromTarget(int32_t EntryPoint); // (Final|UbergraphFunction)
};

