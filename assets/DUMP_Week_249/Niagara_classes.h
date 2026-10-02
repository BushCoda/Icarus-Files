// Class Niagara.NiagaraDataInterface
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase {
};

// Class Niagara.NiagaraDataInterfaceRWBase
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	struct TSet<int32_t> OutputShaderStages; 
	struct TSet<int32_t> IterationShaderStages; 
};

// Class Niagara.MovieSceneNiagaraTrack
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; 
};

// Class Niagara.MovieSceneNiagaraParameterTrack
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	struct FNiagaraVariable Parameter; 
};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; 
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; 
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; 
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; 
};

// Class Niagara.MovieSceneNiagaraSystemTrack
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack {
};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	int32_t ChannelsUsed; 
};

// Class Niagara.NiagaraActor
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; 
	char bDestroyOnSystemFinish : 1; 

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent); // (Final|Native|Private)
};

// Class Niagara.NiagaraBakerSettings
struct UNiagaraBakerSettings : UObject {
	float StartSeconds; 
	float DurationSeconds; 
	int32_t FramesPerSecond; 
	char bPreviewLooping : 1; 
	struct FIntPoint FramesPerDimension; 
	struct TArray<struct FNiagaraBakerTextureSettings> OutputTextures; 
	enum class ENiagaraBakerViewMode CameraViewportMode; 
	struct FVector CameraViewportLocation[0x7]; 
	struct FRotator CameraViewportRotation[0x7]; 
	float CameraOrbitDistance; 
	float CameraFOV; 
	float CameraOrthoWidth; 
	char bUseCameraAspectRatio : 1; 
	float CameraAspectRatio; 
	char bRenderComponentOnly : 1; 
};

// Class Niagara.NiagaraComponent
struct UNiagaraComponent : UFXSystemComponent {
	struct UNiagaraSystem* Asset; 
	enum class ENiagaraTickBehavior TickBehavior; 
	int32_t RandomSeedOffset; 
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; 
	char bForceSolo : 1; 
	char bEnableGpuComputeDebug : 1; 
	char bAutoDestroy : 1; 
	char bRenderingEnabled : 1; 
	char bAutoManageAttachment : 1; 
	char bAutoAttachWeldSimulatedBodies : 1; 
	float MaxTimeBeforeForceUpdateTransform; 
	struct TArray<struct FNiagaraMaterialOverride> EmitterMaterials; 
	struct FMulticastInlineDelegate OnSystemFinished; 
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; 
	struct FName AutoAttachSocketName; 
	enum class EAttachmentRule AutoAttachLocationRule; 
	enum class EAttachmentRule AutoAttachRotationRule; 
	enum class EAttachmentRule AutoAttachScaleRule; 

