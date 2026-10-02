// Class ControlRig.ControlRig
struct UControlRig : UObject {
	enum class ERigExecutionType ExecutionType; 
	struct URigVM* VM; 
	struct FRigHierarchyContainer Hierarchy; 
	struct TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary; 
	struct TMap<struct FName, struct FCachedPropertyPath> InputProperties; 
	struct TMap<struct FName, struct FCachedPropertyPath> OutputProperties; 
	struct FControlRigDrawContainer DrawContainer; 
	struct UAnimationDataSourceRegistry* DataSourceRegistry; 
	struct TArray<struct FName> EventQueue; 
	struct FRigInfluenceMapPerEvent Influences; 
	struct UControlRig* InteractionRig; 
	struct UControlRig* InteractionRigClass; 
	struct TArray<struct UAssetUserData*> AssetUserData; 

	void SetInteractionRigClass(struct UControlRig* InInteractionRigClass); // (Final|Native|Public|BlueprintCallable)
	void SetInteractionRig(struct UControlRig* InInteractionRig); // (Final|Native|Public|BlueprintCallable)
	struct UControlRig* GetInteractionRigClass(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UControlRig* GetInteractionRig(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class ControlRig.AdditiveControlRig
struct UAdditiveControlRig : UControlRig {
};

// Class ControlRig.ControlRigAnimInstance
struct UControlRigAnimInstance : UAnimInstance {
};

// Class ControlRig.ControlRigBlueprintGeneratedClass
struct UControlRigBlueprintGeneratedClass : UBlueprintGeneratedClass {
};

// Class ControlRig.ControlRigComponent
struct UControlRigComponent : UPrimitiveComponent {
	struct UControlRig* ControlRigClass; 
	struct FMulticastInlineDelegate OnPostInitializeDelegate; 
	struct FMulticastInlineDelegate OnPreSetupDelegate; 
	struct FMulticastInlineDelegate OnPostSetupDelegate; 
	struct FMulticastInlineDelegate OnPreUpdateDelegate; 
	struct FMulticastInlineDelegate OnPostUpdateDelegate; 
	struct TArray<struct FControlRigComponentMappedElement> MappedElements; 
	bool bResetTransformBeforeTick; 
	bool bResetInitialsBeforeSetup; 
	bool bUpdateRigOnTick; 
	bool bUpdateInEditor; 
	bool bDrawBones; 
	bool bShowDebugDrawing; 
	struct UControlRig* ControlRig; 

	void Update(float DeltaTime); // (Final|Native|Public|BlueprintCallable)
	void SetMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // (Final|Native|Public|BlueprintCallable)
	void SetInitialSpaceTransform(struct FName SpaceName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetInitialBoneTransform(struct FName BoneName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetControlVector2D(struct FName ControlName, struct FVector2D Value); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetControlTransform(struct FName ControlName, struct FTransform Value, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetControlScale(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetControlRotator(struct FName ControlName, struct FRotator Value, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetControlPosition(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetControlOffset(struct FName ControlName, struct FTransform OffsetTransform, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetControlInt(struct FName ControlName, int32_t Value); // (Final|Native|Public|BlueprintCallable)
	void SetControlFloat(struct FName ControlName, float Value); // (Final|Native|Public|BlueprintCallable)
	void SetControlBool(struct FName ControlName, bool Value); // (Final|Native|Public|BlueprintCallable)
	void SetBoneTransform(struct FName BoneName, struct FTransform Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetBoneInitialTransformsFromSkeletalMesh(struct USkeletalMesh* InSkeletalMesh); // (Final|Native|Public|BlueprintCallable)
	void OnPreUpdate(struct UControlRigComponent* Component); // (Native|Event|Public|BlueprintEvent)
	void OnPreSetup(struct UControlRigComponent* Component); // (Native|Event|Public|BlueprintEvent)
	void OnPostUpdate(struct UControlRigComponent* Component); // (Native|Event|Public|BlueprintEvent)
	void OnPostSetup(struct UControlRigComponent* Component); // (Native|Event|Public|BlueprintEvent)
	void OnPostInitialize(struct UControlRigComponent* Component); // (Native|Event|Public|BlueprintEvent)
	void Initialize(); // (Final|Native|Public|BlueprintCallable)
	struct FTransform GetSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform GetInitialSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform GetInitialBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct TArray<struct FName> GetElementNames(enum class ERigElementType ElementType); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	struct FVector2D GetControlVector2D(struct FName ControlName); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform GetControlTransform(struct FName ControlName, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector GetControlScale(struct FName ControlName, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator GetControlRotator(struct FName ControlName, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct UControlRig* GetControlRig(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	struct FVector GetControlPosition(struct FName ControlName, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform GetControlOffset(struct FName ControlName, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	int32_t GetControlInt(struct FName ControlName); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetControlFloat(struct FName ControlName); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	bool GetControlBool(struct FName ControlName); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	struct FTransform GetBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetAbsoluteTime(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool DoesElementExist(struct FName Name, enum class ERigElementType ElementType); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	void ClearMappedElements(); // (Final|Native|Public|BlueprintCallable)
	void AddMappedSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone> Bones, struct TArray<struct FControlRigComponentMappedCurve> Curves); // (Final|Native|Public|BlueprintCallable)
	void AddMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // (Final|Native|Public|BlueprintCallable)
	void AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent> Components); // (Final|Native|Public|BlueprintCallable)
	void AddMappedCompleteSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent); // (Final|Native|Public|BlueprintCallable)
};

// Class ControlRig.ControlRigControlActor
struct AControlRigControlActor : AActor {
	struct AActor* ActorToTrack; 
	struct UControlRig* ControlRigClass; 
	bool bRefreshOnTick; 
	bool bIsSelectable; 
	struct UMaterialInterface* MaterialOverride; 
	struct FString ColorParameter; 
	bool bCastShadows; 
	struct USceneComponent* ActorRootComponent; 
	struct UControlRig* ControlRig; 
	struct TArray<struct FName> ControlNames; 
	struct TArray<struct FTransform> GizmoTransforms; 
	struct TArray<struct UStaticMeshComponent*> Components; 
	struct TArray<struct UMaterialInstanceDynamic*> Materials; 
	struct FName ColorParameterName; 

	void Refresh(); // (Final|Native|Public|BlueprintCallable)
	void Clear(); // (Final|Native|Public|BlueprintCallable)
};

// Class ControlRig.ControlRigGizmoActor
struct AControlRigGizmoActor : AActor {
	struct USceneComponent* ActorRootComponent; 
	struct UStaticMeshComponent* StaticMeshComponent; 
	uint32_t ControlRigIndex; 
	struct FName ControlName; 
	struct FName ColorParameterName; 
	char bEnabled : 1; 
	char bSelected : 1; 
	char bSelectable : 1; 
	char bHovered : 1; 

	void SetSelected(bool bInSelected); // (Native|Public|BlueprintCallable)
	void SetSelectable(bool bInSelectable); // (Native|Public|BlueprintCallable)
	void SetHovered(bool bInHovered); // (Native|Public|BlueprintCallable)
	void SetGlobalTransform(struct FTransform& InTransform); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetEnabled(bool bInEnabled); // (Native|Public|BlueprintCallable)
	void OnTransformChanged(struct FTransform& NewTransform); // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent)
	void OnSelectionChanged(bool bIsSelected); // (Event|Public|BlueprintEvent)
	void OnManipulatingChanged(bool bIsManipulating); // (Event|Public|BlueprintEvent)
	void OnHoveredChanged(bool bIsSelected); // (Event|Public|BlueprintEvent)
	void OnEnabledChanged(bool bIsEnabled); // (Event|Public|BlueprintEvent)
	bool IsSelectedInEditor(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsHovered(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsEnabled(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetGlobalTransform(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class ControlRig.ControlRigGizmoLibrary
struct UControlRigGizmoLibrary : UObject {
	struct FControlRigGizmoDefinition DefaultGizmo; 
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; 
	struct FName MaterialColorParameter; 
	struct TArray<struct FControlRigGizmoDefinition> Gizmos; 
};

// Class ControlRig.ControlRigLayerInstance
struct UControlRigLayerInstance : UAnimInstance {
};

// Class ControlRig.ControlRigValidationPass
struct UControlRigValidationPass : UObject {
};

// Class ControlRig.ControlRigNumericalValidationPass
struct UControlRigNumericalValidationPass : UControlRigValidationPass {
	bool bCheckControls; 
	bool bCheckBones; 
	bool bCheckCurves; 
	float TranslationPrecision; 
	float RotationPrecision; 
	float ScalePrecision; 
	float CurvePrecision; 
	struct FName EventNameA; 
	struct FName EventNameB; 
	struct FRigPose Pose; 
};

// Class ControlRig.ControlRigObjectHolder
struct UControlRigObjectHolder : UObject {
	struct TArray<struct UObject*> Objects; 
};

// Class ControlRig.ControlRigSequence
struct UControlRigSequence : ULevelSequence {
	struct TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence; 
	struct TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh; 
	float LastExportedFrameRate; 
};

// Class ControlRig.ControlRigSequencerAnimInstance
struct UControlRigSequencerAnimInstance : UAnimSequencerInstance {
};

// Class ControlRig.ControlRigSettings
struct UControlRigSettings : UDeveloperSettings {
};

// Class ControlRig.ControlRigValidator
struct UControlRigValidator : UObject {
	struct TArray<struct UControlRigValidationPass*> Passes; 
};

// Class ControlRig.FKControlRig
struct UFKControlRig : UControlRig {
	struct TArray<bool> IsControlActive; 
	enum class EControlRigFKRigExecuteMode ApplyMode; 
};

// Class ControlRig.MovieSceneControlRigParameterSection
struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection {
	struct UControlRig* ControlRig; 
	struct UControlRig* ControlRigClass; 
	struct TArray<bool> ControlsMask; 
	struct FMovieSceneTransformMask TransformMask; 
	struct FMovieSceneFloatChannel Weight; 
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap; 
	struct TArray<struct FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; 
	struct TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; 
};

// Class ControlRig.MovieSceneControlRigParameterTrack
struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack {
	struct UControlRig* ControlRig; 
	struct UMovieSceneSection* SectionToKey; 
	struct TArray<struct UMovieSceneSection*> Sections; 
	struct FName TrackName; 
};

