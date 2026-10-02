// BlueprintGeneratedClass BP_IcarusSplineSegment.BP_IcarusSplineSegment_C
struct UBP_IcarusSplineSegment_C : UIcarusSplineSegment {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FIcarusSplineMeshStruct RepSplineData; 
	struct UMaterialInterface* RepFinalMaterial; 
	struct UStaticMesh* RepMesh; 
	bool Ghost; 
	struct UPrimitiveComponent* RepresentitiveComponent; 
	struct UPrimitiveComponent* RepresentitiveClass; 
	int32_t SegmentIndex; 
	bool debug begin play finished; 
	struct UMaterialInterface* RepGhostMaterial; 
	struct FVector RepOffset; 
	int32_t ChangableMaterialIndex; 
	struct FIcarusSplineMeshStruct LocalSplineData; 

	void OnRep_SegmentIndex(); // (BlueprintCallable|BlueprintEvent)
	bool IsLocalSplineDataValid(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetSplineData(struct FIcarusSplineMeshStruct& SplineData); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void SetSplineData(struct FIcarusSplineMeshStruct SplineData); // (Public|BlueprintCallable|BlueprintEvent)
	void IsPointCloserToStart(struct FVector WorldLocationPoint, bool& CloserToStart); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_RepresentitiveComponent(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_RepFinalMaterial(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_RepGhostMaterial(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_RepOffset(); // (BlueprintCallable|BlueprintEvent)
	void Set Spline Start and End(struct FVector Start Pos, struct FVector Start Tan, struct FVector End Pos, struct FVector End Tan, bool UpdateOnClients); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Ghost(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_RepMesh(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_RepSplineData(); // (BlueprintCallable|BlueprintEvent)
	void Init(); // (BlueprintCallable|BlueprintEvent)
	void async reinit(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void MULTI_ForceUpdateLocalSplineData(struct FIcarusSplineMeshStruct LocalSplineData); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusSplineSegment(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

