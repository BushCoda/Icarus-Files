// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
struct UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary {

	void SliceProceduralMesh(struct UProceduralMeshComponent* InProcMesh, struct FVector PlanePosition, struct FVector PlaneNormal, bool bCreateOtherHalf, struct UProceduralMeshComponent*& OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, struct UMaterialInterface* CapMaterial); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void GetSectionFromStaticMesh(struct UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetSectionFromProceduralMesh(struct UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GenerateBoxMesh(struct FVector BoxRadius, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void CreateGridMeshWelded(int32_t NumX, int32_t NumY, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, float GridSpacing); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, struct TArray<int32_t>& Triangles); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void CreateGridMeshSplit(int32_t NumX, int32_t NumY, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector2D>& UV1s, float GridSpacing); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void CopyProceduralMeshFromStaticMeshComponent(struct UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, struct UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision); // (Final|Native|Static|Public|BlueprintCallable)
	void ConvertQuadToTriangles(struct TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void CalculateTangentsForMesh(struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector>& Normals, struct TArray<struct FProcMeshTangent>& Tangents); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
struct UProceduralMeshComponent : UMeshComponent {
	bool bUseComplexAsSimpleCollision; 
	bool bUseAsyncCooking; 
	struct UBodySetup* ProcMeshBodySetup; 
	struct TArray<struct FProcMeshSection> ProcMeshSections; 
	struct TArray<struct FKConvexElem> CollisionConvexElems; 
	struct FBoxSphereBounds LocalBounds; 
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; 

	void UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void UpdateMeshSection(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility); // (Final|Native|Public|BlueprintCallable)
	bool IsMeshSectionVisible(int32_t SectionIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumSections(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void CreateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void CreateMeshSection(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ClearMeshSection(int32_t SectionIndex); // (Final|Native|Public|BlueprintCallable)
	void ClearCollisionConvexMeshes(); // (Final|Native|Public|BlueprintCallable)
	void ClearAllMeshSections(); // (Final|Native|Public|BlueprintCallable)
	void AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts); // (Final|Native|Public|BlueprintCallable)
};

