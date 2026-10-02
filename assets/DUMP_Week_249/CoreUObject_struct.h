// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8 {
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5,
	CIM_MAX = 6
};

// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8 {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3
};

// Enum CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8 {
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3
};

// Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8 {
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3
};

// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8 {
	None = 0,
	Default = 1,
	TextEditBeam = 2,
	ResizeLeftRight = 3,
	ResizeUpDown = 4,
	ResizeSouthEast = 5,
	ResizeSouthWest = 6,
	CardinalCross = 7,
	Crosshairs = 8,
	Hand = 9,
	GrabHand = 10,
	GrabHandClosed = 11,
	SlashedCircle = 12,
	EyeDropper = 13,
	EMouseCursor_MAX = 14
};

// Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8 {
	COND_None = 0,
	COND_InitialOnly = 1,
	COND_OwnerOnly = 2,
	COND_SkipOwner = 3,
	COND_SimulatedOnly = 4,
	COND_AutonomousOnly = 5,
	COND_SimulatedOrPhysics = 6,
	COND_InitialOrOwner = 7,
	COND_Custom = 8,
	COND_ReplayOrOwner = 9,
	COND_ReplayOnly = 10,
	COND_SimulatedOnlyNoReplay = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay = 13,
	COND_Never = 15,
	COND_Max = 16
};

// Enum CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8 {
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3
};

// Enum CoreUObject.EAppMsgType
enum class EAppMsgType : uint8 {
	Ok = 0,
	YesNo = 1,
	OkCancel = 2,
	YesNoCancel = 3,
	CancelRetryContinue = 4,
	YesNoYesAllNoAll = 5,
	YesNoYesAllNoAllCancel = 6,
	YesNoYesAll = 7,
	EAppMsgType_MAX = 8
};

// Enum CoreUObject.EAppReturnType
enum class EAppReturnType : uint8 {
	No = 0,
	Yes = 1,
	YesAll = 2,
	NoAll = 3,
	Cancel = 4,
	Ok = 5,
	Retry = 6,
	Continue = 7,
	EAppReturnType_MAX = 8
};

// Enum CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8 {
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3
};

// Enum CoreUObject.EUnit
enum class EUnit : uint8 {
	Micrometers = 0,
	Millimeters = 1,
	Centimeters = 2,
	Meters = 3,
	Kilometers = 4,
	Inches = 5,
	Feet = 6,
	Yards = 7,
	Miles = 8,
	Lightyears = 9,
	Degrees = 10,
	Radians = 11,
	MetersPerSecond = 12,
	KilometersPerHour = 13,
	MilesPerHour = 14,
	Celsius = 15,
	Farenheit = 16,
	Kelvin = 17,
	Micrograms = 18,
	Milligrams = 19,
	Grams = 20,
	Kilograms = 21,
	MetricTons = 22,
	Ounces = 23,
	Pounds = 24,
	Stones = 25,
	Newtons = 26,
	PoundsForce = 27,
	KilogramsForce = 28,
	Hertz = 29,
	Kilohertz = 30,
	Megahertz = 31,
	Gigahertz = 32,
	RevolutionsPerMinute = 33,
	Bytes = 34,
	Kilobytes = 35,
	Megabytes = 36,
	Gigabytes = 37,
	Terabytes = 38,
	Lumens = 39,
	Milliseconds = 43,
	Seconds = 44,
	Minutes = 45,
	Hours = 46,
	Days = 47,
	Months = 48,
	Years = 49,
	Multiplier = 52,
	Percentage = 51,
	Unspecified = 53,
	EUnit_MAX = 54
};

// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8 {
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_B8G8R8A8 = 2,
	PF_G8 = 3,
	PF_G16 = 4,
	PF_DXT1 = 5,
	PF_DXT3 = 6,
	PF_DXT5 = 7,
	PF_UYVY = 8,
	PF_FloatRGB = 9,
	PF_FloatRGBA = 10,
	PF_DepthStencil = 11,
	PF_ShadowDepth = 12,
	PF_R32_FLOAT = 13,
	PF_G16R16 = 14,
	PF_G16R16F = 15,
	PF_G16R16F_FILTER = 16,
	PF_G32R32F = 17,
	PF_A2B10G10R10 = 18,
	PF_A16B16G16R16 = 19,
	PF_D24 = 20,
	PF_R16F = 21,
	PF_R16F_FILTER = 22,
	PF_BC5 = 23,
	PF_V8U8 = 24,
	PF_A1 = 25,
	PF_FloatR11G11B10 = 26,
	PF_A8 = 27,
	PF_R32_UINT = 28,
	PF_R32_SINT = 29,
	PF_PVRTC2 = 30,
	PF_PVRTC4 = 31,
	PF_R16_UINT = 32,
	PF_R16_SINT = 33,
	PF_R16G16B16A16_UINT = 34,
	PF_R16G16B16A16_SINT = 35,
	PF_R5G6B5_UNORM = 36,
	PF_R8G8B8A8 = 37,
	PF_A8R8G8B8 = 38,
	PF_BC4 = 39,
	PF_R8G8 = 40,
	PF_ATC_RGB = 41,
	PF_ATC_RGBA_E = 42,
	PF_ATC_RGBA_I = 43,
	PF_X24_G8 = 44,
	PF_ETC1 = 45,
	PF_ETC2_RGB = 46,
	PF_ETC2_RGBA = 47,
	PF_R32G32B32A32_UINT = 48,
	PF_R16G16_UINT = 49,
	PF_ASTC_4x4 = 50,
	PF_ASTC_6x6 = 51,
	PF_ASTC_8x8 = 52,
	PF_ASTC_10x10 = 53,
	PF_ASTC_12x12 = 54,
	PF_BC6H = 55,
	PF_BC7 = 56,
	PF_R8_UINT = 57,
	PF_L8 = 58,
	PF_XGXR8 = 59,
	PF_R8G8B8A8_UINT = 60,
	PF_R8G8B8A8_SNORM = 61,
	PF_R16G16B16A16_UNORM = 62,
	PF_R16G16B16A16_SNORM = 63,
	PF_PLATFORM_HDR_1 = 64,
	PF_PLATFORM_HDR_2 = 65,
	PF_PLATFORM_HDR_3 = 66,
	PF_NV12 = 67,
	PF_R32G32_UINT = 68,
	PF_ETC2_R11_EAC = 69,
	PF_ETC2_RG11_EAC = 70,
	PF_MAX = 72
};

// Enum CoreUObject.EAxis
enum class EAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4
};

// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8 {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4
};

// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8 {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2
};

// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8 {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2
};

// ScriptStruct CoreUObject.JoinabilitySettings
struct FJoinabilitySettings {
	struct FName SessionName; 
	bool bPublicSearchable; 
	bool bAllowInvites; 
	bool bJoinViaPresence; 
	bool bJoinViaPresenceFriendsOnly; 
	int32_t MaxPlayers; 
	int32_t MaxPartySize; 
};

// ScriptStruct CoreUObject.UniqueNetIdWrapper
struct FUniqueNetIdWrapper {
};

// ScriptStruct CoreUObject.Guid
struct FGuid {
	int32_t A; 
	int32_t B; 
	int32_t C; 
	int32_t D; 
};

// ScriptStruct CoreUObject.Vector
struct FVector {
	float X; 
	float Y; 
	float Z; 
};

// ScriptStruct CoreUObject.Vector4
struct FVector4 {
	float X; 
	float Y; 
	float Z; 
	float W; 
};

// ScriptStruct CoreUObject.Vector2D
struct FVector2D {
	float X; 
	float Y; 
};

// ScriptStruct CoreUObject.TwoVectors
struct FTwoVectors {
	struct FVector v1; 
	struct FVector v2; 
};

// ScriptStruct CoreUObject.Plane
struct FPlane : FVector {
	float W; 
};

// ScriptStruct CoreUObject.Rotator
struct FRotator {
	float Pitch; 
	float Yaw; 
	float Roll; 
};

// ScriptStruct CoreUObject.Quat
struct FQuat {
	float X; 
	float Y; 
	float Z; 
	float W; 
};

// ScriptStruct CoreUObject.PackedNormal
struct FPackedNormal {
	char X; 
	char Y; 
	char Z; 
	char W; 
};

// ScriptStruct CoreUObject.PackedRGB10A2N
struct FPackedRGB10A2N {
	int32_t Packed; 
};

// ScriptStruct CoreUObject.PackedRGBA16N
struct FPackedRGBA16N {
	int32_t XY; 
	int32_t ZW; 
};

// ScriptStruct CoreUObject.IntPoint
struct FIntPoint {
	int32_t X; 
	int32_t Y; 
};

// ScriptStruct CoreUObject.IntVector
struct FIntVector {
	int32_t X; 
	int32_t Y; 
	int32_t Z; 
};

// ScriptStruct CoreUObject.Color
struct FColor {
	char B; 
	char G; 
	char R; 
	char A; 
};

// ScriptStruct CoreUObject.LinearColor
struct FLinearColor {
	float R; 
	float G; 
	float B; 
	float A; 
};

// ScriptStruct CoreUObject.Box
struct FBox {
	struct FVector Min; 
	struct FVector Max; 
	char IsValid; 
};

// ScriptStruct CoreUObject.Box2D
struct FBox2D {
	struct FVector2D Min; 
	struct FVector2D Max; 
	char bIsValid; 
};

