// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8 {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5
};

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8 {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8 {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6
};

// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8 {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8 {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3
};

// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8 {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8 {
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10
};

// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8 {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	VerticalWrap = 3,
	Radial = 4,
	Overlay = 5,
	EDynamicBoxType_MAX = 6
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8 {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8 {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 4,
	EWidgetDesignFlags_MAX = 5
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8 {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2
};

// Enum UMG.ETickMode
enum class ETickMode : uint8 {
	Disabled = 0,
	Enabled = 1,
	Automatic = 2,
	ETickMode_MAX = 3
};

// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8 {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8 {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8 {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8 {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8 {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8 {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4
};

// ScriptStruct UMG.EventReply
struct FEventReply {
};

// ScriptStruct UMG.WidgetTransform
struct FWidgetTransform {
	struct FVector2D Translation; 
	struct FVector2D Scale; 
	struct FVector2D Shear; 
	float Angle; 
};

// ScriptStruct UMG.PaintContext
struct FPaintContext {
};

// ScriptStruct UMG.ShapedTextOptions
struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; 
	char bOverride_TextFlowDirection : 1; 
	enum class ETextShapingMethod TextShapingMethod; 
	enum class ETextFlowDirection TextFlowDirection; 
};

// ScriptStruct UMG.AnimationEventBinding
struct FAnimationEventBinding {
	struct UWidgetAnimation* Animation; 
	struct FDelegate Delegate; 
	enum class EWidgetAnimationEvent AnimationEvent; 
	struct FName UserTag; 
};

// ScriptStruct UMG.NamedSlotBinding
struct FNamedSlotBinding {
	struct FName Name; 
	struct UWidget* Content; 
};

// ScriptStruct UMG.AnchorData
struct FAnchorData {
	struct FMargin Offsets; 
	struct FAnchors Anchors; 
	struct FVector2D Alignment; 
};

// ScriptStruct UMG.DynamicPropertyPath
struct FDynamicPropertyPath : FCachedPropertyPath {
};

// ScriptStruct UMG.MovieScene2DTransformMask
struct FMovieScene2DTransformMask {
	uint32_t Mask; 
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<struct FName> BrushPropertyNamePath; 
};

// ScriptStruct UMG.RadialBoxSettings
struct FRadialBoxSettings {
	float StartingAngle; 
	bool bDistributeItemsEvenly; 
	float AngleBetweenItems; 
	float SectorCentralAngle; 
};

// ScriptStruct UMG.RichTextStyleRow
struct FRichTextStyleRow : FTableRowBase {
	struct FTextBlockStyle TextStyle; 
};

// ScriptStruct UMG.RichImageRow
struct FRichImageRow : FTableRowBase {
	struct FSlateBrush Brush; 
};

// ScriptStruct UMG.SlateMeshVertex
struct FSlateMeshVertex {
	struct FVector2D position; 
	struct FColor Color; 
	struct FVector2D UV0; 
	struct FVector2D UV1; 
	struct FVector2D UV2; 
	struct FVector2D UV3; 
	struct FVector2D UV4; 
	struct FVector2D UV5; 
};

// ScriptStruct UMG.SlateChildSize
struct FSlateChildSize {
	float Value; 
	enum class ESlateSizeRule SizeRule; 
};

// ScriptStruct UMG.UserWidgetPool
struct FUserWidgetPool {
	struct TArray<struct UUserWidget*> ActiveWidgets; 
	struct TArray<struct UUserWidget*> InactiveWidgets; 
};

// ScriptStruct UMG.WidgetAnimationBinding
struct FWidgetAnimationBinding {
	struct FName WidgetName; 
	struct FName SlotWidgetName; 
	struct FGuid AnimationGuid; 
	bool bIsRootWidget; 
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
struct FBlueprintWidgetAnimationDelegateBinding {
	enum class EWidgetAnimationEvent Action; 
	struct FName AnimationToBind; 
	struct FName FunctionNameToBind; 
	struct FName UserTag; 
};

// ScriptStruct UMG.DelegateRuntimeBinding
struct FDelegateRuntimeBinding {
	struct FString ObjectName; 
	struct FName PropertyName; 
	struct FName FunctionName; 
	struct FDynamicPropertyPath SourcePath; 
	enum class EBindingKind Kind; 
};

// ScriptStruct UMG.WidgetComponentInstanceData
struct FWidgetComponentInstanceData : FSceneComponentInstanceData {
};

// ScriptStruct UMG.WidgetNavigationData
struct FWidgetNavigationData {
	enum class EUINavigationRule Rule; 
	struct FName WidgetToFocus; 
	struct TWeakObjectPtr<struct UWidget> Widget; 
	struct FDelegate CustomDelegate; 
};

