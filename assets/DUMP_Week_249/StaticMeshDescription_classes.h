// Class StaticMeshDescription.StaticMeshDescription
struct UStaticMeshDescription : UMeshDescriptionBase {

	void SetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, struct FVector2D UV, int32_t UVIndex); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetPolygonGroupMaterialSlotName(struct FPolygonGroupID PolygonGroupID, struct FName& SlotName); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FVector2D GetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, int32_t UVIndex); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void CreateCube(struct FVector Center, struct FVector HalfExtents, struct FPolygonGroupID PolygonGroup, struct FPolygonID& PolygonID_PlusX, struct FPolygonID& PolygonID_MinusX, struct FPolygonID& PolygonID_PlusY, struct FPolygonID& PolygonID_MinusY, struct FPolygonID& PolygonID_PlusZ, struct FPolygonID& PolygonID_MinusZ); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