// ScriptStruct CoreUObject.BoxSphereBounds
struct FBoxSphereBounds {
	struct FVector Origin; 
	struct FVector BoxExtent; 
	float SphereRadius; 
};

// ScriptStruct CoreUObject.OrientedBox
struct FOrientedBox {
	struct FVector Center; 
	struct FVector AxisX; 
	struct FVector AxisY; 
	struct FVector AxisZ; 
	float ExtentX; 
	float ExtentY; 
	float ExtentZ; 
};

// ScriptStruct CoreUObject.Matrix
struct FMatrix {
	struct FPlane XPlane; 
	struct FPlane YPlane; 
	struct FPlane ZPlane; 
	struct FPlane WPlane; 
};

// ScriptStruct CoreUObject.InterpCurvePointFloat
struct FInterpCurvePointFloat {
	float InVal; 
	float OutVal; 
	float ArriveTangent; 
	float LeaveTangent; 
	enum class EInterpCurveMode InterpMode; 
};

// ScriptStruct CoreUObject.InterpCurveFloat
struct FInterpCurveFloat {
	struct TArray<struct FInterpCurvePointFloat> Points; 
	bool bIsLooped; 
	float LoopKeyOffset; 
};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
struct FInterpCurvePointVector2D {
	float InVal; 
	struct FVector2D OutVal; 
	struct FVector2D ArriveTangent; 
	struct FVector2D LeaveTangent; 
	enum class EInterpCurveMode InterpMode; 
};

// ScriptStruct CoreUObject.InterpCurveVector2D
struct FInterpCurveVector2D {
	struct TArray<struct FInterpCurvePointVector2D> Points; 
	bool bIsLooped; 
	float LoopKeyOffset; 
};

// ScriptStruct CoreUObject.InterpCurvePointVector
struct FInterpCurvePointVector {
	float InVal; 
	struct FVector OutVal; 
	struct FVector ArriveTangent; 
	struct FVector LeaveTangent; 
	enum class EInterpCurveMode InterpMode; 
};

// ScriptStruct CoreUObject.InterpCurveVector
struct FInterpCurveVector {
	struct TArray<struct FInterpCurvePointVector> Points; 
	bool bIsLooped; 
	float LoopKeyOffset; 
};

// ScriptStruct CoreUObject.InterpCurvePointQuat
struct FInterpCurvePointQuat {
	float InVal; 
	struct FQuat OutVal; 
	struct FQuat ArriveTangent; 
	struct FQuat LeaveTangent; 
	enum class EInterpCurveMode InterpMode; 
};

// ScriptStruct CoreUObject.InterpCurveQuat
struct FInterpCurveQuat {
	struct TArray<struct FInterpCurvePointQuat> Points; 
	bool bIsLooped; 
	float LoopKeyOffset; 
};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
struct FInterpCurvePointTwoVectors {
	float InVal; 
	struct FTwoVectors OutVal; 
	struct FTwoVectors ArriveTangent; 
	struct FTwoVectors LeaveTangent; 
	enum class EInterpCurveMode InterpMode; 
};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
struct FInterpCurveTwoVectors {
	struct TArray<struct FInterpCurvePointTwoVectors> Points; 
	bool bIsLooped; 
	float LoopKeyOffset; 
};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
struct FInterpCurvePointLinearColor {
	float InVal; 
	struct FLinearColor OutVal; 
	struct FLinearColor ArriveTangent; 
	struct FLinearColor LeaveTangent; 
	enum class EInterpCurveMode InterpMode; 
};

// ScriptStruct CoreUObject.InterpCurveLinearColor
struct FInterpCurveLinearColor {
	struct TArray<struct FInterpCurvePointLinearColor> Points; 
	bool bIsLooped; 
	float LoopKeyOffset; 
};

// ScriptStruct CoreUObject.Transform
struct FTransform {
	struct FQuat Rotation; 
	struct FVector Translation; 
	struct FVector Scale3D; 
};

// ScriptStruct CoreUObject.RandomStream
struct FRandomStream {
	int32_t InitialSeed; 
	int32_t Seed; 
};

// ScriptStruct CoreUObject.DateTime
struct FDateTime {
};

// ScriptStruct CoreUObject.FrameNumber
struct FFrameNumber {
	int32_t Value; 
};

// ScriptStruct CoreUObject.FrameRate
struct FFrameRate {
	int32_t Numerator; 
	int32_t Denominator; 
};

// ScriptStruct CoreUObject.FrameTime
struct FFrameTime {
	struct FFrameNumber FrameNumber; 
	float SubFrame; 
};

// ScriptStruct CoreUObject.QualifiedFrameTime
struct FQualifiedFrameTime {
	struct FFrameTime Time; 
	struct FFrameRate Rate; 
};

