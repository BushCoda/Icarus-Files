// BlueprintGeneratedClass BTT_CopyActorLocationToVectorKey.BTT_CopyActorLocationToVectorKey_C
struct UBTT_CopyActorLocationToVectorKey_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector SourceActor; 
	struct FBlackboardKeySelector TargetVector; 
	struct FVector OffsetToApply; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_CopyActorLocationToVectorKey(int32_t EntryPoint); // (Final|UbergraphFunction)
};