	void SetVariableVec4(struct FName InVariableName, struct FVector4& InValue); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetVariableTextureRenderTarget(struct FName InVariableName, struct UTextureRenderTarget* TextureRenderTarget); // (Final|Native|Public|BlueprintCallable)
	void SetVariableQuat(struct FName InVariableName, struct FQuat& InValue); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetVariableObject(struct FName InVariableName, struct UObject* Object); // (Final|Native|Public|BlueprintCallable)
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object); // (Final|Native|Public|BlueprintCallable)
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor& InValue); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // (Final|Native|Public|BlueprintCallable)
	void SetVariableFloat(struct FName InVariableName, float InValue); // (Final|Native|Public|BlueprintCallable)
	void SetVariableBool(struct FName InVariableName, bool InValue); // (Final|Native|Public|BlueprintCallable)
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor); // (Final|Native|Public|BlueprintCallable)
	void SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior); // (Final|Native|Public|BlueprintCallable)
	void SetSeekDelta(float InSeekDelta); // (Final|Native|Public|BlueprintCallable)
	void SetRenderingEnabled(bool bInRenderingEnabled); // (Final|Native|Public|BlueprintCallable)
	void SetRandomSeedOffset(int32_t NewRandomSeedOffset); // (Final|Native|Public|BlueprintCallable)
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance); // (Final|Native|Public|BlueprintCallable)
	void SetPaused(bool bInPaused); // (Final|Native|Public|BlueprintCallable)
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4& InValue); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat& InValue); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object); // (Final|Native|Public|BlueprintCallable)
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor& InValue); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // (Final|Native|Public|BlueprintCallable)
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // (Final|Native|Public|BlueprintCallable)
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue); // (Final|Native|Public|BlueprintCallable)
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor); // (Final|Native|Public|BlueprintCallable)
	void SetMaxSimTime(float InMaxTime); // (Final|Native|Public|BlueprintCallable)
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock); // (Final|Native|Public|BlueprintCallable)
	void SetGpuComputeDebug(bool bEnableDebug); // (Final|Native|Public|BlueprintCallable)
	void SetForceSolo(bool bInForceSolo); // (Final|Native|Public|BlueprintCallable)
	void SetDesiredAge(float InDesiredAge); // (Final|Native|Public|BlueprintCallable)
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // (Final|Native|Public|BlueprintCallable)
	void SetAutoDestroy(bool bInAutoDestroy); // (Final|Native|Public|BlueprintCallable)
	void SetAsset(struct UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters); // (Final|Native|Public|BlueprintCallable)
	void SetAllowScalability(bool bAllow); // (Final|Native|Public|BlueprintCallable)
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode); // (Final|Native|Public|BlueprintCallable)
	void SeekToDesiredAge(float InDesiredAge); // (Final|Native|Public|BlueprintCallable)
	void ResetSystem(); // (Final|Native|Public|BlueprintCallable)
	void ReinitializeSystem(); // (Final|Native|Public|BlueprintCallable)
	bool IsPaused(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void InitForPerformanceBaseline(); // (Final|Native|Public|BlueprintCallable)
	enum class ENiagaraTickBehavior GetTickBehavior(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetSeekDelta(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetRandomSeedOffset(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetPreviewLODDistanceEnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPreviewLODDistance(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // (Final|Native|Public|BlueprintCallable)
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // (Final|Native|Public|BlueprintCallable)
	float GetMaxSimTime(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetLockDesiredAgeDeltaTimeToSeekDelta(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetForceSolo(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetDesiredAge(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name); // (Final|Native|Public|BlueprintCallable)
	struct UNiagaraSystem* GetAsset(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // (Final|Native|Public|BlueprintCallable)
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // (Final|Native|Public|BlueprintCallable)
};

// Class Niagara.NiagaraComponentPool
struct UNiagaraComponentPool : UObject {
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools; 
};

// Class Niagara.NiagaraRendererProperties
struct UNiagaraRendererProperties : UNiagaraMergeable {
	struct FNiagaraPlatformSet Platforms; 
	int32_t SortOrderHint; 
	enum class ENiagaraRendererMotionVectorSetting MotionVectorSetting; 
	bool bIsEnabled; 
	bool bMotionBlurEnabled; 
};

// Class Niagara.NiagaraComponentRendererProperties
struct UNiagaraComponentRendererProperties : UNiagaraRendererProperties {
	struct USceneComponent* ComponentType; 
	uint32_t ComponentCountLimit; 
	struct FNiagaraVariableAttributeBinding EnabledBinding; 
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; 
	bool bAssignComponentsOnParticleID; 
	bool bOnlyCreateComponentsOnParticleSpawn; 
	int32_t RendererVisibility; 
	struct USceneComponent* TemplateComponent; 
	struct TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings; 
};

// Class Niagara.NiagaraComponentSettings
struct UNiagaraComponentSettings : UObject {
	struct TSet<struct FName> SuppressActivationList; 
	struct TSet<struct FName> ForceAutoPooolingList; 
	struct TSet<struct FNiagaraEmitterNameSettingsRef> SuppressEmitterList; 
};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
struct UNiagaraConvertInPlaceUtilityBase : UObject {
};

// Class Niagara.NiagaraDataInterface2DArrayTexture
struct UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface {
	struct UTexture2DArray* Texture; 
};

// Class Niagara.NiagaraDataInterfaceArray
struct UNiagaraDataInterfaceArray : UNiagaraDataInterface {
	int32_t MaxElements; 
};

// Class Niagara.NiagaraDataInterfaceArrayFloat
struct UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray {
	struct TArray<float> FloatData; 
};

// Class Niagara.NiagaraDataInterfaceArrayFloat2
struct UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector2D> FloatData; 
};

// Class Niagara.NiagaraDataInterfaceArrayFloat3
struct UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector> FloatData; 
};

// Class Niagara.NiagaraDataInterfaceArrayFloat4
struct UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector4> FloatData; 
};

// Class Niagara.NiagaraDataInterfaceArrayColor
struct UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray {
	struct TArray<struct FLinearColor> ColorData; 
};

// Class Niagara.NiagaraDataInterfaceArrayQuat
struct UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray {
	struct TArray<struct FQuat> QuatData; 
};

// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
struct UNiagaraDataInterfaceArrayFunctionLibrary : UBlueprintFunctionLibrary {

	void SetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector& Value, bool bSizeToFit); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector4& Value, bool bSizeToFit); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector4>& ArrayData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector2D& Value, bool bSizeToFit); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector2D>& ArrayData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector>& ArrayData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FQuat& Value, bool bSizeToFit); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FQuat>& ArrayData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // (Final|Native|Static|Public|BlueprintCallable)
	void SetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<int32_t>& ArrayData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // (Final|Native|Static|Public|BlueprintCallable)
	void SetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<float>& ArrayData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FLinearColor& Value, bool bSizeToFit); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FLinearColor>& ArrayData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<bool>& ArrayData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FVector GetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct FVector4 GetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct TArray<struct FVector4> GetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // (Final|Native|Static|Public|BlueprintCallable)
	struct FVector2D GetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct TArray<struct FVector2D> GetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct FVector> GetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // (Final|Native|Static|Public|BlueprintCallable)
	struct FQuat GetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct TArray<struct FQuat> GetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // (Final|Native|Static|Public|BlueprintCallable)
	int32_t GetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<int32_t> GetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // (Final|Native|Static|Public|BlueprintCallable)
	float GetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<float> GetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // (Final|Native|Static|Public|BlueprintCallable)
	struct FLinearColor GetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct TArray<struct FLinearColor> GetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // (Final|Native|Static|Public|BlueprintCallable)
	bool GetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<bool> GetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Niagara.NiagaraDataInterfaceArrayInt32
struct UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray {
	struct TArray<int32_t> IntData; 
};

// Class Niagara.NiagaraDataInterfaceArrayBool
struct UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray {
	struct TArray<bool> BoolData; 
};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	struct USoundSubmix* Submix; 
};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	struct USoundSubmix* Submix; 
	int32_t Resolution; 
	float ScopeInMilliseconds; 
};

