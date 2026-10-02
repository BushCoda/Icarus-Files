// BlueprintGeneratedClass BP_SkeletalItem_Crossbow_Lithium.BP_SkeletalItem_Crossbow_Lithium_C
struct ABP_SkeletalItem_Crossbow_Lithium_C : ABP_SkeletalItem_LithiumBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_ActionableBehaviour_Firearm_C* FirearmBehaviour; 

	void GetFireTransform(bool& Success, struct FTransform& FireTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConsumeFuel(int32_t Amount); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Crossbow_Lithium(int32_t EntryPoint); // (Final|UbergraphFunction)
};

