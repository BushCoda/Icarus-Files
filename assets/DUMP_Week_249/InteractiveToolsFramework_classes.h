// Class InteractiveToolsFramework.InputBehavior
struct UInputBehavior : UObject {
};

// Class InteractiveToolsFramework.AnyButtonInputBehavior
struct UAnyButtonInputBehavior : UInputBehavior {
};

// Class InteractiveToolsFramework.InteractiveGizmoBuilder
struct UInteractiveGizmoBuilder : UObject {
};

// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
struct UAxisAngleGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.InteractiveGizmo
struct UInteractiveGizmo : UObject {
	struct UInputBehaviorSet* InputBehaviors; 
};

// Class InteractiveToolsFramework.AxisAngleGizmo
struct UAxisAngleGizmo : UInteractiveGizmo {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; 
	struct TScriptInterface<IGizmoFloatParameterSource> AngleSource; 
	struct TScriptInterface<IGizmoClickTarget> HitTarget; 
	struct TScriptInterface<IGizmoStateTarget> StateTarget; 
	bool bInInteraction; 
	struct FVector RotationOrigin; 
	struct FVector RotationAxis; 
	struct FVector RotationPlaneX; 
	struct FVector RotationPlaneY; 
	struct FVector InteractionStartPoint; 
	struct FVector InteractionCurPoint; 
	float InteractionStartAngle; 
	float InteractionCurAngle; 
};

// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
struct UAxisPositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.AxisPositionGizmo
struct UAxisPositionGizmo : UInteractiveGizmo {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; 
	struct TScriptInterface<IGizmoFloatParameterSource> ParameterSource; 
	struct TScriptInterface<IGizmoClickTarget> HitTarget; 
	struct TScriptInterface<IGizmoStateTarget> StateTarget; 
	bool bEnableSignedAxis; 
	bool bInInteraction; 
	struct FVector InteractionOrigin; 
	struct FVector InteractionAxis; 
	struct FVector InteractionStartPoint; 
	struct FVector InteractionCurPoint; 
	float InteractionStartParameter; 
	float InteractionCurParameter; 
	float ParameterSign; 
};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
struct UGizmoConstantAxisSource : UObject {
	struct FVector Origin; 
	struct FVector Direction; 
};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
struct UGizmoConstantFrameAxisSource : UObject {
	struct FVector Origin; 
	struct FVector Direction; 
	struct FVector TangentX; 
	struct FVector TangentY; 
};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
struct UGizmoWorldAxisSource : UObject {
	struct FVector Origin; 
	int32_t AxisIndex; 
};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
struct UGizmoComponentAxisSource : UObject {
	struct USceneComponent* Component; 
	int32_t AxisIndex; 
	bool bLocalAxes; 
};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
struct UInteractiveToolPropertySet : UObject {
	struct UInteractiveToolPropertySet* CachedProperties; 
	bool bIsPropertySetEnabled; 
};

// Class InteractiveToolsFramework.BrushBaseProperties
struct UBrushBaseProperties : UInteractiveToolPropertySet {
	float BrushSize; 
	bool bSpecifyRadius; 
	float BrushRadius; 
	float BrushStrength; 
	float BrushFalloffAmount; 
	bool bShowStrength; 
	bool bShowFalloff; 
};

// Class InteractiveToolsFramework.InteractiveTool
struct UInteractiveTool : UObject {
	struct UInputBehaviorSet* InputBehaviors; 
	struct TArray<struct UObject*> ToolPropertyObjects; 
};

// Class InteractiveToolsFramework.SingleSelectionTool
struct USingleSelectionTool : UInteractiveTool {
};

// Class InteractiveToolsFramework.MeshSurfacePointTool
struct UMeshSurfacePointTool : USingleSelectionTool {
};

// Class InteractiveToolsFramework.BaseBrushTool
struct UBaseBrushTool : UMeshSurfacePointTool {
	struct UBrushBaseProperties* BrushProperties; 
	bool bInBrushStroke; 
	float WorldToLocalScale; 
	struct FBrushStampData LastBrushStamp; 
	struct TSoftClassPtr<UObject> PropertyClass; 
	struct UBrushStampIndicator* BrushStampIndicator; 
};

// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
struct UBrushStampIndicatorBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.BrushStampIndicator
struct UBrushStampIndicator : UInteractiveGizmo {
	float BrushRadius; 
	float BrushFalloff; 
	struct FVector BrushPosition; 
	struct FVector BrushNormal; 
	bool bDrawIndicatorLines; 
	bool bDrawRadiusCircle; 
	int32_t SampleStepCount; 
	struct FLinearColor LineColor; 
	float LineThickness; 
	bool bDepthTested; 
	bool bDrawSecondaryLines; 
	float SecondaryLineThickness; 
	struct FLinearColor SecondaryLineColor; 
	struct UPrimitiveComponent* AttachedComponent; 
};

// Class InteractiveToolsFramework.ClickDragInputBehavior
struct UClickDragInputBehavior : UAnyButtonInputBehavior {
	bool bUpdateModifiersDuringDrag; 
};

// Class InteractiveToolsFramework.LocalClickDragInputBehavior
struct ULocalClickDragInputBehavior : UClickDragInputBehavior {
};

// Class InteractiveToolsFramework.InteractiveToolBuilder
struct UInteractiveToolBuilder : UObject {
};

// Class InteractiveToolsFramework.ClickDragToolBuilder
struct UClickDragToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.ClickDragTool
struct UClickDragTool : UInteractiveTool {
};

// Class InteractiveToolsFramework.InternalToolFrameworkActor
struct AInternalToolFrameworkActor : AActor {
};

// Class InteractiveToolsFramework.GizmoActor
struct AGizmoActor : AInternalToolFrameworkActor {
};

// Class InteractiveToolsFramework.GizmoBaseComponent
struct UGizmoBaseComponent : UPrimitiveComponent {
	struct FLinearColor Color; 
	float HoverSizeMultiplier; 
	float PixelHitDistanceThreshold; 

	void UpdateWorldLocalState(bool bWorldIn); // (Final|Native|Public)
	void UpdateHoverState(bool bHoveringIn); // (Final|Native|Public)
};

// Class InteractiveToolsFramework.GizmoArrowComponent
struct UGizmoArrowComponent : UGizmoBaseComponent {
	struct FVector Direction; 
	float Gap; 
	float Length; 
	float Thickness; 
};

// Class InteractiveToolsFramework.GizmoBoxComponent
struct UGizmoBoxComponent : UGizmoBaseComponent {
	struct FVector Origin; 
	struct FQuat Rotation; 
	struct FVector Dimensions; 
	float LineThickness; 
	bool bRemoveHiddenLines; 
	bool bEnableAxisFlip; 
};

// Class InteractiveToolsFramework.GizmoCircleComponent
struct UGizmoCircleComponent : UGizmoBaseComponent {
	struct FVector Normal; 
	float Radius; 
	float Thickness; 
	int32_t NumSides; 
	bool bViewAligned; 
	bool bOnlyAllowFrontFacingHits; 
};

// Class InteractiveToolsFramework.GizmoTransformSource
struct UGizmoTransformSource : UInterface {

	void SetTransform(struct FTransform& NewTransform); // (Native|Public|HasOutParms|HasDefaults)
	struct FTransform GetTransform(); // (Native|Public|HasDefaults|Const)
};

// Class InteractiveToolsFramework.GizmoAxisSource
struct UGizmoAxisSource : UInterface {

	bool HasTangentVectors(); // (Native|Public|Const)
	void GetTangentVectors(struct FVector& TangentXOut, struct FVector& TangentYOut); // (Native|Public|HasOutParms|HasDefaults|Const)
	struct FVector GetOrigin(); // (Native|Public|HasDefaults|Const)
	struct FVector GetDirection(); // (Native|Public|HasDefaults|Const)
};

// Class InteractiveToolsFramework.GizmoClickTarget
struct UGizmoClickTarget : UInterface {

	void UpdateHoverState(bool bHovering); // (Native|Public|Const)
};

// Class InteractiveToolsFramework.GizmoStateTarget
struct UGizmoStateTarget : UInterface {