// Class Niagara.NiagaraDataInterfaceAudioPlayer
struct UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface {
	struct USoundBase* SoundToPlay; 
	struct USoundAttenuation* Attenuation; 
	struct USoundConcurrency* Concurrency; 
	struct TArray<struct FName> ParameterNames; 
	bool bLimitPlaysPerTick; 
	int32_t MaxPlaysPerTick; 
	bool bStopWhenComponentIsDestroyed; 
};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; 
	float MinimumFrequency; 
	float MaximumFrequency; 
	float NoiseFloorDb; 
};

// Class Niagara.NiagaraDataInterfaceCamera
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; 
	bool bRequireCurrentFrameData; 
};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceCurveBase
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	struct TArray<float> ShaderLUT; 
	float LUTMinTime; 
	float LUTMaxTime; 
	float LUTInvTimeRange; 
	float LUTNumSamplesMinusOne; 
	char bUseLUT : 1; 
	char bExposeCurve : 1; 
	struct FName ExposedName; 
	struct UTexture2D* ExposedTexture; 
};

// Class Niagara.NiagaraDataInterfaceColorCurve
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve RedCurve; 
	struct FRichCurve GreenCurve; 
	struct FRichCurve BlueCurve; 
	struct FRichCurve AlphaCurve; 
};

// Class Niagara.NiagaraDataInterfaceCubeTexture
struct UNiagaraDataInterfaceCubeTexture : UNiagaraDataInterface {
	struct UTextureCube* Texture; 
};

// Class Niagara.NiagaraDataInterfaceCurlNoise
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; 
};

// Class Niagara.NiagaraDataInterfaceCurve
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve Curve; 
};

// Class Niagara.NiagaraDataInterfaceDebugDraw
struct UNiagaraDataInterfaceDebugDraw : UNiagaraDataInterface {
};

// Class Niagara.NiagaraParticleCallbackHandler
struct UNiagaraParticleCallbackHandler : UInterface {

	void ReceiveParticleData(struct TArray<struct FBasicParticleData>& Data, struct UNiagaraSystem* NiagaraSystem); // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

// Class Niagara.NiagaraDataInterfaceExport
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	struct FNiagaraUserParameterBinding CallbackHandlerParameter; 
	enum class ENDIExport_GPUAllocationMode GPUAllocationMode; 
	int32_t GPUAllocationFixedSize; 
	float GPUAllocationPerParticleSize; 
};

// Class Niagara.NiagaraDataInterfaceGBuffer
struct UNiagaraDataInterfaceGBuffer : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceGrid2D
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; 
	int32_t NumCellsY; 
	int32_t NumCellsMaxAxis; 
	int32_t NumAttributes; 
	bool SetGridFromMaxAxis; 
	struct FVector2D WorldBBoxSize; 
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; 
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat; 
	char bOverrideFormat : 1; 
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; 

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // (Native|Public|HasOutParms|BlueprintCallable)
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // (Native|Public|HasOutParms|BlueprintCallable)
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // (Native|Public|BlueprintCallable)
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // (Native|Public|HasOutParms|BlueprintCallable)
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
struct UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2D {
	struct FString EmitterName; 
	struct FString DIName; 
};

