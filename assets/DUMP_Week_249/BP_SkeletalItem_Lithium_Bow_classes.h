// BlueprintGeneratedClass BP_SkeletalItem_Lithium_Bow.BP_SkeletalItem_Lithium_Bow_C
struct ABP_SkeletalItem_Lithium_Bow_C : ABP_SkeletalItem_LithiumBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UChildActorComponent* Arrow; 

	void GetFireTransform(bool& Success, struct FTransform& FireTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConsumeFuel(int32_t Amount); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Lithium_Bow(int32_t EntryPoint); // (Final|UbergraphFunction)
};