	void EndUpdate(); // (Native|Public)
	void BeginUpdate(); // (Native|Public)
};

// Class InteractiveToolsFramework.GizmoFloatParameterSource
struct UGizmoFloatParameterSource : UInterface {

	void SetParameter(float NewValue); // (Native|Public)
	float GetParameter(); // (Native|Public|Const)
	void EndModify(); // (Native|Public)
	void BeginModify(); // (Native|Public)
};

// Class InteractiveToolsFramework.GizmoVec2ParameterSource
struct UGizmoVec2ParameterSource : UInterface {

	void SetParameter(struct FVector2D& NewValue); // (Native|Public|HasOutParms|HasDefaults)
	struct FVector2D GetParameter(); // (Native|Public|HasDefaults|Const)
	void EndModify(); // (Native|Public)
	void BeginModify(); // (Native|Public)
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	struct FVector Normal; 
	float HandleSize; 
	float Thickness; 
	struct FVector Direction; 
	float Length; 
	bool bImageScale; 
};

// Class InteractiveToolsFramework.GizmoRectangleComponent
struct UGizmoRectangleComponent : UGizmoBaseComponent {
	struct FVector DirectionX; 
	struct FVector DirectionY; 
	float OffsetX; 
	float OffsetY; 
	float LengthX; 
	float LengthY; 
	float Thickness; 
	char SegmentFlags; 
};

// Class InteractiveToolsFramework.GizmoLambdaHitTarget
struct UGizmoLambdaHitTarget : UObject {
};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
struct UGizmoComponentHitTarget : UObject {
	struct UPrimitiveComponent* Component; 
};

// Class InteractiveToolsFramework.InputBehaviorSet
struct UInputBehaviorSet : UObject {
	struct TArray<struct FBehaviorInfo> Behaviors; 
};

// Class InteractiveToolsFramework.InputBehaviorSource
struct UInputBehaviorSource : UInterface {
};

// Class InteractiveToolsFramework.InputRouter
struct UInputRouter : UObject {
	bool bAutoInvalidateOnHover; 
	bool bAutoInvalidateOnCapture; 
	struct UInputBehaviorSet* ActiveInputBehaviors; 
};

// Class InteractiveToolsFramework.InteractionMechanic
struct UInteractionMechanic : UObject {
};

// Class InteractiveToolsFramework.InteractiveGizmoManager
struct UInteractiveGizmoManager : UObject {
	struct TArray<struct FActiveGizmo> ActiveGizmos; 
	struct TMap<struct FString, struct UInteractiveGizmoBuilder*> GizmoBuilders; 
};

// Class InteractiveToolsFramework.ToolContextTransactionProvider
struct UToolContextTransactionProvider : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolManager
struct UInteractiveToolManager : UObject {
	struct UInteractiveTool* ActiveLeftTool; 
	struct UInteractiveTool* ActiveRightTool; 
	struct TMap<struct FString, struct UInteractiveToolBuilder*> ToolBuilders; 
};

// Class InteractiveToolsFramework.ToolFrameworkComponent
struct UToolFrameworkComponent : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolsContext
struct UInteractiveToolsContext : UObject {
	struct UInputRouter* InputRouter; 
	struct UInteractiveToolManager* ToolManager; 
	struct UInteractiveGizmoManager* GizmoManager; 
	struct TSoftClassPtr<UObject> ToolManagerClass; 
};

// Class InteractiveToolsFramework.IntervalGizmoActor
struct AIntervalGizmoActor : AGizmoActor {
	struct UGizmoLineHandleComponent* UpIntervalComponent; 
	struct UGizmoLineHandleComponent* DownIntervalComponent; 
	struct UGizmoLineHandleComponent* ForwardIntervalComponent; 
};

// Class InteractiveToolsFramework.IntervalGizmoBuilder
struct UIntervalGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.IntervalGizmo
struct UIntervalGizmo : UInteractiveGizmo {
	struct UGizmoTransformChangeStateTarget* StateTarget; 
	struct UTransformProxy* TransformProxy; 
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; 
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; 
	struct UGizmoComponentAxisSource* AxisYSource; 
	struct UGizmoComponentAxisSource* AxisZSource; 
};

// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
struct UGizmoBaseFloatParameterSource : UObject {
};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; 
	float MinParameter; 
	float MaxParameter; 
};

// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
struct UKeyAsModifierInputBehavior : UInputBehavior {
};

// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
struct UMeshSurfacePointToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.MouseHoverBehavior
struct UMouseHoverBehavior : UInputBehavior {
};

// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
struct UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior {
};

// Class InteractiveToolsFramework.MultiSelectionTool
struct UMultiSelectionTool : UInteractiveTool {
};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; 
	struct FGizmoFloatParameterChange LastChange; 
};

// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
struct UGizmoBaseVec2ParameterSource : UObject {
};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	struct FVector2D Value; 
	struct FGizmoVec2ParameterChange LastChange; 
};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
struct UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; 
	struct TScriptInterface<IGizmoTransformSource> TransformSource; 
	float Parameter; 
	struct FGizmoFloatParameterChange LastChange; 
	struct FVector CurTranslationAxis; 
	struct FVector CurTranslationOrigin; 
	struct FTransform InitialTransform; 
};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
struct UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; 
	struct TScriptInterface<IGizmoTransformSource> TransformSource; 
	struct FVector2D Parameter; 
	struct FGizmoVec2ParameterChange LastChange; 
	struct FVector CurTranslationOrigin; 
	struct FVector CurTranslationNormal; 
	struct FVector CurTranslationAxisX; 
	struct FVector CurTranslationAxisY; 
	struct FTransform InitialTransform; 
};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; 
	struct TScriptInterface<IGizmoTransformSource> TransformSource; 
	float Angle; 
	struct FGizmoFloatParameterChange LastChange; 
	struct FVector CurRotationAxis; 
	struct FVector CurRotationOrigin; 
	struct FTransform InitialTransform; 
};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
struct UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; 
	struct TScriptInterface<IGizmoTransformSource> TransformSource; 
	float ScaleMultiplier; 
	struct FVector2D Parameter; 
	struct FGizmoVec2ParameterChange LastChange; 
	struct FVector CurScaleOrigin; 
	struct FVector CurScaleNormal; 
	struct FVector CurScaleAxisX; 
	struct FVector CurScaleAxisY; 
	struct FTransform InitialTransform; 
};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
struct UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; 
	struct TScriptInterface<IGizmoTransformSource> TransformSource; 
	float ScaleMultiplier; 
	float Parameter; 
	struct FGizmoFloatParameterChange LastChange; 
	struct FVector CurScaleAxis; 
	struct FVector CurScaleOrigin; 
	struct FTransform InitialTransform; 
};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
struct UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; 
	struct TScriptInterface<IGizmoTransformSource> TransformSource; 
	float ScaleMultiplier; 
	struct FVector2D Parameter; 
	struct FGizmoVec2ParameterChange LastChange; 
	struct FVector CurScaleOrigin; 
	struct FVector CurScaleNormal; 
	struct FVector CurScaleAxisX; 
	struct FVector CurScaleAxisY; 
	struct FTransform InitialTransform; 
};

// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
struct UPlanePositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.PlanePositionGizmo
struct UPlanePositionGizmo : UInteractiveGizmo {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; 
	struct TScriptInterface<IGizmoVec2ParameterSource> ParameterSource; 
	struct TScriptInterface<IGizmoClickTarget> HitTarget; 
	struct TScriptInterface<IGizmoStateTarget> StateTarget; 
	bool bEnableSignedAxis; 
	bool bFlipX; 
	bool bFlipY; 
	bool bInInteraction; 
	struct FVector InteractionOrigin; 
	struct FVector InteractionNormal; 
	struct FVector InteractionAxisX; 
	struct FVector InteractionAxisY; 
	struct FVector InteractionStartPoint; 
	struct FVector InteractionCurPoint; 
	struct FVector2D InteractionStartParameter; 
	struct FVector2D InteractionCurParameter; 
	struct FVector2D ParameterSigns; 
};

// Class InteractiveToolsFramework.SelectionSet
struct USelectionSet : UObject {
};