// Class Niagara.NiagaraDataInterfaceGrid3D
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	struct FIntVector NumCells; 
	float CellSize; 
	int32_t NumCellsMaxAxis; 
	enum class ESetResolutionMethod SetResolutionMethod; 
	struct FVector WorldBBoxSize; 
};

// Class Niagara.NiagaraDataInterfaceGrid3DCollection
struct UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D {
	int32_t NumAttributes; 
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; 
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat; 
	char bOverrideFormat : 1; 

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // (Native|Public|HasOutParms|BlueprintCallable)
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // (Native|Public|HasOutParms|BlueprintCallable)
	bool FillVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t AttributeIndex); // (Native|Public|BlueprintCallable)
	bool FillRawVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // (Native|Public|HasOutParms|BlueprintCallable)
};

// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
struct UNiagaraDataInterfaceIntRenderTarget2D : UNiagaraDataInterfaceRWBase {
	struct FIntPoint Size; 
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; 
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets; 
};

// Class Niagara.NiagaraDataInterfaceLandscape
struct UNiagaraDataInterfaceLandscape : UNiagaraDataInterface {
	struct AActor* SourceLandscape; 
	enum class ENDILandscape_SourceMode SourceMode; 
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; 
};

// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
struct UNiagaraDataInterfaceMeshRendererInfo : UNiagaraDataInterface {
	struct UNiagaraMeshRendererProperties* MeshRenderer; 
};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerCell; 
};

// Class Niagara.NiagaraDataInterfaceOcclusion
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceParticleRead
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase {
	struct FString EmitterName; 
};

// Class Niagara.NiagaraDataInterfacePlatformSet
struct UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface {
	struct FNiagaraPlatformSet Platforms; 
};

// Class Niagara.NiagaraDataInterfaceRenderTarget2D
struct UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase {
	struct FIntPoint Size; 
	enum class ENiagaraMipMapGeneration MipMapGeneration; 
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; 
	char bInheritUserParameterSettings : 1; 
	char bOverrideFormat : 1; 
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; 
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets; 
};

// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
struct UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase {
	struct FIntVector Size; 
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; 
	char bInheritUserParameterSettings : 1; 
	char bOverrideFormat : 1; 
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; 
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; 
};

// Class Niagara.NiagaraDataInterfaceRenderTargetCube
struct UNiagaraDataInterfaceRenderTargetCube : UNiagaraDataInterfaceRWBase {
	int32_t Size; 
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; 
	char bInheritUserParameterSettings : 1; 
	char bOverrideFormat : 1; 
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; 
	struct TMap<uint64_t, struct UTextureRenderTargetCube*> ManagedRenderTargets; 
};

// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
struct UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase {
	struct FIntVector Size; 
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; 
	char bInheritUserParameterSettings : 1; 
	char bOverrideFormat : 1; 
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; 
	struct TMap<uint64_t, struct UTextureRenderTargetVolume*> ManagedRenderTargets; 
};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	enum class ENDISkeletalMesh_SourceMode SourceMode; 
	struct AActor* Source; 
	struct FNiagaraUserParameterBinding MeshUserParameter; 
	struct USkeletalMeshComponent* SourceComponent; 
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; 
	struct TArray<struct FName> SamplingRegions; 
	int32_t WholeMeshLOD; 
	struct TArray<struct FName> FilteredBones; 
	struct TArray<struct FName> FilteredSockets; 
	struct FName ExcludeBoneName; 
	char bExcludeBone : 1; 
	int32_t UvSetIndex; 
	bool bRequireCurrentFrameData; 
};

// Class Niagara.NiagaraDataInterfaceSpline
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	struct AActor* Source; 
	struct FNiagaraUserParameterBinding SplineUserParameter; 
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	enum class ENDIStaticMesh_SourceMode SourceMode; 
	struct UStaticMesh* DefaultMesh; 
	struct AActor* Source; 
	struct UStaticMeshComponent* SourceComponent; 
	struct FNDIStaticMeshSectionFilter SectionFilter; 
	bool bUsePhysicsBodyVelocity; 
	struct TArray<struct FName> FilteredSockets; 
};

// Class Niagara.NiagaraDataInterfaceTexture
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	struct UTexture* Texture; 
};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; 
	struct FRichCurve YCurve; 
};

