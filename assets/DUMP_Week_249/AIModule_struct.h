// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8 {
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped_DEPRECATED = 4,
	Invalid = 5,
	EPathFollowingResult_MAX = 6
};

// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8 {
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5,
	EEnvQueryStatus_MAX = 6
};

// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8 {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2
};

// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8 {
	Lowest = 0,
	Low = 64,
	AutonomousAI = 127,
	High = 192,
	Ultimate = 254,
	EAITaskPriority_MAX = 255
};

// Enum AIModule.EGenericAICheck
enum class EGenericAICheck : uint8 {
	Less = 0,
	LessOrEqual = 1,
	Equal = 2,
	NotEqual = 3,
	GreaterOrEqual = 4,
	Greater = 5,
	IsTrue = 6,
	MAX = 7
};

// Enum AIModule.EAILockSource
enum class EAILockSource : uint8 {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4
};

// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8 {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5
};

// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8 {
	Invalid = 0,
	FailedToStart = 1,
	InstantAbort = 2,
	FinishedAborting = 3,
	FinishedExecution = 4,
	Push = 5,
	EPawnActionEventType_MAX = 6
};

// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8 {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5
};

// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8 {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5
};

// Enum AIModule.FAIDistanceType
enum class FAIDistanceType : uint8 {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3
};

// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8 {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8 {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4
};

// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8 {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4
};

// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8 {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4
};

// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8 {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	EArithmeticKeyOperation_MAX = 6
};

// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8 {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2
};

// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8 {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2
};

// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8 {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5
};

// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8 {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2
};

// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8 {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2
};

// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8 {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2
};

// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8 {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3
};

// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8 {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2
};

// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8 {
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2
};

// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8 {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4
};

// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8 {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2
};

// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8 {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3
};

// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8 {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3
};

// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8 {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2
};

// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8 {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3
};

// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8 {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4
};

// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8 {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4
};

// Enum AIModule.EAIParamType
enum class EAIParamType : uint8 {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3
};

// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8 {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3
};

// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8 {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4
};

// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8 {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4
};

// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8 {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2
};

// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3
};

// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8 {
	None = 0,
	Square = 1,
	Inverse = 2,
	Unused = 3,
	Constant = 4,
	Skip = 5,
	EEnvTestWeight_MAX = 6
};

// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8 {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5
};

// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8 {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4
};

// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8 {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3
};

// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8 {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3
};

// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8 {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3
};

// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8 {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3
};

// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8 {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5
};

// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8 {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4
};

// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8 {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2
};

// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8 {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2
};

// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8 {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2
};

// ScriptStruct AIModule.AIRequestID
struct FAIRequestID {
	uint32_t RequestID; 
};

// ScriptStruct AIModule.AIStimulus
struct FAIStimulus {
	float Age; 
	float ExpirationAge; 
	float Strength; 
	struct FVector StimulusLocation; 
	struct FVector ReceiverLocation; 
	struct FName Tag; 
	char bSuccessfullySensed : 1; 
};

// ScriptStruct AIModule.ActorPerceptionUpdateInfo
struct FActorPerceptionUpdateInfo {
	int32_t TargetId; 
	struct TWeakObjectPtr<struct AActor> Target; 
	struct FAIStimulus Stimulus; 
};

// ScriptStruct AIModule.AIDataProviderValue
struct FAIDataProviderValue {
	struct UAIDataProvider* DataBinding; 
	struct FName DataField; 
};

// ScriptStruct AIModule.AIDataProviderTypedValue
struct FAIDataProviderTypedValue : FAIDataProviderValue {
	struct UObject* PropertyType; 
};

// ScriptStruct AIModule.AIDataProviderBoolValue
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; 
};

// ScriptStruct AIModule.AIDataProviderFloatValue
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; 
};

// ScriptStruct AIModule.AIDataProviderIntValue
struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; 
};

// ScriptStruct AIModule.AIDataProviderStructValue
struct FAIDataProviderStructValue : FAIDataProviderValue {
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
struct FActorPerceptionBlueprintInfo {
	struct AActor* Target; 
	struct TArray<struct FAIStimulus> LastSensedStimuli; 
	char bIsHostile : 1; 
};

// ScriptStruct AIModule.AISenseAffiliationFilter
struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; 
	char bDetectNeutrals : 1; 
	char bDetectFriendlies : 1; 
};

// ScriptStruct AIModule.AIDamageEvent
struct FAIDamageEvent {
	float Amount; 
	struct FVector Location; 
	struct FVector HitLocation; 
	struct AActor* DamagedActor; 
	struct AActor* Instigator; 
	struct FName Tag; 
};

// ScriptStruct AIModule.AINoiseEvent
struct FAINoiseEvent {
	struct FVector NoiseLocation; 
	float Loudness; 
	float MaxRange; 
	struct AActor* Instigator; 
	struct FName Tag; 
};

// ScriptStruct AIModule.AIPredictionEvent
struct FAIPredictionEvent {
	struct AActor* Requestor; 
	struct AActor* PredictedActor; 
};

// ScriptStruct AIModule.AISightEvent
struct FAISightEvent {
	struct AActor* SeenActor; 
	struct AActor* Observer; 
};

// ScriptStruct AIModule.AITeamStimulusEvent
struct FAITeamStimulusEvent {
	struct AActor* Broadcaster; 
	struct AActor* Enemy; 
};

// ScriptStruct AIModule.AITouchEvent
struct FAITouchEvent {
	struct AActor* TouchReceiver; 
	struct AActor* OtherActor; 
};