// Class InteractiveToolsFramework.MeshSelectionSet
struct UMeshSelectionSet : USelectionSet {
	struct TArray<int32_t> Vertices; 
	struct TArray<int32_t> Edges; 
	struct TArray<int32_t> Faces; 
	struct TArray<int32_t> Groups; 
};

// Class InteractiveToolsFramework.SingleClickInputBehavior
struct USingleClickInputBehavior : UAnyButtonInputBehavior {
	bool HitTestOnRelease; 
};

// Class InteractiveToolsFramework.SingleClickToolBuilder
struct USingleClickToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.SingleClickTool
struct USingleClickTool : UInteractiveTool {
};

// Class InteractiveToolsFramework.GizmoNilStateTarget
struct UGizmoNilStateTarget : UObject {
};

// Class InteractiveToolsFramework.GizmoLambdaStateTarget
struct UGizmoLambdaStateTarget : UObject {
};

// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
struct UGizmoObjectModifyStateTarget : UObject {
};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
struct UGizmoTransformChangeStateTarget : UObject {
	struct TScriptInterface<IToolContextTransactionProvider> TransactionManager; 
};

// Class InteractiveToolsFramework.TransformGizmoActor
struct ATransformGizmoActor : AGizmoActor {
	struct UPrimitiveComponent* TranslateX; 
	struct UPrimitiveComponent* TranslateY; 
	struct UPrimitiveComponent* TranslateZ; 
	struct UPrimitiveComponent* TranslateYZ; 
	struct UPrimitiveComponent* TranslateXZ; 
	struct UPrimitiveComponent* TranslateXY; 
	struct UPrimitiveComponent* RotateX; 
	struct UPrimitiveComponent* RotateY; 
	struct UPrimitiveComponent* RotateZ; 
	struct UPrimitiveComponent* UniformScale; 
	struct UPrimitiveComponent* AxisScaleX; 
	struct UPrimitiveComponent* AxisScaleY; 
	struct UPrimitiveComponent* AxisScaleZ; 
	struct UPrimitiveComponent* PlaneScaleYZ; 
	struct UPrimitiveComponent* PlaneScaleXZ; 
	struct UPrimitiveComponent* PlaneScaleXY; 
};

// Class InteractiveToolsFramework.TransformGizmoBuilder
struct UTransformGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.TransformGizmo
struct UTransformGizmo : UInteractiveGizmo {
	struct UTransformProxy* ActiveTarget; 
	bool bSnapToWorldGrid; 
	bool bGridSizeIsExplicit; 
	struct FVector ExplicitGridSize; 
	bool bRotationGridSizeIsExplicit; 
	struct FRotator ExplicitRotationGridSize; 
	bool bSnapToWorldRotGrid; 
	bool bUseContextCoordinateSystem; 
	enum class EToolContextCoordinateSystem CurrentCoordinateSystem; 
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; 
	struct TArray<struct UPrimitiveComponent*> NonuniformScaleComponents; 
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; 
	struct UGizmoConstantFrameAxisSource* CameraAxisSource; 
	struct UGizmoComponentAxisSource* AxisXSource; 
	struct UGizmoComponentAxisSource* AxisYSource; 
	struct UGizmoComponentAxisSource* AxisZSource; 
	struct UGizmoComponentAxisSource* UnitAxisXSource; 
	struct UGizmoComponentAxisSource* UnitAxisYSource; 
	struct UGizmoComponentAxisSource* UnitAxisZSource; 
	struct UGizmoTransformChangeStateTarget* StateTarget; 
	struct UGizmoScaledTransformSource* ScaledTransformSource; 
};

// Class InteractiveToolsFramework.TransformProxy
struct UTransformProxy : UObject {
	bool bRotatePerObject; 
	bool bSetPivotMode; 
	struct FTransform SharedTransform; 
	struct FTransform InitialSharedTransform; 
};

// Class InteractiveToolsFramework.GizmoBaseTransformSource
struct UGizmoBaseTransformSource : UObject {
};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	struct USceneComponent* Component; 
	bool bModifyComponentOnTransform; 
};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	struct TScriptInterface<IGizmoTransformSource> ChildTransformSource; 
};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	struct UTransformProxy* Proxy; 
};

