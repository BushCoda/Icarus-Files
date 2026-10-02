// Class MeshWidget.MeshWidget
struct UMeshWidget : UWidget {
	struct FMulticastInlineDelegate OnRequestMeshInstanceUpdate; 

	void UpdatePerInstanceBuffer(int32_t MeshId, struct TArray<struct FVector4> Data); // (Final|Native|Public|BlueprintCallable)
	void UpdateMeshInstance(int32_t MeshId, int32_t InstanceId, struct FMeshInstanceData NewData); // (Final|Native|Public|BlueprintCallable)
	struct FGeometry GetCachedAllottedGeometry(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void EnableInstancing(int32_t MeshId, int32_t InstanceCount); // (Final|Native|Public|BlueprintCallable)
	struct UMaterialInstanceDynamic* ConvertToMaterialInstanceDynamic(int32_t MeshId); // (Final|Native|Public|BlueprintCallable)
	void ClearRuns(int32_t NumRuns); // (Final|Native|Public|BlueprintCallable)
	void AddRenderRun(int32_t InMeshIndex, int32_t InInstanceOffset, int32_t InNumInstances); // (Final|Native|Public|BlueprintCallable)
	int32_t AddMeshWithInstancing(struct USlateVectorArtData* InMeshData, int32_t InstanceCount); // (Final|Native|Public|BlueprintCallable)
	int32_t AddMesh(struct USlateVectorArtData* InMeshData); // (Final|Native|Public|BlueprintCallable)
};