// Class Niagara.NiagaraDataInterfaceVector4Curve
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; 
	struct FRichCurve YCurve; 
	struct FRichCurve ZCurve; 
	struct FRichCurve WCurve; 
};

// Class Niagara.NiagaraDataInterfaceVectorCurve
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; 
	struct FRichCurve YCurve; 
	struct FRichCurve ZCurve; 
};

// Class Niagara.NiagaraDataInterfaceVectorField
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	struct UVectorField* Field; 
	bool bTileX; 
	bool bTileY; 
	bool bTileZ; 
};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	struct UVolumeTexture* Texture; 
};

// Class Niagara.NiagaraDebugHUDSettings
struct UNiagaraDebugHUDSettings : UObject {
	struct FNiagaraDebugHUDSettingsData Data; 
};

// Class Niagara.NiagaraEditorDataBase
struct UNiagaraEditorDataBase : UObject {
};

// Class Niagara.NiagaraEditorParametersAdapterBase
struct UNiagaraEditorParametersAdapterBase : UObject {
};

// Class Niagara.NiagaraSignificanceHandler
struct UNiagaraSignificanceHandler : UObject {
};

// Class Niagara.NiagaraSignificanceHandlerDistance
struct UNiagaraSignificanceHandlerDistance : UNiagaraSignificanceHandler {
};

// Class Niagara.NiagaraSignificanceHandlerAge
struct UNiagaraSignificanceHandlerAge : UNiagaraSignificanceHandler {
};

// Class Niagara.NiagaraEffectType
struct UNiagaraEffectType : UObject {
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency; 
	enum class ENiagaraCullReaction CullReaction; 
	struct UNiagaraSignificanceHandler* SignificanceHandler; 
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; 
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; 
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; 
	struct UNiagaraBaselineController* PerformanceBaselineController; 
	struct FNiagaraPerfBaselineStats PerfBaselineStats; 
	struct FGuid PerfBaselineVersion; 
};

// Class Niagara.NiagaraEmitter
struct UNiagaraEmitter : UObject {
	bool bLocalSpace; 
	bool bDeterminism; 
	int32_t RandomSeed; 
	enum class EParticleAllocationMode AllocationMode; 
	int32_t PreAllocationCount; 
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; 
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; 
	enum class ENiagaraSimTarget SimTarget; 
	struct FBox FixedBounds; 
	int32_t MinDetailLevel; 
	int32_t MaxDetailLevel; 
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; 
	struct FNiagaraPlatformSet Platforms; 
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; 
	char bInterpolatedSpawning : 1; 
	char bFixedBounds : 1; 
	char bUseMinDetailLevel : 1; 
	char bUseMaxDetailLevel : 1; 
	char bOverrideGlobalSpawnCountScale : 1; 
	char bRequiresPersistentIDs : 1; 
	char bCombineEventSpawn : 1; 
	float MaxDeltaTimePerTick; 
	uint32_t DefaultShaderStageIndex; 
	uint32_t MaxUpdateIterations; 
	struct TSet<uint32_t> SpawnStages; 
	char bSimulationStagesEnabled : 1; 
	char bDeprecatedShaderStagesEnabled : 1; 
	char bLimitDeltaTime : 1; 
	struct FString UniqueEmitterName; 
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; 
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; 
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages; 
	struct UNiagaraScript* GPUComputeScript; 
	struct TArray<struct FName> SharedEventGeneratorIds; 
};

// Class Niagara.NiagaraEventReceiverEmitterAction
struct UNiagaraEventReceiverEmitterAction : UObject {
};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; 
};

// Class Niagara.NiagaraFunctionLibrary
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture); // (Final|Native|Static|Public|BlueprintCallable)
	void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture); // (Final|Native|Static|Public|BlueprintCallable)
	void SetTexture2DArrayObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture2DArray* Texture); // (Final|Native|Static|Public|BlueprintCallable)
	void SetSkeletalMeshDataInterfaceSamplingRegions(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& SamplingRegions); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // (Final|Native|Static|Public|BlueprintCallable)
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh); // (Final|Native|Static|Public|BlueprintCallable)
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // (Final|Native|Static|Public|BlueprintCallable)
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class Niagara.NiagaraLightRendererProperties
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; 
	char bAffectsTranslucency : 1; 
	char bAlphaScalesBrightness : 1; 
	float RadiusScale; 
	float DefaultExponent; 
	struct FVector ColorAdd; 
	int32_t RendererVisibility; 
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; 
	struct FNiagaraVariableAttributeBinding LightExponentBinding; 
	struct FNiagaraVariableAttributeBinding PositionBinding; 
	struct FNiagaraVariableAttributeBinding ColorBinding; 
	struct FNiagaraVariableAttributeBinding RadiusBinding; 
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; 
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; 
};