// ScriptStruct CoreUObject.Timecode
struct FTimecode {
	int32_t Hours; 
	int32_t Minutes; 
	int32_t Seconds; 
	int32_t Frames; 
	bool bDropFrameFormat; 
};

// ScriptStruct CoreUObject.Timespan
struct FTimespan {
};

// ScriptStruct CoreUObject.SoftObjectPath
struct FSoftObjectPath {
	struct FName AssetPathName; 
	struct FString SubPathString; 
};

// ScriptStruct CoreUObject.SoftClassPath
struct FSoftClassPath : FSoftObjectPath {
};

// ScriptStruct CoreUObject.PrimaryAssetType
struct FPrimaryAssetType {
	struct FName Name; 
};

// ScriptStruct CoreUObject.PrimaryAssetId
struct FPrimaryAssetId {
	struct FPrimaryAssetType PrimaryAssetType; 
	struct FName PrimaryAssetName; 
};

// ScriptStruct CoreUObject.FallbackStruct
struct FFallbackStruct {
};

// ScriptStruct CoreUObject.FloatRangeBound
struct FFloatRangeBound {
	enum class ERangeBoundTypes Type; 
	float Value; 
};

// ScriptStruct CoreUObject.FloatRange
struct FFloatRange {
	struct FFloatRangeBound LowerBound; 
	struct FFloatRangeBound UpperBound; 
};

// ScriptStruct CoreUObject.Int32RangeBound
struct FInt32RangeBound {
	enum class ERangeBoundTypes Type; 
	int32_t Value; 
};

// ScriptStruct CoreUObject.Int32Range
struct FInt32Range {
	struct FInt32RangeBound LowerBound; 
	struct FInt32RangeBound UpperBound; 
};

// ScriptStruct CoreUObject.FrameNumberRangeBound
struct FFrameNumberRangeBound {
	enum class ERangeBoundTypes Type; 
	struct FFrameNumber Value; 
};

// ScriptStruct CoreUObject.FrameNumberRange
struct FFrameNumberRange {
	struct FFrameNumberRangeBound LowerBound; 
	struct FFrameNumberRangeBound UpperBound; 
};

// ScriptStruct CoreUObject.FloatInterval
struct FFloatInterval {
	float Min; 
	float Max; 
};

// ScriptStruct CoreUObject.Int32Interval
struct FInt32Interval {
	int32_t Min; 
	int32_t Max; 
};

// ScriptStruct CoreUObject.PolyglotTextData
struct FPolyglotTextData {
	enum class ELocalizedTextSourceCategory Category; 
	struct FString NativeCulture; 
	struct FString Namespace; 
	struct FString Key; 
	struct FString NativeString; 
	struct TMap<struct FString, struct FString> LocalizedStrings; 
	bool bIsMinimalPatch; 
	struct FText CachedText; 
};

// ScriptStruct CoreUObject.AutomationEvent
struct FAutomationEvent {
	enum class EAutomationEventType Type; 
	struct FString Message; 
	struct FString Context; 
	struct FGuid Artifact; 
};

// ScriptStruct CoreUObject.AutomationExecutionEntry
struct FAutomationExecutionEntry {
	struct FAutomationEvent Event; 
	struct FString Filename; 
	int32_t LineNumber; 
	struct FDateTime Timestamp; 
};

// ScriptStruct CoreUObject.ARFilter
struct FARFilter {
	struct TArray<struct FName> PackageNames; 
	struct TArray<struct FName> PackagePaths; 
	struct TArray<struct FName> ObjectPaths; 
	struct TArray<struct FName> ClassNames; 
	struct TSet<struct FName> RecursiveClassesExclusionSet; 
	bool bRecursivePaths; 
	bool bRecursiveClasses; 
	bool bIncludeOnlyOnDiskAssets; 
};

// ScriptStruct CoreUObject.AssetBundleEntry
struct FAssetBundleEntry {
	struct FName BundleName; 
	struct TArray<struct FSoftObjectPath> BundleAssets; 
};

// ScriptStruct CoreUObject.AssetBundleData
struct FAssetBundleData {
	struct TArray<struct FAssetBundleEntry> Bundles; 
};

// ScriptStruct CoreUObject.AssetData
struct FAssetData {
	struct FName ObjectPath; 
	struct FName PackageName; 
	struct FName PackagePath; 
	struct FName AssetName; 
	struct FName AssetClass; 
};

// ScriptStruct CoreUObject.TestUninitializedScriptStructMembersTest
struct FTestUninitializedScriptStructMembersTest {
	struct UObject* UninitializedObjectReference; 
	struct UObject* InitializedObjectReference; 
	float UnusedValue; 
};

