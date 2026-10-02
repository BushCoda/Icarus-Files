// Class MRMesh.MeshReconstructorBase
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // (Native|Public|BlueprintCallable)
	void StartReconstruction(); // (Native|Public|BlueprintCallable)
	void PauseReconstruction(); // (Native|Public|BlueprintCallable)
	bool IsReconstructionStarted(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsReconstructionPaused(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	void DisconnectMRMesh(); // (Native|Public)
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // (Native|Public)
};

// Class MRMesh.MockDataMeshTrackerComponent
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; 
	bool ScanWorld; 
	bool RequestNormals; 
	bool RequestVertexConfidence; 
	enum class EMeshTrackerVertexColorMode VertexColorMode; 
	struct TArray<struct FColor> BlockVertexColors; 
	struct FLinearColor VertexColorFromConfidenceZero; 
	struct FLinearColor VertexColorFromConfidenceOne; 
	float UpdateInterval; 
	struct UMRMeshComponent* MRMesh; 

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // (Final|Native|Public|BlueprintCallable)
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // (Final|Native|Public|BlueprintCallable)
};

// Class MRMesh.MRMeshComponent
struct UMRMeshComponent : UPrimitiveComponent {
	struct UMaterialInterface* Material; 
	struct UMaterialInterface* WireframeMaterial; 
	bool bCreateMeshProxySections; 
	bool bUpdateNavMeshOnMeshUpdate; 
	bool bNeverCreateCollisionMesh; 
	struct UBodySetup* CachedBodySetup; 
	struct TArray<struct UBodySetup*> BodySetups; 

	void SetWireframeMaterial(struct UMaterialInterface* InMaterial); // (Native|Public|BlueprintCallable)
	void SetWireframeColor(struct FLinearColor& InColor); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetUseWireframe(bool bUseWireframe); // (Final|Native|Public|BlueprintCallable)
	void SetEnableMeshOcclusion(bool bEnable); // (Final|Native|Public|BlueprintCallable)
	bool IsConnected(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FLinearColor GetWireframeColor(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool GetUseWireframe(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetEnableMeshOcclusion(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void ForceNavMeshUpdate(); // (Final|Native|Public|BlueprintCallable)
	void Clear(); // (Final|Native|Public|BlueprintCallable)
};