// ScriptStruct AIModule.IntervalCountdown
struct FIntervalCountdown {
	float Interval; 
};

// ScriptStruct AIModule.AIMoveRequest
struct FAIMoveRequest {
	struct AActor* GoalActor; 
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
struct FBehaviorTreeTemplateInfo {
	struct UBehaviorTree* Asset; 
	struct UBTCompositeNode* Template; 
};

// ScriptStruct AIModule.BlackboardKeySelector
struct FBlackboardKeySelector {
	struct TArray<struct UBlackboardKeyType*> AllowedTypes; 
	struct FName SelectedKeyName; 
	struct UBlackboardKeyType* SelectedKeyType; 
	char SelectedKeyID; 
	char bNoneIsAllowedValue : 1; 
};

// ScriptStruct AIModule.BlackboardEntry
struct FBlackboardEntry {
	struct FName EntryName; 
	struct UBlackboardKeyType* KeyType; 
	char bInstanceSynced : 1; 
};

// ScriptStruct AIModule.BTCompositeChild
struct FBTCompositeChild {
	struct UBTCompositeNode* ChildComposite; 
	struct UBTTaskNode* ChildTask; 
	struct TArray<struct UBTDecorator*> Decorators; 
	struct TArray<struct FBTDecoratorLogic> DecoratorOps; 
};

// ScriptStruct AIModule.BTDecoratorLogic
struct FBTDecoratorLogic {
	enum class EBTDecoratorLogic Operation; 
	uint16_t Number; 
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
struct FCrowdAvoidanceSamplingPattern {
	struct TArray<float> Angles; 
	struct TArray<float> Radii; 
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
struct FCrowdAvoidanceConfig {
	float VelocityBias; 
	float DesiredVelocityWeight; 
	float CurrentVelocityWeight; 
	float SideBiasWeight; 
	float ImpactTimeWeight; 
	float ImpactTimeRange; 
	char CustomPatternIdx; 
	char AdaptiveDivisions; 
	char AdaptiveRings; 
	char AdaptiveDepth; 
};

// ScriptStruct AIModule.EnvQueryInstanceCache
struct FEnvQueryInstanceCache {
	struct UEnvQuery* Template; 
};

// ScriptStruct AIModule.EnvQueryRequest
struct FEnvQueryRequest {
	struct UEnvQuery* QueryTemplate; 
	struct UObject* Owner; 
	struct UWorld* World; 
};

// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
struct FEQSParametrizedQueryExecutionRequest {
	struct UEnvQuery* QueryTemplate; 
	struct TArray<struct FAIDynamicParam> QueryConfig; 
	struct FBlackboardKeySelector EQSQueryBlackboardKey; 
	enum class EEnvQueryRunMode RunMode; 
	char bUseBBKeyForQueryTemplate : 1; 
};

// ScriptStruct AIModule.AIDynamicParam
struct FAIDynamicParam {
	struct FName ParamName; 
	enum class EAIParamType ParamType; 
	float Value; 
	struct FBlackboardKeySelector BBKey; 
};

// ScriptStruct AIModule.EnvQueryResult
struct FEnvQueryResult {
	struct UEnvQueryItemType* ItemType; 
	int32_t OptionIndex; 
	int32_t QueryID; 
};

// ScriptStruct AIModule.EnvOverlapData
struct FEnvOverlapData {
	float ExtentX; 
	float ExtentY; 
	float ExtentZ; 
	struct FVector ShapeOffset; 
	enum class ECollisionChannel OverlapChannel; 
	enum class EEnvOverlapShape OverlapShape; 
	char bOnlyBlockingHits : 1; 
	char bOverlapComplex : 1; 
	char bSkipOverlapQuerier : 1; 
};

// ScriptStruct AIModule.EnvTraceData
struct FEnvTraceData {
	int32_t VersionNum; 
	struct UNavigationQueryFilter* NavigationFilter; 
	float ProjectDown; 
	float ProjectUp; 
	float ExtentX; 
	float ExtentY; 
	float ExtentZ; 
	float PostProjectionVerticalOffset; 
	enum class ETraceTypeQuery TraceChannel; 
	enum class ECollisionChannel SerializedChannel; 
	enum class EEnvTraceShape TraceShape; 
	enum class EEnvQueryTrace TraceMode; 
	char bTraceComplex : 1; 
	char bOnlyBlockingHits : 1; 
	char bCanTraceOnNavMesh : 1; 
	char bCanTraceOnGeometry : 1; 
	char bCanDisableTrace : 1; 
	char bCanProjectDown : 1; 
};

// ScriptStruct AIModule.EnvDirection
struct FEnvDirection {
	struct UEnvQueryContext* LineFrom; 
	struct UEnvQueryContext* LineTo; 
	struct UEnvQueryContext* Rotation; 
	enum class EEnvDirection DirMode; 
};

// ScriptStruct AIModule.EnvNamedValue
struct FEnvNamedValue {
	struct FName ParamName; 
	enum class EAIParamType ParamType; 
	float Value; 
};

// ScriptStruct AIModule.GenericTeamId
struct FGenericTeamId {
	char TeamID; 
};

// ScriptStruct AIModule.PawnActionStack
struct FPawnActionStack {
	struct UPawnAction* TopAction; 
};

// ScriptStruct AIModule.PawnActionEvent
struct FPawnActionEvent {
	struct UPawnAction* Action; 
};

// ScriptStruct AIModule.RecastGraphWrapper
struct FRecastGraphWrapper {
	struct ARecastNavMesh* RecastNavMeshActor; 
};

