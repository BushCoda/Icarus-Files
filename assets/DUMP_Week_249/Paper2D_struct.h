// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8 {
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3
};

// Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8 {
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2
};

// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8 {
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4
};

// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8 {
	Top_Left = 0,
	Top_Center = 1,
	Top_Right = 2,
	Center_Left = 3,
	Center_Center = 4,
	Center_Right = 5,
	Bottom_Left = 6,
	Bottom_Center = 7,
	Bottom_Right = 8,
	Custom = 9,
	ESpritePivotMode_MAX = 10
};

// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8 {
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5
};

// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8 {
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3
};

// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8 {
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3
};

// ScriptStruct Paper2D.IntMargin
struct FIntMargin {
	int32_t Left; 
	int32_t Top; 
	int32_t Right; 
	int32_t Bottom; 
};

// ScriptStruct Paper2D.PaperFlipbookKeyFrame
struct FPaperFlipbookKeyFrame {
	struct UPaperSprite* Sprite; 
	int32_t FrameRun; 
};

// ScriptStruct Paper2D.SpriteInstanceData
struct FSpriteInstanceData {
	struct FMatrix Transform; 
	struct UPaperSprite* SourceSprite; 
	struct FColor VertexColor; 
	int32_t MaterialIndex; 
};

// ScriptStruct Paper2D.PaperSpriteSocket
struct FPaperSpriteSocket {
	struct FTransform LocalTransform; 
	struct FName SocketName; 
};

// ScriptStruct Paper2D.PaperSpriteAtlasSlot
struct FPaperSpriteAtlasSlot {
	struct TSoftObjectPtr<UPaperSprite> SpriteRef; 
	int32_t AtlasIndex; 
	int32_t X; 
	int32_t Y; 
	int32_t Width; 
	int32_t Height; 
};

// ScriptStruct Paper2D.PaperTerrainMaterialRule
struct FPaperTerrainMaterialRule {
	struct UPaperSprite* StartCap; 
	struct TArray<struct UPaperSprite*> Body; 
	struct UPaperSprite* EndCap; 
	float MinimumAngle; 
	float MaximumAngle; 
	bool bEnableCollision; 
	float CollisionOffset; 
	int32_t DrawOrder; 
};

// ScriptStruct Paper2D.PaperTileInfo
struct FPaperTileInfo {
	struct UPaperTileSet* TileSet; 
	int32_t PackedTileIndex; 
};

// ScriptStruct Paper2D.PaperTileSetTerrain
struct FPaperTileSetTerrain {
	struct FString TerrainName; 
	int32_t CenterTileIndex; 
};

// ScriptStruct Paper2D.PaperTileMetadata
struct FPaperTileMetadata {
	struct FName UserDataName; 
	struct FSpriteGeometryCollection CollisionData; 
	char TerrainMembership[0x4]; 
};

// ScriptStruct Paper2D.SpriteGeometryCollection
struct FSpriteGeometryCollection {
	struct TArray<struct FSpriteGeometryShape> Shapes; 
	enum class ESpritePolygonMode GeometryType; 
	int32_t PixelsPerSubdivisionX; 
	int32_t PixelsPerSubdivisionY; 
	bool bAvoidVertexMerging; 
	float AlphaThreshold; 
	float DetailAmount; 
	float SimplifyEpsilon; 
};

// ScriptStruct Paper2D.SpriteGeometryShape
struct FSpriteGeometryShape {
	enum class ESpriteShapeType ShapeType; 
	struct TArray<struct FVector2D> Vertices; 
	struct FVector2D BoxSize; 
	struct FVector2D BoxPosition; 
	float Rotation; 
	bool bNegativeWinding; 
};

// ScriptStruct Paper2D.SpriteDrawCallRecord
struct FSpriteDrawCallRecord {
	struct FVector Destination; 
	struct UTexture* BaseTexture; 
	struct FColor Color; 
};

// ScriptStruct Paper2D.SpriteAssetInitParameters
struct FSpriteAssetInitParameters {
};

