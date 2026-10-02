// BlueprintGeneratedClass BP_GreatApe_JumpPoint.BP_GreatApe_JumpPoint_C
struct ABP_GreatApe_JumpPoint_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* JumpBranchPoint_3A; 
	struct UStaticMeshComponent* JumpBranchPoint_3B; 
	struct UStaticMeshComponent* JumpStart_2; 
	struct UStaticMeshComponent* JumpTrunkPoint_3; 
	struct USceneComponent* DefaultSceneRoot; 
	bool ShowConnections; 

	void Project Start to Nav Mesh(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DrawTreeDebugLines(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_GreatApe_JumpPoint(int32_t EntryPoint); // (Final|UbergraphFunction)
};