// Class Niagara.NiagaraMeshRendererProperties
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	struct TArray<struct FNiagaraMeshRendererMeshProperties> Meshes; 
	enum class ENiagaraRendererSourceDataMode SourceMode; 
	enum class ENiagaraSortMode SortMode; 
	char bOverrideMaterials : 1; 
	char bSortOnlyWhenTranslucent : 1; 
	char bGpuLowLatencyTranslucency : 1; 
	char bSubImageBlend : 1; 
	char bEnableFrustumCulling : 1; 
	char bEnableCameraDistanceCulling : 1; 
	char bEnableMeshFlipbook : 1; 
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials; 
	struct FVector2D SubImageSize; 
	enum class ENiagaraMeshFacingMode FacingMode; 
	char bLockedAxisEnable : 1; 
	struct FVector LockedAxis; 
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace; 
	float MinCameraDistance; 
	float MaxCameraDistance; 
	uint32_t RendererVisibility; 
	struct FNiagaraVariableAttributeBinding PositionBinding; 
	struct FNiagaraVariableAttributeBinding ColorBinding; 
	struct FNiagaraVariableAttributeBinding VelocityBinding; 
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; 
	struct FNiagaraVariableAttributeBinding ScaleBinding; 
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; 
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; 
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; 
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; 
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; 
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; 
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; 
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; 
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; 
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; 
	struct FNiagaraVariableAttributeBinding MeshIndexBinding; 
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; 
	struct FNiagaraVariableAttributeBinding PrevPositionBinding; 
	struct FNiagaraVariableAttributeBinding PrevScaleBinding; 
	struct FNiagaraVariableAttributeBinding PrevMeshOrientationBinding; 
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; 
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding; 
	struct UStaticMesh* ParticleMesh; 
	struct FVector PivotOffset; 
	enum class ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; 
};

// Class Niagara.NiagaraMessageDataBase
struct UNiagaraMessageDataBase : UObject {
};

// Class Niagara.NiagaraParameterCollectionInstance
struct UNiagaraParameterCollectionInstance : UObject {
	struct UNiagaraParameterCollection* Collection; 
	struct TArray<struct FNiagaraVariable> OverridenParameters; 
	struct FNiagaraParameterStore ParameterStorage; 

	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetVector4Parameter(struct FString InVariableName, struct FVector4& InValue); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetQuatParameter(struct FString InVariableName, struct FQuat& InValue); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // (Final|Native|Public|BlueprintCallable)
	void SetFloatParameter(struct FString InVariableName, float InValue); // (Final|Native|Public|BlueprintCallable)
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetBoolParameter(struct FString InVariableName, bool InValue); // (Final|Native|Public|BlueprintCallable)
	struct FVector GetVectorParameter(struct FString InVariableName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FQuat GetQuatParameter(struct FString InVariableName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	int32_t GetIntParameter(struct FString InVariableName); // (Final|Native|Public|BlueprintCallable)
	float GetFloatParameter(struct FString InVariableName); // (Final|Native|Public|BlueprintCallable)
	struct FLinearColor GetColorParameter(struct FString InVariableName); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	bool GetBoolParameter(struct FString InVariableName); // (Final|Native|Public|BlueprintCallable)
};

// Class Niagara.NiagaraParameterCollection
struct UNiagaraParameterCollection : UObject {
	struct FName Namespace; 
	struct TArray<struct FNiagaraVariable> Parameters; 
	struct UMaterialParameterCollection* SourceMaterialCollection; 
	struct UNiagaraParameterCollectionInstance* DefaultInstance; 
	struct FGuid CompileId; 
};

// Class Niagara.NiagaraParameterDefinitionsBase
struct UNiagaraParameterDefinitionsBase : UObject {
};

// Class Niagara.NiagaraBaselineController
struct UNiagaraBaselineController : UObject {
	float TestDuration; 
	struct UNiagaraEffectType* EffectType; 
	struct ANiagaraPerfBaselineActor* Owner; 
	struct TSoftObjectPtr<UNiagaraSystem> System; 

	bool OnTickTest(); // (Native|Event|Public|BlueprintEvent)
	void OnOwnerTick(float DeltaTime); // (Native|Event|Public|BlueprintEvent)
	void OnEndTest(struct FNiagaraPerfBaselineStats Stats); // (Native|Event|Public|BlueprintEvent)
	void OnBeginTest(); // (Native|Event|Public|BlueprintEvent)
	struct UNiagaraSystem* GetSystem(); // (Final|Native|Public|BlueprintCallable)
};

// Class Niagara.NiagaraBaselineController_Basic
struct UNiagaraBaselineController_Basic : UNiagaraBaselineController {
	int32_t NumInstances; 
	struct TArray<struct UNiagaraComponent*> SpawnedComponents; 
};

// Class Niagara.NiagaraPerfBaselineActor
struct ANiagaraPerfBaselineActor : AActor {
	struct UNiagaraBaselineController* Controller; 
	struct UTextRenderComponent* Label; 
};

// Class Niagara.NiagaraPrecompileContainer
struct UNiagaraPrecompileContainer : UObject {
	struct TArray<struct UNiagaraScript*> Scripts; 
	struct UNiagaraSystem* System; 
};

// Class Niagara.NiagaraPreviewBase
struct ANiagaraPreviewBase : AActor {

	void SetSystem(struct UNiagaraSystem* InSystem); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetLabelText(struct FText& InXAxisText, struct FText& InYAxisText); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

// Class Niagara.NiagaraPreviewAxis
struct UNiagaraPreviewAxis : UObject {

	int32_t Num(); // (Native|Event|Public|BlueprintEvent)
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString& OutLabelText); // (Native|Event|Public|HasOutParms|BlueprintEvent)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	struct FName Param; 
	int32_t Count; 
};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; 
	int32_t Max; 
};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; 
	float Max; 
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector2D Min; 
	struct FVector2D Max; 
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector Min; 
	struct FVector Max; 
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector4 Min; 
	struct FVector4 Max; 
};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	struct FLinearColor Min; 
	struct FLinearColor Max; 
};

