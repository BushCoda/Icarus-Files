// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
struct ULiveLinkBasicFrameInterpolationProcessor : ULiveLinkFrameInterpolationProcessor {
	bool bInterpolatePropertyValues; 
};

// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
struct ULiveLinkAnimationFrameInterpolationProcessor : ULiveLinkBasicFrameInterpolationProcessor {
};

// Class LiveLink.LiveLinkAnimationRoleToTransform
struct ULiveLinkAnimationRoleToTransform : ULiveLinkFrameTranslator {
	struct FName BoneName; 
};

// Class LiveLink.LiveLinkAnimationVirtualSubject
struct ULiveLinkAnimationVirtualSubject : ULiveLinkVirtualSubject {
	bool bAppendSubjectNameToBones; 
};

// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
struct ULiveLinkTransformAxisSwitchPreProcessor : ULiveLinkFramePreProcessor {
	enum class ELiveLinkAxis FrontAxis; 
	enum class ELiveLinkAxis RightAxis; 
	enum class ELiveLinkAxis UpAxis; 
	bool bUseOffsetPosition; 
	bool bUseOffsetOrientation; 
	struct FVector OffsetPosition; 
	struct FRotator OffsetOrientation; 
};

// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
struct ULiveLinkAnimationAxisSwitchPreProcessor : ULiveLinkTransformAxisSwitchPreProcessor {
};

// Class LiveLink.LiveLinkBlueprintLibrary
struct ULiveLinkBlueprintLibrary : UBlueprintFunctionLibrary {

