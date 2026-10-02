// Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8 {
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 4,
	EComputeNTBsOptions_MAX = 5
};

// ScriptStruct MeshDescription.ElementID
struct FElementID {
	int32_t IDValue; 
};

// ScriptStruct MeshDescription.PolygonGroupID
struct FPolygonGroupID : FElementID {
};

// ScriptStruct MeshDescription.PolygonID
struct FPolygonID : FElementID {
};

// ScriptStruct MeshDescription.VertexID
struct FVertexID : FElementID {
};

// ScriptStruct MeshDescription.VertexInstanceID
struct FVertexInstanceID : FElementID {
};

// ScriptStruct MeshDescription.EdgeID
struct FEdgeID : FElementID {
};

// ScriptStruct MeshDescription.TriangleID
struct FTriangleID : FElementID {
};