// Class Niagara.NiagaraPreviewGrid
struct ANiagaraPreviewGrid : AActor {
	struct UNiagaraSystem* System; 
	enum class ENiagaraPreviewGridResetMode ResetMode; 
	struct UNiagaraPreviewAxis* PreviewAxisX; 
	struct UNiagaraPreviewAxis* PreviewAxisY; 
	struct ANiagaraPreviewBase* PreviewClass; 
	float SpacingX; 
	float SpacingY; 
	int32_t NumX; 
	int32_t NumY; 
	struct TArray<struct UChildActorComponent*> PreviewComponents; 

	void SetPaused(bool bPaused); // (Final|Native|Public|BlueprintCallable)
	void GetPreviews(struct TArray<struct UNiagaraComponent*>& OutPreviews); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void DeactivatePreviews(); // (Final|Native|Public|BlueprintCallable)
	void ActivatePreviews(bool bReset); // (Final|Native|Public|BlueprintCallable)
};

// Class Niagara.NiagaraRibbonRendererProperties
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; 
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; 
	enum class ENiagaraRibbonFacingMode FacingMode; 
	struct FNiagaraRibbonUVSettings UV0Settings; 
	struct FNiagaraRibbonUVSettings UV1Settings; 
	enum class ENiagaraRibbonDrawDirection DrawDirection; 
	enum class ENiagaraRibbonShapeMode Shape; 
	bool bEnableAccurateGeometry; 
	int32_t WidthSegmentationCount; 
	int32_t MultiPlaneCount; 
	int32_t TubeSubdivisions; 
	struct TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices; 
	float CurveTension; 
	enum class ENiagaraRibbonTessellationMode TessellationMode; 
	int32_t TessellationFactor; 
	bool bUseConstantFactor; 
	float TessellationAngle; 
	bool bScreenSpaceTessellation; 
	struct FNiagaraVariableAttributeBinding PositionBinding; 
	struct FNiagaraVariableAttributeBinding ColorBinding; 
	struct FNiagaraVariableAttributeBinding VelocityBinding; 
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; 
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; 
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; 
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; 
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; 
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; 
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; 
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; 
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; 
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; 
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; 
	struct FNiagaraVariableAttributeBinding RibbonUVDistance; 
	struct FNiagaraVariableAttributeBinding U0OverrideBinding; 
	struct FNiagaraVariableAttributeBinding V0RangeOverrideBinding; 
	struct FNiagaraVariableAttributeBinding U1OverrideBinding; 
	struct FNiagaraVariableAttributeBinding V1RangeOverrideBinding; 
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; 
};

