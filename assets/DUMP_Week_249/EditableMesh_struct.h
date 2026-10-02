// Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8 {
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2
};

// Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8 {
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3
};

// Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8 {
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4
};

// Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8 {
	None = 0,
	FVector4 = 1,
	FVector = 2,
	FVector2D = 3,
	Float = 4,
	Int = 5,
	Bool = 6,
	FName = 7,
	EMeshElementAttributeType_MAX = 8
};

// Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8 {
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2
};

// Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8 {
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3
};

// ScriptStruct EditableMesh.AdaptorPolygon2Group
struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; 
	int32_t MaterialIndex; 
	int32_t MaxTriangles; 
};

// ScriptStruct EditableMesh.AdaptorPolygon
struct FAdaptorPolygon {
	struct FPolygonGroupID PolygonGroupID; 
	struct TArray<struct FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; 
};

// ScriptStruct EditableMesh.AdaptorTriangleID
struct FAdaptorTriangleID : FElementID {
};

// ScriptStruct EditableMesh.PolygonGroupForPolygon
struct FPolygonGroupForPolygon {
	struct FPolygonID PolygonID; 
	struct FPolygonGroupID PolygonGroupID; 
};

// ScriptStruct EditableMesh.PolygonGroupToCreate
struct FPolygonGroupToCreate {
	struct FMeshElementAttributeList PolygonGroupAttributes; 
	struct FPolygonGroupID OriginalPolygonGroupID; 
};

// ScriptStruct EditableMesh.MeshElementAttributeList
struct FMeshElementAttributeList {
	struct TArray<struct FMeshElementAttributeData> Attributes; 
};

// ScriptStruct EditableMesh.MeshElementAttributeData
struct FMeshElementAttributeData {
	struct FName AttributeName; 
	int32_t AttributeIndex; 
	struct FMeshElementAttributeValue AttributeValue; 
};

// ScriptStruct EditableMesh.MeshElementAttributeValue
struct FMeshElementAttributeValue {
};

// ScriptStruct EditableMesh.VertexToMove
struct FVertexToMove {
	struct FVertexID VertexID; 
	struct FVector NewVertexPosition; 
};

// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
struct FChangeVertexInstancesForPolygon {
	struct FPolygonID PolygonID; 
	struct TArray<struct FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; 
	struct TArray<struct FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; 
};

// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
struct FVertexInstancesForPolygonHole {
	struct TArray<struct FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; 
};

// ScriptStruct EditableMesh.VertexIndexAndInstanceID
struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; 
	struct FVertexInstanceID VertexInstanceID; 
};

// ScriptStruct EditableMesh.VertexAttributesForPolygon
struct FVertexAttributesForPolygon {
	struct FPolygonID PolygonID; 
	struct TArray<struct FMeshElementAttributeList> PerimeterVertexAttributeLists; 
	struct TArray<struct FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; 
};

// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
struct FVertexAttributesForPolygonHole {
	struct TArray<struct FMeshElementAttributeList> VertexAttributeList; 
};

// ScriptStruct EditableMesh.AttributesForEdge
struct FAttributesForEdge {
	struct FEdgeID EdgeID; 
	struct FMeshElementAttributeList EdgeAttributes; 
};

// ScriptStruct EditableMesh.AttributesForVertexInstance
struct FAttributesForVertexInstance {
	struct FVertexInstanceID VertexInstanceID; 
	struct FMeshElementAttributeList VertexInstanceAttributes; 
};

// ScriptStruct EditableMesh.AttributesForVertex
struct FAttributesForVertex {
	struct FVertexID VertexID; 
	struct FMeshElementAttributeList VertexAttributes; 
};

// ScriptStruct EditableMesh.PolygonToSplit
struct FPolygonToSplit {
	struct FPolygonID PolygonID; 
	struct TArray<struct FVertexPair> VertexPairsToSplitAt; 
};

// ScriptStruct EditableMesh.VertexPair
struct FVertexPair {
	struct FVertexID VertexID0; 
	struct FVertexID VertexID1; 
};

// ScriptStruct EditableMesh.PolygonToCreate
struct FPolygonToCreate {
	struct FPolygonGroupID PolygonGroupID; 
	struct TArray<struct FVertexAndAttributes> PerimeterVertices; 
	struct FPolygonID OriginalPolygonID; 
	enum class EPolygonEdgeHardness PolygonEdgeHardness; 
};

// ScriptStruct EditableMesh.VertexAndAttributes
struct FVertexAndAttributes {
	struct FVertexInstanceID VertexInstanceID; 
	struct FVertexID VertexID; 
	struct FMeshElementAttributeList PolygonVertexAttributes; 
};

// ScriptStruct EditableMesh.EdgeToCreate
struct FEdgeToCreate {
	struct FVertexID VertexID0; 
	struct FVertexID VertexID1; 
	struct FMeshElementAttributeList EdgeAttributes; 
	struct FEdgeID OriginalEdgeID; 
};

// ScriptStruct EditableMesh.VertexInstanceToCreate
struct FVertexInstanceToCreate {
	struct FVertexID VertexID; 
	struct FMeshElementAttributeList VertexInstanceAttributes; 
	struct FVertexInstanceID OriginalVertexInstanceID; 
};

// ScriptStruct EditableMesh.VertexToCreate
struct FVertexToCreate {
	struct FMeshElementAttributeList VertexAttributes; 
	struct FVertexID OriginalVertexID; 
};

// ScriptStruct EditableMesh.SubdivisionLimitData
struct FSubdivisionLimitData {
	struct TArray<struct FVector> VertexPositions; 
	struct TArray<struct FSubdivisionLimitSection> Sections; 
	struct TArray<struct FSubdividedWireEdge> SubdividedWireEdges; 
};

// ScriptStruct EditableMesh.SubdividedWireEdge
struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; 
	int32_t EdgeVertex1PositionIndex; 
};

// ScriptStruct EditableMesh.SubdivisionLimitSection
struct FSubdivisionLimitSection {
	struct TArray<struct FSubdividedQuad> SubdividedQuads; 
};

// ScriptStruct EditableMesh.SubdividedQuad
struct FSubdividedQuad {
	struct FSubdividedQuadVertex QuadVertex0; 
	struct FSubdividedQuadVertex QuadVertex1; 
	struct FSubdividedQuadVertex QuadVertex2; 
	struct FSubdividedQuadVertex QuadVertex3; 
};

// ScriptStruct EditableMesh.SubdividedQuadVertex
struct FSubdividedQuadVertex {
	int32_t VertexPositionIndex; 
	struct FVector2D TextureCoordinate0; 
	struct FVector2D TextureCoordinate1; 
	struct FColor VertexColor; 
	struct FVector VertexNormal; 
	struct FVector VertexTangent; 
	float VertexBinormalSign; 
};

// ScriptStruct EditableMesh.RenderingPolygonGroup
struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; 
	int32_t MaterialIndex; 
	int32_t MaxTriangles; 
};

// ScriptStruct EditableMesh.RenderingPolygon
struct FRenderingPolygon {
	struct FPolygonGroupID PolygonGroupID; 
	struct TArray<struct FTriangleID> TriangulatedPolygonTriangleIndices; 
};

