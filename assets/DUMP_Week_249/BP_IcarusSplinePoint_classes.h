// BlueprintGeneratedClass BP_IcarusSplinePoint.BP_IcarusSplinePoint_C
struct UBP_IcarusSplinePoint_C : UIcarusSplinePoint {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMesh* RepMesh; 
	struct UMaterialInterface* RepMaterial; 
	struct FTransform RepTrans; 
	bool Ghost; 
	struct UMaterialInterface* GhostMaterial; 
	struct FTransform NonReplicatedTransform; 

	void GetTransform(struct FTransform& Out); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Update Transform(struct FTransform NewTransform); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Ghost(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_GhostMaterial(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_RepTrans(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_RepMaterial(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_RepMesh(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void async reinit(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusSplinePoint(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