// Class Niagara.NiagaraScript
struct UNiagaraScript : UNiagaraScriptBase {
	enum class ENiagaraScriptUsage Usage; 
	struct FGuid UsageId; 
	struct FNiagaraParameterStore RapidIterationParameters; 
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; 
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; 
	struct FNiagaraVMExecutableDataId CachedScriptVMId; 
	struct FNiagaraVMExecutableData CachedScriptVM; 
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences; 
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; 

	void RaiseOnGPUCompilationComplete(); // (Final|Native|Public)
};

// Class Niagara.NiagaraScriptSourceBase
struct UNiagaraScriptSourceBase : UObject {
};

// Class Niagara.NiagaraSettings
struct UNiagaraSettings : UDeveloperSettings {
	struct FSoftObjectPath DefaultEffectType; 
	struct TArray<struct FText> QualityLevels; 
	struct TMap<struct FString, struct FText> ComponentRendererWarningsPerClass; 
	enum class ETextureRenderTargetFormat DefaultRenderTargetFormat; 
	enum class ENiagaraGpuBufferFormat DefaultGridFormat; 
	enum class ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting; 
	enum class ENDISkelMesh_GpuMaxInfluences NDISkelMesh_GpuMaxInfluences; 
	enum class ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat; 
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat; 
	struct UNiagaraEffectType* DefaultEffectTypePtr; 
};

// Class Niagara.NiagaraSimulationStageBase
struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	struct UNiagaraScript* Script; 
	struct FName SimulationStageName; 
	char bEnabled : 1; 
};

// Class Niagara.NiagaraSimulationStageGeneric
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	enum class ENiagaraIterationSource IterationSource; 
	int32_t Iterations; 
	char bSpawnOnly : 1; 
	char bDisablePartialParticleUpdate : 1; 
	struct FNiagaraVariableDataInterfaceBinding DataInterface; 
};

// Class Niagara.NiagaraSpriteRendererProperties
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; 
	enum class ENiagaraRendererSourceDataMode SourceMode; 
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; 
	enum class ENiagaraSpriteAlignment Alignment; 
	enum class ENiagaraSpriteFacingMode FacingMode; 
	struct FVector2D PivotInUVSpace; 
	enum class ENiagaraSortMode SortMode; 
	struct FVector2D SubImageSize; 
	char bSubImageBlend : 1; 
	char bRemoveHMDRollInVR : 1; 
	char bSortOnlyWhenTranslucent : 1; 
	char bGpuLowLatencyTranslucency : 1; 
	float MinFacingCameraBlendDistance; 
	float MaxFacingCameraBlendDistance; 
	char bEnableCameraDistanceCulling : 1; 
	float MinCameraDistance; 
	float MaxCameraDistance; 
	uint32_t RendererVisibility; 
	struct FNiagaraVariableAttributeBinding PositionBinding; 
	struct FNiagaraVariableAttributeBinding ColorBinding; 
	struct FNiagaraVariableAttributeBinding VelocityBinding; 
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; 
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; 
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; 
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; 
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; 
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; 
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; 
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; 
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; 
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; 
	struct FNiagaraVariableAttributeBinding UVScaleBinding; 
	struct FNiagaraVariableAttributeBinding PivotOffsetBinding; 
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; 
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; 
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; 
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; 
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; 
	struct FNiagaraVariableAttributeBinding PrevPositionBinding; 
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding; 
	struct FNiagaraVariableAttributeBinding PrevSpriteRotationBinding; 
	struct FNiagaraVariableAttributeBinding PrevSpriteSizeBinding; 
	struct FNiagaraVariableAttributeBinding PrevSpriteFacingBinding; 
	struct FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding; 
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; 
	struct FNiagaraVariableAttributeBinding PrevPivotOffsetBinding; 
};

// Class Niagara.NiagaraSystem
struct UNiagaraSystem : UFXSystemAsset {
	bool bDumpDebugSystemInfo; 
	bool bDumpDebugEmitterInfo; 
	bool bRequireCurrentFrameData; 
	char bFixedBounds : 1; 
	struct UNiagaraEffectType* EffectType; 
	bool bOverrideScalabilitySettings; 
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides; 
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; 
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; 
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; 
	struct UNiagaraScript* SystemSpawnScript; 
	struct UNiagaraScript* SystemUpdateScript; 
	struct FNiagaraSystemCompiledData SystemCompiledData; 
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; 
	struct FBox FixedBounds; 
	bool bAutoDeactivate; 
	float WarmupTime; 
	int32_t WarmupTickCount; 
	float WarmupTickDelta; 
	bool bHasSystemScriptDIsWithPerInstanceData; 
	bool bNeedsGPUContextInitForDataInterfaces; 
	struct TArray<struct FName> UserDINamesReadInSystemScripts; 
};

