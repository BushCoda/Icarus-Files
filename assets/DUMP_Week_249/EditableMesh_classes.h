// Class EditableMesh.EditableMeshAdapter
struct UEditableMeshAdapter : UObject {
};

// Class EditableMesh.EditableGeometryCollectionAdapter
struct UEditableGeometryCollectionAdapter : UEditableMeshAdapter {
	struct UGeometryCollection* GeometryCollection; 
	struct UGeometryCollection* OriginalGeometryCollection; 
	int32_t GeometryCollectionLODIndex; 
};

// Class EditableMesh.EditableMesh
struct UEditableMesh : UObject {
	struct TArray<struct UEditableMeshAdapter*> Adapters; 
	int32_t TextureCoordinateCount; 
	int32_t PendingCompactCounter; 
	int32_t SubdivisionCount; 

	void WeldVertices(struct TArray<struct FVertexID>& VertexIDs, struct FVertexID& OutNewVertexID); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void TryToRemoveVertex(struct FVertexID VertexID, bool& bOutWasVertexRemoved, struct FEdgeID& OutNewEdgeID); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void TryToRemovePolygonEdge(struct FEdgeID EdgeID, bool& bOutWasEdgeRemoved, struct FPolygonID& OutNewPolygonID); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void TriangulatePolygons(struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FPolygonID>& OutNewTrianglePolygons); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void TessellatePolygons(struct TArray<struct FPolygonID>& PolygonIDs, enum class ETriangleTessellationMode TriangleTessellationMode, struct TArray<struct FPolygonID>& OutNewPolygonIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void StartModification(enum class EMeshModificationType MeshModificationType, enum class EMeshTopologyChange MeshTopologyChange); // (Final|Native|Public|BlueprintCallable)
	void SplitPolygons(struct TArray<struct FPolygonToSplit>& PolygonsToSplit, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SplitPolygonalMesh(struct FPlane& InPlane, struct TArray<struct FPolygonID>& PolygonIDs1, struct TArray<struct FPolygonID>& PolygonIDs2, struct TArray<struct FEdgeID>& BoundaryIDs); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SplitEdge(struct FEdgeID EdgeID, struct TArray<float>& Splits, struct TArray<struct FVertexID>& OutNewVertexIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetVerticesCornerSharpness(struct TArray<struct FVertexID>& VertexIDs, struct TArray<float>& VerticesNewCornerSharpness); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetVerticesAttributes(struct TArray<struct FAttributesForVertex>& AttributesForVertices); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetVertexInstancesAttributes(struct TArray<struct FAttributesForVertexInstance>& AttributesForVertexInstances); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetTextureCoordinateCount(int32_t NumTexCoords); // (Final|Native|Public|BlueprintCallable)
	void SetSubdivisionCount(int32_t NewSubdivisionCount); // (Final|Native|Public|BlueprintCallable)
	void SetPolygonsVertexAttributes(struct TArray<struct FVertexAttributesForPolygon>& VertexAttributesForPolygons); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetEdgesHardnessAutomatically(struct TArray<struct FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetEdgesHardness(struct TArray<struct FEdgeID>& EdgeIDs, struct TArray<bool>& EdgesNewIsHard); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetEdgesCreaseSharpness(struct TArray<struct FEdgeID>& EdgeIDs, struct TArray<float>& EdgesNewCreaseSharpness); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetEdgesAttributes(struct TArray<struct FAttributesForEdge>& AttributesForEdges); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetAllowUndo(bool bInAllowUndo); // (Final|Native|Public|BlueprintCallable)
	void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase); // (Final|Native|Public|BlueprintCallable)
	void SetAllowCompact(bool bInAllowCompact); // (Final|Native|Public|BlueprintCallable)
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct FPlane& InPlane, struct TArray<struct FPolygonID>& OutPolygons); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct FVector LineSegmentStart, struct FVector LineSegmentEnd, struct TArray<struct FPolygonID>& OutPolygons); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void SearchSpatialDatabaseForPolygonsInVolume(struct TArray<struct FPlane>& Planes, struct TArray<struct FPolygonID>& OutPolygons); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct UEditableMesh* RevertInstance(); // (Final|Native|Public|BlueprintCallable)
	void Revert(); // (Final|Native|Public|BlueprintCallable)
	void RebuildRenderMesh(); // (Final|Native|Public|BlueprintCallable)
	void QuadrangulateMesh(struct TArray<struct FPolygonID>& OutNewPolygonIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void PropagateInstanceChanges(); // (Final|Native|Public|BlueprintCallable)
	void MoveVertices(struct TArray<struct FVertexToMove>& VerticesToMove); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FVertexID MakeVertexID(int32_t VertexIndex); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FPolygonID MakePolygonID(int32_t PolygonIndex); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FEdgeID MakeEdgeID(int32_t EdgeIndex); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsValidVertex(struct FVertexID VertexID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsValidPolygonGroup(struct FPolygonGroupID PolygonGroupID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsValidPolygon(struct FPolygonID PolygonID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsValidEdge(struct FEdgeID EdgeID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsUndoAllowed(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsSpatialDatabaseAllowed(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPreviewingSubdivisions(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsOrphanedVertex(struct FVertexID VertexID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsCompactAllowed(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsCommittedAsInstance(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsCommitted(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsBeingModified(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVertexID InvalidVertexID(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FPolygonID InvalidPolygonID(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FPolygonGroupID InvalidPolygonGroupID(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FEdgeID InvalidEdgeID(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void InsetPolygons(struct TArray<struct FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class EInsetPolygonsMode Mode, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void InsertEdgeLoop(struct FEdgeID EdgeID, struct TArray<float>& Splits, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void InitializeAdapters(); // (Final|Native|Public|BlueprintCallable)
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID, struct FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetVertexInstanceCount(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	int32_t GetVertexInstanceConnectedPolygonCount(struct FVertexInstanceID VertexInstanceID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FPolygonID GetVertexInstanceConnectedPolygon(struct FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetVertexCount(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutConnectedEdgeIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	int32_t GetVertexConnectedEdgeCount(struct FVertexID VertexID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FEdgeID GetVertexConnectedEdge(struct FVertexID VertexID, int32_t ConnectedEdgeNumber); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	int32_t GetTextureCoordinateCount(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FSubdivisionLimitData GetSubdivisionLimitData(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetSubdivisionCount(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPolygonTriangulatedTriangleCount(struct FPolygonID PolygonID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FTriangleID GetPolygonTriangulatedTriangle(struct FPolygonID PolygonID, int32_t PolygonTriangleNumber); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetPolygonPerimeterVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutPolygonPerimeterVertexIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetPolygonPerimeterVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FVertexInstanceID GetPolygonPerimeterVertexInstance(struct FPolygonID PolygonID, int32_t PolygonVertexNumber); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPolygonPerimeterVertexCount(struct FPolygonID PolygonID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVertexID GetPolygonPerimeterVertex(struct FPolygonID PolygonID, int32_t PolygonVertexNumber); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutPolygonPerimeterEdgeIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPolygonPerimeterEdgeCount(struct FPolygonID PolygonID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FEdgeID GetPolygonPerimeterEdge(struct FPolygonID PolygonID, int32_t PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FPolygonID GetPolygonInGroup(struct FPolygonGroupID PolygonGroupID, int32_t PolygonNumber); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPolygonGroupCount(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPolygonCountInGroup(struct FPolygonGroupID PolygonGroupID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPolygonCount(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutAdjacentPolygons); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FPolygonGroupID GetGroupForPolygon(struct FPolygonID PolygonID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FPolygonGroupID GetFirstValidPolygonGroup(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetEdgeVertices(struct FEdgeID EdgeID, struct FVertexID& OutEdgeVertexID0, struct FVertexID& OutEdgeVertexID1); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t EdgeVertexNumber); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FEdgeID GetEdgeThatConnectsVertices(struct FVertexID VertexID0, struct FVertexID VertexID1); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetEdgeLoopElements(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& EdgeLoopIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	int32_t GetEdgeCount(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	int32_t GetEdgeConnectedPolygonCount(struct FEdgeID EdgeID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FPolygonID GetEdgeConnectedPolygon(struct FEdgeID EdgeID, int32_t ConnectedPolygonNumber); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GeneratePolygonTangentsAndNormals(struct TArray<struct FPolygonID>& PolygonIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void FlipPolygons(struct TArray<struct FPolygonID>& PolygonIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	int32_t FindPolygonPerimeterVertexNumberForVertex(struct FPolygonID PolygonID, struct FVertexID VertexID); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t FindPolygonPerimeterEdgeNumberForVertices(struct FPolygonID PolygonID, struct FVertexID EdgeVertexID0, struct FVertexID EdgeVertexID1); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void FindPolygonLoop(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& OutEdgeLoopEdgeIDs, struct TArray<struct FEdgeID>& OutFlippedEdgeIDs, struct TArray<struct FEdgeID>& OutReversedEdgeIDPathToTake, struct TArray<struct FPolygonID>& OutPolygonIDsToSplit); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void ExtrudePolygons(struct TArray<struct FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, struct TArray<struct FPolygonID>& OutNewExtrudedFrontPolygons); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ExtendVertices(struct TArray<struct FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, struct FVector ReferencePosition, struct TArray<struct FVertexID>& OutNewExtendedVertexIDs); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void ExtendEdges(struct TArray<struct FEdgeID>& EdgeIDs, bool bWeldNeighbors, struct TArray<struct FEdgeID>& OutNewExtendedEdgeIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void EndModification(bool bFromUndo); // (Final|Native|Public|BlueprintCallable)
	void DeleteVertexInstances(struct TArray<struct FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void DeleteVertexAndConnectedEdgesAndPolygons(struct FVertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // (Final|Native|Public|BlueprintCallable)
	void DeletePolygons(struct TArray<struct FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void DeletePolygonGroups(struct TArray<struct FPolygonGroupID>& PolygonGroupIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void DeleteOrphanVertices(struct TArray<struct FVertexID>& VertexIDsToDelete); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void DeleteEdges(struct TArray<struct FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void DeleteEdgeAndConnectedPolygons(struct FEdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // (Final|Native|Public|BlueprintCallable)
	void CreateVertices(struct TArray<struct FVertexToCreate>& VerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void CreateVertexInstances(struct TArray<struct FVertexInstanceToCreate>& VertexInstancesToCreate, struct TArray<struct FVertexInstanceID>& OutNewVertexInstanceIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void CreatePolygons(struct TArray<struct FPolygonToCreate>& PolygonsToCreate, struct TArray<struct FPolygonID>& OutNewPolygonIDs, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void CreatePolygonGroups(struct TArray<struct FPolygonGroupToCreate>& PolygonGroupsToCreate, struct TArray<struct FPolygonGroupID>& OutNewPolygonGroupIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void CreateMissingPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void CreateEdges(struct TArray<struct FEdgeToCreate>& EdgesToCreate, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ComputePolygonsSharedEdges(struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FEdgeID>& OutSharedEdgeIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FPlane ComputePolygonPlane(struct FPolygonID PolygonID); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector ComputePolygonNormal(struct FPolygonID PolygonID); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector ComputePolygonCenter(struct FPolygonID PolygonID); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FBoxSphereBounds ComputeBoundingBoxAndSphere(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FBox ComputeBoundingBox(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct UEditableMesh* CommitInstance(struct UPrimitiveComponent* ComponentToInstanceTo); // (Final|Native|Public|BlueprintCallable)
	void Commit(); // (Final|Native|Public|BlueprintCallable)
	void ChangePolygonsVertexInstances(struct TArray<struct FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void BevelPolygons(struct TArray<struct FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void AssignPolygonsToPolygonGroups(struct TArray<struct FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool AnyChangesToUndo(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class EditableMesh.EditableMeshFactory
struct UEditableMeshFactory : UObject {

	struct UEditableMesh* MakeEditableMesh(struct UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class EditableMesh.EditableStaticMeshAdapter
struct UEditableStaticMeshAdapter : UEditableMeshAdapter {
	struct UStaticMesh* StaticMesh; 
	struct UStaticMesh* OriginalStaticMesh; 
	int32_t StaticMeshLODIndex; 
};