	void TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, struct TArray<struct FName>& TransformNames); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	void TransformName(struct FLiveLinkTransform& LiveLinkTransform, struct FName& Name); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	void SetLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey SubjectKey, bool bEnabled); // (Final|Native|Static|Public|BlueprintCallable)
	bool RemoveSource(struct FLiveLinkSourceHandle& SourceHandle); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable)
	void ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform& Transform); // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsSpecificLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey SubjectKey, bool bForThisFrame); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable)
	bool IsLiveLinkSubjectEnabled(struct FLiveLinkSubjectName SubjectName); // (Final|Native|Static|Public|BlueprintCallable)
	bool HasParent(struct FLiveLinkTransform& LiveLinkTransform); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, struct FName TransformName, struct FLiveLinkTransform& LiveLinkTransform); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, struct FLiveLinkTransform& LiveLinkTransform); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	struct ULiveLinkRole* GetSpecificLiveLinkSubjectRole(struct FLiveLinkSubjectKey SubjectKey); // (Final|Native|Static|Public|BlueprintCallable)
	struct FText GetSourceType(struct FLiveLinkSourceHandle& SourceHandle); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable)
	struct FText GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable)
	struct FText GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable)
	void GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform& LiveLinkTransform); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	bool GetPropertyValue(struct FLiveLinkBasicBlueprintData& BasicData, struct FName PropertyName, float& Value); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform& Parent); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetMetadata(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata& MetaData); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	struct TArray<struct FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject); // (Final|Native|Static|Public|BlueprintCallable)
	struct ULiveLinkRole* GetLiveLinkSubjectRole(struct FLiveLinkSubjectName SubjectName); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject); // (Final|Native|Static|Public|BlueprintCallable)
	void GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, struct TMap<struct FName, float>& Curves); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetChildren(struct FLiveLinkTransform& LiveLinkTransform, struct TArray<struct FLiveLinkTransform>& Children); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetBasicData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData& BasicBlueprintData); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	bool GetAnimationStaticData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkSkeletonStaticData& AnimationStaticData); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	bool GetAnimationFrameData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkAnimationFrameData& AnimationFrameData); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
	bool EvaluateLiveLinkFrameWithSpecificRole(struct FLiveLinkSubjectName SubjectName, struct ULiveLinkRole* Role, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool EvaluateLiveLinkFrameAtWorldTimeOffset(struct FLiveLinkSubjectName SubjectName, struct ULiveLinkRole* Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool EvaluateLiveLinkFrameAtSceneTime(struct FLiveLinkSubjectName SubjectName, struct ULiveLinkRole* Role, struct FTimecode SceneTime, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool EvaluateLiveLinkFrame(struct FLiveLinkSubjectRepresentation SubjectRepresentation, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform& Transform); // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t ChildCount(struct FLiveLinkTransform& LiveLinkTransform); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure)
};

// Class LiveLink.LiveLinkBlueprintVirtualSubject
struct ULiveLinkBlueprintVirtualSubject : ULiveLinkVirtualSubject {

	bool UpdateVirtualSubjectStaticData_Internal(struct FLiveLinkBaseStaticData& InStruct); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool UpdateVirtualSubjectFrameData_Internal(struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void OnUpdate(); // (Event|Public|BlueprintEvent)
	void OnInitialize(); // (Event|Public|BlueprintEvent)
};

// Class LiveLink.LiveLinkComponent
struct ULiveLinkComponent : UActorComponent {
	struct FMulticastInlineDelegate OnLiveLinkUpdated; 

	void GetSubjectDataAtWorldTime(struct FName SubjectName, float WorldTime, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void GetSubjectDataAtSceneTime(struct FName SubjectName, struct FTimecode& SceneTime, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void GetSubjectData(struct FName SubjectName, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void GetAvailableSubjectNames(struct TArray<struct FName>& SubjectNames); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class LiveLink.LiveLinkDrivenComponent
struct ULiveLinkDrivenComponent : UActorComponent {
	struct FLiveLinkSubjectName SubjectName; 
	struct FName ActorTransformBone; 
	bool bModifyActorTransform; 
	bool bSetRelativeLocation; 
};

// Class LiveLink.LiveLinkInstance
struct ULiveLinkInstance : UAnimInstance {
	struct ULiveLinkRetargetAsset* CurrentRetargetAsset; 

	void SetSubject(struct FLiveLinkSubjectName SubjectName); // (Final|Native|Public|BlueprintCallable)
	void SetRetargetAsset(struct ULiveLinkRetargetAsset* RetargetAsset); // (Final|Native|Public|BlueprintCallable)
};

// Class LiveLink.LiveLinkMessageBusFinder
struct ULiveLinkMessageBusFinder : UObject {

	void GetAvailableProviders(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, float Duration, struct TArray<struct FProviderPollResult>& AvailableProviders); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct ULiveLinkMessageBusFinder* ConstructMessageBusFinder(); // (Final|Native|Static|Public|BlueprintCallable)
	void ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle& SourceHandle); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class LiveLink.LiveLinkMessageBusSourceFactory
struct ULiveLinkMessageBusSourceFactory : ULiveLinkSourceFactory {
};

// Class LiveLink.LiveLinkMessageBusSourceSettings
struct ULiveLinkMessageBusSourceSettings : ULiveLinkSourceSettings {
};

// Class LiveLink.LiveLinkPreset
struct ULiveLinkPreset : UObject {
	struct TArray<struct FLiveLinkSourcePreset> Sources; 
	struct TArray<struct FLiveLinkSubjectPreset> Subjects; 

	void BuildFromClient(); // (Final|Native|Public|BlueprintCallable)
	bool ApplyToClient(); // (Final|Native|Public|BlueprintCallable|Const)
	bool AddToClient(bool bRecreatePresets); // (Final|Native|Public|BlueprintCallable|Const)
};

// Class LiveLink.LiveLinkRetargetAsset
struct ULiveLinkRetargetAsset : UObject {
};

// Class LiveLink.LiveLinkRemapAsset
struct ULiveLinkRemapAsset : ULiveLinkRetargetAsset {

	void RemapCurveElements(struct TMap<struct FName, float>& CurveItems); // (Native|Event|Public|HasOutParms|BlueprintEvent|Const)
	struct FName GetRemappedCurveName(struct FName CurveName); // (Native|Event|Public|BlueprintEvent|Const)
	struct FName GetRemappedBoneName(struct FName BoneName); // (Native|Event|Public|BlueprintEvent|Const)
};

// Class LiveLink.LiveLinkSettings
struct ULiveLinkSettings : UObject {
	struct TArray<struct FLiveLinkRoleProjectSetting> DefaultRoleSettings; 
	struct ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor; 
	struct TSoftObjectPtr<ULiveLinkPreset> DefaultLiveLinkPreset; 
	struct FDirectoryPath PresetSaveDir; 
	float ClockOffsetCorrectionStep; 
	enum class ELiveLinkSourceMode DefaultMessageBusSourceMode; 
	double MessageBusPingRequestFrequency; 
	double MessageBusHeartbeatFrequency; 
	double MessageBusHeartbeatTimeout; 
	double MessageBusTimeBeforeRemovingInactiveSource; 
	double TimeWithoutFrameToBeConsiderAsInvalid; 
	struct FLinearColor ValidColor; 
	struct FLinearColor InvalidColor; 
	char TextSizeSource; 
	char TextSizeSubject; 
};

// Class LiveLink.LiveLinkTimecodeProvider
struct ULiveLinkTimecodeProvider : UTimecodeProvider {
	struct FLiveLinkSubjectKey SubjectKey; 
	enum class ELiveLinkTimecodeProviderEvaluationType Evaluation; 
	bool bOverrideFrameRate; 
	struct FFrameRate OverrideFrameRate; 
	int32_t BufferSize; 
};

// Class LiveLink.LiveLinkTimeSynchronizationSource
struct ULiveLinkTimeSynchronizationSource : UTimeSynchronizationSource {
	struct FLiveLinkSubjectName SubjectName; 
};

// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
struct ULiveLinkVirtualSubjectSourceSettings : ULiveLinkSourceSettings {
	struct FName SourceName; 
};

