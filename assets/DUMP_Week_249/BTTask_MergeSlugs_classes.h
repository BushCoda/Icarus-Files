// BlueprintGeneratedClass BTTask_MergeSlugs.BTTask_MergeSlugs_C
struct UBTTask_MergeSlugs_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UObject* MergeSlug; 
	struct FAISetupRowHandle AISetup; 
	struct FEpicCreaturesRowHandle Epic Creature Setup; 
	struct FVector CachedLocation; 
	float CachedHealthPercent; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_MergeSlugs(int32_t EntryPoint); // (Final|UbergraphFunction)
};

