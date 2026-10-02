// BlueprintGeneratedClass BP_GreatApe_Runaway_Location.BP_GreatApe_Runaway_Location_C
struct ABP_GreatApe_Runaway_Location_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* JumpStart_2; 
	struct UStaticMeshComponent* JumpBranchPoint_4; 
	struct UStaticMeshComponent* JumpTrunkPoint_3; 
	struct USceneComponent* DefaultSceneRoot; 

	void ProjectStartToNavMesh(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_GreatApe_Runaway_Location(int32_t EntryPoint); // (Final|UbergraphFunction)
};

