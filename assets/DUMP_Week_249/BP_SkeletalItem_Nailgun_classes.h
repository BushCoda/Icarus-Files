// BlueprintGeneratedClass BP_SkeletalItem_Nailgun.BP_SkeletalItem_Nailgun_C
struct ABP_SkeletalItem_Nailgun_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionComponent_Building_C* BP_UIProjectionComponent_Building; 
	float TraceDistance; 
	struct ABP_Building_Base_C* LastBuildingHit; 

	void GetFireTransform(bool& Success, struct FTransform& FireTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Nailgun(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

