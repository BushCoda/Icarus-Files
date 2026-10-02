// Enum Landmass.EBrushFalloffMode
enum class EBrushFalloffMode : uint8 {
	Angle = 0,
	Width = 1,
	EBrushFalloffMode_MAX = 2
};

// Enum Landmass.EBrushBlendType
enum class EBrushBlendType : uint8 {
	AlphaBlend = 0,
	Min = 1,
	Max = 2,
	Additive = 3
};

// ScriptStruct Landmass.LandmassBrushEffectsList
struct FLandmassBrushEffectsList {
	struct FBrushEffectBlurring Blurring; 
	struct FBrushEffectCurlNoise CurlNoise; 
	struct FBrushEffectDisplacement Displacement; 
	struct FBrushEffectSmoothBlending SmoothBlending; 
	struct FBrushEffectTerracing Terracing; 
};

// ScriptStruct Landmass.BrushEffectTerracing
struct FBrushEffectTerracing {
	float TerraceAlpha; 
	float TerraceSpacing; 
	float TerraceSmoothness; 
	float MaskLength; 
	float MaskStartOffset; 
};

// ScriptStruct Landmass.BrushEffectSmoothBlending
struct FBrushEffectSmoothBlending {
	float InnerSmoothDistance; 
	float OuterSmoothDistance; 
};

// ScriptStruct Landmass.BrushEffectDisplacement
struct FBrushEffectDisplacement {
	float DisplacementHeight; 
	float DisplacementTiling; 
	struct UTexture2D* Texture; 
	float Midpoint; 
	struct FLinearColor Channel; 
	float WeightmapInfluence; 
};

// ScriptStruct Landmass.BrushEffectCurlNoise
struct FBrushEffectCurlNoise {
	float Curl1Amount; 
	float Curl2Amount; 
	float Curl1Tiling; 
	float Curl2Tiling; 
};

// ScriptStruct Landmass.BrushEffectBlurring
struct FBrushEffectBlurring {
	bool bBlurShape; 
	int32_t Radius; 
};

// ScriptStruct Landmass.BrushEffectCurves
struct FBrushEffectCurves {
	bool bUseCurveChannel; 
	struct UCurveFloat* ElevationCurveAsset; 
	float ChannelEdgeOffset; 
	float ChannelDepth; 
	float CurveRampWidth; 
};

// ScriptStruct Landmass.LandmassFalloffSettings
struct FLandmassFalloffSettings {
	enum class EBrushFalloffMode FalloffMode; 
	float FalloffAngle; 
	float FalloffWidth; 
	float EdgeOffset; 
	float ZOffset; 
};

// ScriptStruct Landmass.LandmassTerrainCarvingSettings
struct FLandmassTerrainCarvingSettings {
	enum class EBrushBlendType BlendMode; 
	bool bInvertShape; 
	struct FLandmassFalloffSettings FalloffSettings; 
	struct FLandmassBrushEffectsList Effects; 
	int32_t Priority; 
};

