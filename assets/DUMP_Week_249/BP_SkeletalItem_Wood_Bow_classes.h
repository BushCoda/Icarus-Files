// BlueprintGeneratedClass BP_SkeletalItem_Wood_Bow.BP_SkeletalItem_Wood_Bow_C
struct ABP_SkeletalItem_Wood_Bow_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UChildActorComponent* Arrow; 

	void GetFireTransform(bool& Success, struct FTransform& FireTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Wood_Bow(int32_t EntryPoint); // (Final|UbergraphFunction)
};

