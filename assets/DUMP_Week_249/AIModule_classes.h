// Class AIModule.BTNode
struct UBTNode : UObject {
	struct FString NodeName; 
	struct UBehaviorTree* TreeAsset; 
	struct UBTCompositeNode* ParentNode; 
};

// Class AIModule.BTCompositeNode
struct UBTCompositeNode : UBTNode {
	struct TArray<struct FBTCompositeChild> Children; 
	struct TArray<struct UBTService*> Services; 
	char bApplyDecoratorScope : 1; 
};

// Class AIModule.BTComposite_Sequence
struct UBTComposite_Sequence : UBTCompositeNode {
};

// Class AIModule.BTAuxiliaryNode
struct UBTAuxiliaryNode : UBTNode {
};

// Class AIModule.BTDecorator
struct UBTDecorator : UBTAuxiliaryNode {
	char bInverseCondition : 1; 
	enum class EBTFlowAbortMode FlowAbortMode; 
};

// Class AIModule.BTService
struct UBTService : UBTAuxiliaryNode {
	float Interval; 
	float RandomDeviation; 
	char bCallTickOnSearchStart : 1; 
	char bRestartTimerOnEachActivation : 1; 
};

// Class AIModule.BTService_BlackboardBase
struct UBTService_BlackboardBase : UBTService {
	struct FBlackboardKeySelector BlackboardKey; 
};

// Class AIModule.BTService_DefaultFocus
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; 
};

// Class AIModule.BTTaskNode
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services; 
	char bIgnoreRestartSelf : 1; 
};

// Class AIModule.BTTask_BlackboardBase
struct UBTTask_BlackboardBase : UBTTaskNode {
	struct FBlackboardKeySelector BlackboardKey; 
};

// Class AIModule.BTTask_MoveTo
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; 
	struct UNavigationQueryFilter* FilterClass; 
	float ObservedBlackboardValueTolerance; 
	char bObserveBlackboardValue : 1; 
	char bAllowStrafe : 1; 
	char bAllowPartialPath : 1; 
	char bTrackMovingGoal : 1; 
	char bProjectGoalLocation : 1; 
	char bReachTestIncludesAgentRadius : 1; 
	char bReachTestIncludesGoalRadius : 1; 
	char bStopOnOverlap : 1; 
	char bStopOnOverlapNeedsUpdate : 1; 
};

// Class AIModule.BTTask_MoveDirectlyToward
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; 
	char bProjectVectorGoalToNavigation : 1; 
	char bUpdatedDeprecatedProperties : 1; 
};

// Class AIModule.BTTask_Wait
struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; 
	float RandomDeviation; 
};

// Class AIModule.EnvQueryContext
struct UEnvQueryContext : UObject {
};

// Class AIModule.EnvQueryNode
struct UEnvQueryNode : UObject {
	int32_t VerNum; 
};

// Class AIModule.EnvQueryGenerator
struct UEnvQueryGenerator : UEnvQueryNode {
	struct FString OptionName; 
	struct UEnvQueryItemType* ItemType; 
	char bAutoSortTests : 1; 
};

// Class AIModule.EnvQueryTest
struct UEnvQueryTest : UEnvQueryNode {
	int32_t TestOrder; 
	enum class EEnvTestPurpose TestPurpose; 
	struct FString TestComment; 
	enum class EEnvTestFilterOperator MultipleContextFilterOp; 
	enum class EEnvTestScoreOperator MultipleContextScoreOp; 
	enum class EEnvTestFilterType FilterType; 
	struct FAIDataProviderBoolValue BoolValue; 
	struct FAIDataProviderFloatValue FloatValueMin; 
	struct FAIDataProviderFloatValue FloatValueMax; 
	enum class EEnvTestScoreEquation ScoringEquation; 
	enum class EEnvQueryTestClamping ClampMinType; 
	enum class EEnvQueryTestClamping ClampMaxType; 
	enum class EEQSNormalizationType NormalizationType; 
	struct FAIDataProviderFloatValue ScoreClampMin; 
	struct FAIDataProviderFloatValue ScoreClampMax; 
	struct FAIDataProviderFloatValue ScoringFactor; 
	struct FAIDataProviderFloatValue ReferenceValue; 
	bool bDefineReferenceValue; 
	char bWorkOnFloatValues : 1; 
};

// Class AIModule.EQSTestingPawn
struct AEQSTestingPawn : ACharacter {
	struct UEnvQuery* QueryTemplate; 
	struct TArray<struct FEnvNamedValue> QueryParams; 
	struct TArray<struct FAIDynamicParam> QueryConfig; 
	float TimeLimitPerStep; 
	int32_t StepToDebugDraw; 
	enum class EEnvQueryHightlightMode HighlightMode; 
	char bDrawLabels : 1; 
	char bDrawFailedItems : 1; 
	char bReRunQueryOnlyOnFinishedMove : 1; 
	char bShouldBeVisibleInGame : 1; 
	char bTickDuringGame : 1; 
	enum class EEnvQueryRunMode QueryingMode; 
	struct FNavAgentProperties NavAgentProperties; 
};

// Class AIModule.NavLinkProxy
struct ANavLinkProxy : AActor {
	struct TArray<struct FNavigationLink> PointLinks; 
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; 
	struct UNavLinkCustomComponent* SmartLinkComp; 
	bool bSmartLinkIsRelevant; 
	struct FMulticastInlineDelegate OnSmartLinkReached; 

	void SetSmartLinkEnabled(bool bEnabled); // (Final|Native|Public|BlueprintCallable)
	void ResumePathFollowing(struct AActor* Agent); // (Final|Native|Public|BlueprintCallable)
	void ReceiveSmartLinkReached(struct AActor* Agent, struct FVector& Destination); // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent)
	bool IsSmartLinkEnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasMovingAgents(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AIModule.AIController
struct AAIController : AController {
	char bStartAILogicOnPossess : 1; 
	char bStopAILogicOnUnposses : 1; 
	char bLOSflag : 1; 
	char bSkipExtraLOSChecks : 1; 
	char bAllowStrafe : 1; 
	char bWantsPlayerState : 1; 
	char bSetControlRotationFromPawnOrientation : 1; 
	struct UPathFollowingComponent* PathFollowingComponent; 
	struct UBrainComponent* BrainComponent; 
	struct UAIPerceptionComponent* PerceptionComponent; 
	struct UPawnActionsComponent* ActionsComp; 
	struct UBlackboardComponent* Blackboard; 
	struct UGameplayTasksComponent* CachedGameplayTasksComponent; 
	struct UNavigationQueryFilter* DefaultNavigationFilterClass; 
	struct FMulticastInlineDelegate ReceiveMoveCompleted; 

	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void UnclaimTaskResource(struct UGameplayTaskResource* ResourceClass); // (Final|Native|Public|BlueprintCallable)
	void SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent); // (Final|Native|Public|BlueprintCallable)
	void SetMoveBlockDetection(bool bEnable); // (Final|Native|Public|BlueprintCallable)
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset); // (Native|Public|BlueprintCallable)
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // (Event|Protected|BlueprintEvent)
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased); // (Native|Public)
	enum class EPathFollowingRequestResult MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	enum class EPathFollowingRequestResult MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // (Final|Native|Public|BlueprintCallable)
	void K2_SetFocus(struct AActor* NewFocus); // (Final|Native|Public|BlueprintCallable)
	void K2_SetFocalPoint(struct FVector FP); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void K2_ClearFocus(); // (Final|Native|Public|BlueprintCallable)
	bool HasPartialPath(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UPathFollowingComponent* GetPathFollowingComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EPathFollowingStatus GetMoveStatus(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetImmediateMoveDestination(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct AActor* GetFocusActor(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetFocalPointOnActor(struct AActor* Actor); // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetFocalPoint(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct UAIPerceptionComponent* GetAIPerceptionComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	void ClaimTaskResource(struct UGameplayTaskResource* ResourceClass); // (Final|Native|Public|BlueprintCallable)
};

// Class AIModule.AIAsyncTaskBlueprintProxy
struct UAIAsyncTaskBlueprintProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFail; 

	void OnMoveCompleted(struct FAIRequestID RequestID, enum class EPathFollowingResult MovementResult); // (Final|Native|Public)
};

// Class AIModule.AIBlueprintHelperLibrary
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable)
	struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, struct APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // (Final|Native|Static|Public|BlueprintCallable)
	void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess); // (Final|Native|Static|Public|BlueprintCallable)
	void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic); // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable)
	bool IsValidAIRotation(struct FRotator Rotation); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsValidAILocation(struct FVector Location); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsValidAIDirection(struct FVector DirectionVector); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetNextNavLinkIndex(struct AController* Controller); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FVector> GetCurrentPathPoints(struct AController* Controller); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetCurrentPathIndex(struct AController* Controller); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UNavigationPath* GetCurrentPath(struct AController* Controller); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UBlackboardComponent* GetBlackboard(struct AActor* Target); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct AAIController* GetAIController(struct AActor* ControlledActor); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

// Class AIModule.AIDataProvider
struct UAIDataProvider : UObject {
};

// Class AIModule.AIDataProvider_QueryParams
struct UAIDataProvider_QueryParams : UAIDataProvider {
	struct FName ParamName; 
	float FloatValue; 
	int32_t IntValue; 
	bool BoolValue; 
};

// Class AIModule.AIDataProvider_Random
struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; 
	float Max; 
	char bInteger : 1; 
};

// Class AIModule.AIHotSpotManager
struct UAIHotSpotManager : UObject {
};

// Class AIModule.AIPerceptionComponent
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct UAISenseConfig*> SensesConfig; 
	struct UAISense* DominantSense; 
	struct AAIController* AIOwner; 
	struct FMulticastInlineDelegate OnPerceptionUpdated; 
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated; 
	struct FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; 

	void SetSenseEnabled(struct UAISense* SenseClass, bool bEnable); // (Final|Native|Public|BlueprintCallable)
	void RequestStimuliListenerUpdate(); // (Final|Native|Public|BlueprintCallable)
	void OnOwnerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Final|Native|Public)
	void GetPerceivedHostileActorsBySense(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetPerceivedHostileActors(struct TArray<struct AActor*>& OutActors); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetKnownPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetCurrentlyPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ForgetAll(); // (Final|Native|Public|BlueprintCallable)
};

// Class AIModule.AIPerceptionListenerInterface
struct UAIPerceptionListenerInterface : UInterface {
};

// Class AIModule.AIPerceptionStimuliSourceComponent
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; 
	struct TArray<struct UAISense*> RegisterAsSourceForSenses; 

	void UnregisterFromSense(struct UAISense* SenseClass); // (Final|Native|Public|BlueprintCallable)
	void UnregisterFromPerceptionSystem(); // (Final|Native|Public|BlueprintCallable)
	void RegisterWithPerceptionSystem(); // (Final|Native|Public|BlueprintCallable)
	void RegisterForSense(struct UAISense* SenseClass); // (Final|Native|Public|BlueprintCallable)
};

// Class AIModule.AISubsystem
struct UAISubsystem : UObject {
	struct UAISystem* AISystem; 
};

// Class AIModule.AIPerceptionSystem
struct UAIPerceptionSystem : UAISubsystem {
	struct TArray<struct UAISense*> Senses; 
	float PerceptionAgingRate; 

	void ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent); // (Final|Native|Static|Public|BlueprintCallable)
	void ReportEvent(struct UAISenseEvent* PerceptionEvent); // (Final|Native|Public|BlueprintCallable)
	bool RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, struct UAISense* Sense, struct AActor* Target); // (Final|Native|Static|Public|BlueprintCallable)
	void OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Final|Native|Protected)
	struct UAISense* GetSenseClassForStimulus(struct UObject* WorldContextObject, struct FAIStimulus& Stimulus); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AIModule.AIResourceInterface
struct UAIResourceInterface : UInterface {
};

// Class AIModule.AIResource_Movement
struct UAIResource_Movement : UGameplayTaskResource {
};

// Class AIModule.AIResource_Logic
struct UAIResource_Logic : UGameplayTaskResource {
};

// Class AIModule.AISense
struct UAISense : UObject {
	float DefaultExpirationAge; 
	enum class EAISenseNotifyType NotifyType; 
	char bWantsNewPawnNotification : 1; 
	char bAutoRegisterAllPawnsAsSources : 1; 
	struct UAIPerceptionSystem* PerceptionSystemInstance; 
};

// Class AIModule.AISense_Blueprint
struct UAISense_Blueprint : UAISense {
	struct UUserDefinedStruct* ListenerDataType; 
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; 
	struct TArray<struct UAISenseEvent*> UnprocessedEvents; 

	float OnUpdate(struct TArray<struct UAISenseEvent*>& EventsToProcess); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // (Event|Public|BlueprintEvent)
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // (Event|Public|BlueprintEvent)
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // (Event|Public|BlueprintEvent)
	void K2_OnNewPawn(struct APawn* NewPawn); // (Event|Public|BlueprintEvent)
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*>& ListenerComponents); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetAllListenerActors(struct TArray<struct AActor*>& ListenerActors); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
};

// Class AIModule.AISense_Damage
struct UAISense_Damage : UAISense {
	struct TArray<struct FAIDamageEvent> RegisteredEvents; 

	void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation, struct FName Tag); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

// Class AIModule.AISense_Hearing
struct UAISense_Hearing : UAISense {
	struct TArray<struct FAINoiseEvent> NoiseEvents; 
	float SpeedOfSoundSq; 

	void ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

// Class AIModule.AISense_Prediction
struct UAISense_Prediction : UAISense {
	struct TArray<struct FAIPredictionEvent> RegisteredEvents; 

	void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime); // (Final|Native|Static|Public|BlueprintCallable)
	void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AIModule.AISense_Sight
struct UAISense_Sight : UAISense {
	int32_t MaxTracesPerTick; 
	int32_t MinQueriesPerTimeSliceCheck; 
	double MaxTimeSlicePerTick; 
	float HighImportanceQueryDistanceThreshold; 
	float MaxQueryImportance; 
	float SightLimitQueryImportance; 
};

// Class AIModule.AISense_Team
struct UAISense_Team : UAISense {
	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents; 
};

// Class AIModule.AISense_Touch
struct UAISense_Touch : UAISense {
	struct TArray<struct FAITouchEvent> RegisteredEvents; 

	void ReportTouchEvent(struct UObject* WorldContextObject, struct AActor* TouchReceiver, struct AActor* OtherActor, struct FVector Location); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

// Class AIModule.AISenseBlueprintListener
struct UAISenseBlueprintListener : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig
struct UAISenseConfig : UObject {
	struct FColor DebugColor; 
	float MaxAge; 
	char bStartsEnabled : 1; 
};

// Class AIModule.AISenseConfig_Blueprint
struct UAISenseConfig_Blueprint : UAISenseConfig {
	struct UAISense_Blueprint* Implementation; 
};

// Class AIModule.AISenseConfig_Damage
struct UAISenseConfig_Damage : UAISenseConfig {
	struct UAISense_Damage* Implementation; 
};

// Class AIModule.AISenseConfig_Hearing
struct UAISenseConfig_Hearing : UAISenseConfig {
	struct UAISense_Hearing* Implementation; 
	float HearingRange; 
	float LoSHearingRange; 
	char bUseLoSHearing : 1; 
	struct FAISenseAffiliationFilter DetectionByAffiliation; 
};

// Class AIModule.AISenseConfig_Prediction
struct UAISenseConfig_Prediction : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Sight
struct UAISenseConfig_Sight : UAISenseConfig {
	struct UAISense_Sight* Implementation; 
	float SightRadius; 
	float LoseSightRadius; 
	float PeripheralVisionAngleDegrees; 
	struct FAISenseAffiliationFilter DetectionByAffiliation; 
	float AutoSuccessRangeFromLastSeenLocation; 
	float PointOfViewBackwardOffset; 
	float NearClippingRadius; 
};

// Class AIModule.AISenseConfig_Team
struct UAISenseConfig_Team : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Touch
struct UAISenseConfig_Touch : UAISenseConfig {
};

// Class AIModule.AISenseEvent
struct UAISenseEvent : UObject {
};

// Class AIModule.AISenseEvent_Damage
struct UAISenseEvent_Damage : UAISenseEvent {
	struct FAIDamageEvent Event; 
};

// Class AIModule.AISenseEvent_Hearing
struct UAISenseEvent_Hearing : UAISenseEvent {
	struct FAINoiseEvent Event; 
};

// Class AIModule.AISightTargetInterface
struct UAISightTargetInterface : UInterface {
};

// Class AIModule.AISystem
struct UAISystem : UAISystemBase {
	struct FSoftClassPath PerceptionSystemClassName; 
	struct FSoftClassPath HotSpotManagerClassName; 
	float AcceptanceRadius; 
	float PathfollowingRegularPathPointAcceptanceRadius; 
	float PathfollowingNavLinkAcceptanceRadius; 
	bool bFinishMoveOnGoalOverlap; 
	bool bAcceptPartialPaths; 
	bool bAllowStrafing; 
	bool bEnableBTAITasks; 
	bool bAllowControllersAsEQSQuerier; 
	bool bEnableDebuggerPlugin; 
	bool bForgetStaleActors; 
	bool bAddBlackboardSelfKey; 
	enum class ECollisionChannel DefaultSightCollisionChannel; 
	struct UBehaviorTreeManager* BehaviorTreeManager; 
	struct UEnvQueryManager* EnvironmentQueryManager; 
	struct UAIPerceptionSystem* PerceptionSystem; 
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects; 
	struct UAIHotSpotManager* HotSpotManager; 
	struct UNavLocalGridManager* NavLocalGrids; 

	void AILoggingVerbose(); // (Exec|Native|Public)
	void AIIgnorePlayers(); // (Exec|Native|Public)
};

// Class AIModule.AITask
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController; 
};

// Class AIModule.AITask_LockLogic
struct UAITask_LockLogic : UAITask {
};

// Class AIModule.AITask_MoveTo
struct UAITask_MoveTo : UAITask {
	struct FMulticastInlineDelegate OnRequestFailed; 
	struct FMulticastInlineDelegate OnMoveFinished; 
	struct FAIMoveRequest MoveRequest; 

	struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

// Class AIModule.AITask_RunEQS
struct UAITask_RunEQS : UAITask {

	struct UAITask_RunEQS* RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AIModule.BehaviorTree
struct UBehaviorTree : UObject {
	struct UBTCompositeNode* RootNode; 
	struct UBlackboardData* BlackboardAsset; 
	struct TArray<struct UBTDecorator*> RootDecorators; 
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; 
};

// Class AIModule.BrainComponent
struct UBrainComponent : UActorComponent {
	struct UBlackboardComponent* BlackboardComp; 
	struct AAIController* AIOwner; 

	void StopLogic(struct FString Reason); // (Native|Public|BlueprintCallable)
	void StartLogic(); // (Native|Public|BlueprintCallable)
	void RestartLogic(); // (Native|Public|BlueprintCallable)
	bool IsRunning(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPaused(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AIModule.BehaviorTreeComponent
struct UBehaviorTreeComponent : UBrainComponent {
	struct TArray<struct UBTNode*> NodeInstances; 
	struct UBehaviorTree* DefaultBehaviorTreeAsset; 

	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset); // (Native|Public|BlueprintCallable)
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration); // (Final|Native|Public|BlueprintCallable)
};

// Class AIModule.BehaviorTreeManager
struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; 
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; 
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents; 
};

// Class AIModule.BehaviorTreeTypes
struct UBehaviorTreeTypes : UObject {
};

// Class AIModule.BlackboardAssetProvider
struct UBlackboardAssetProvider : UInterface {

	struct UBlackboardData* GetBlackboardAsset(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AIModule.BlackboardComponent
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* BrainComp; 
	struct UBlackboardData* DefaultBlackboardAsset; 
	struct UBlackboardData* BlackboardAsset; 
	struct TArray<struct UBlackboardKeyType*> KeyInstances; 

	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetValueAsString(struct FName& KeyName, struct FString StringValue); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetValueAsRotator(struct FName& KeyName, struct FRotator VectorValue); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetValueAsObject(struct FName& KeyName, struct UObject* ObjectValue); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetValueAsName(struct FName& KeyName, struct FName NameValue); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetValueAsInt(struct FName& KeyName, int32_t IntValue); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetValueAsFloat(struct FName& KeyName, float FloatValue); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetValueAsEnum(struct FName& KeyName, char EnumValue); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetValueAsClass(struct FName& KeyName, struct UObject* ClassValue); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetValueAsBool(struct FName& KeyName, bool BoolValue); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool IsVectorValueSet(struct FName& KeyName); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetValueAsVector(struct FName& KeyName); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FString GetValueAsString(struct FName& KeyName); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FRotator GetValueAsRotator(struct FName& KeyName); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct UObject* GetValueAsObject(struct FName& KeyName); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FName GetValueAsName(struct FName& KeyName); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	int32_t GetValueAsInt(struct FName& KeyName); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	float GetValueAsFloat(struct FName& KeyName); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	char GetValueAsEnum(struct FName& KeyName); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct UObject* GetValueAsClass(struct FName& KeyName); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool GetValueAsBool(struct FName& KeyName); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void ClearValue(struct FName& KeyName); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class AIModule.BlackboardData
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; 
	struct TArray<struct FBlackboardEntry> Keys; 
	char bHasSynchronizedKeys : 1; 
};

// Class AIModule.BlackboardKeyType
struct UBlackboardKeyType : UObject {
};

// Class AIModule.BlackboardKeyType_Bool
struct UBlackboardKeyType_Bool : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Class
struct UBlackboardKeyType_Class : UBlackboardKeyType {
	struct UObject* BaseClass; 
};

// Class AIModule.BlackboardKeyType_Enum
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; 
	struct FString EnumName; 
	char bIsEnumNameValid : 1; 
};

// Class AIModule.BlackboardKeyType_Float
struct UBlackboardKeyType_Float : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Int
struct UBlackboardKeyType_Int : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Name
struct UBlackboardKeyType_Name : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_NativeEnum
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	struct FString EnumName; 
	struct UEnum* EnumType; 
};

// Class AIModule.BlackboardKeyType_Object
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	struct UObject* BaseClass; 
};

// Class AIModule.BlackboardKeyType_Rotator
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_String
struct UBlackboardKeyType_String : UBlackboardKeyType {
	struct FString StringValue; 
};

// Class AIModule.BlackboardKeyType_Vector
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Class AIModule.BTComposite_Selector
struct UBTComposite_Selector : UBTCompositeNode {
};

// Class AIModule.BTComposite_SimpleParallel
struct UBTComposite_SimpleParallel : UBTCompositeNode {
	enum class EBTParallelMode FinishMode; 
};

// Class AIModule.BTDecorator_BlackboardBase
struct UBTDecorator_BlackboardBase : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey; 
};

// Class AIModule.BTDecorator_Blackboard
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; 
	float FloatValue; 
	struct FString StringValue; 
	struct FString CachedDescription; 
	char OperationType; 
	enum class EBTBlackboardRestart NotifyObserver; 
};

// Class AIModule.BTDecorator_BlueprintBase
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* AIOwner; 
	struct AActor* ActorOwner; 
	struct TArray<struct FName> ObservedKeyNames; 
	char bShowPropertyDetails : 1; 
	char bCheckConditionOnlyBlackBoardChanges : 1; 
	char bIsObservingBB : 1; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveObserverActivated(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveExecutionStart(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult NodeResult); // (Event|Protected|BlueprintEvent)
	void ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult); // (Event|Protected|BlueprintEvent)
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	bool IsDecoratorObserverActive(); // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const)
	bool IsDecoratorExecutionActive(); // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const)
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	struct FBlackboardKeySelector ActorToCheck; 
	enum class EGameplayContainerMatchType TagsToMatch; 
	struct FGameplayTagContainer GameplayTags; 
	struct FString CachedDescription; 
};

// Class AIModule.BTDecorator_CompareBBEntries
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; 
	struct FBlackboardKeySelector BlackboardKeyA; 
	struct FBlackboardKeySelector BlackboardKeyB; 
};

// Class AIModule.BTDecorator_ConditionalLoop
struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard {
};

// Class AIModule.BTDecorator_ConeCheck
struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; 
	struct FBlackboardKeySelector ConeOrigin; 
	struct FBlackboardKeySelector ConeDirection; 
	struct FBlackboardKeySelector Observed; 
};

// Class AIModule.BTDecorator_Cooldown
struct UBTDecorator_Cooldown : UBTDecorator {
	float CooldownTime; 
};

// Class AIModule.BTDecorator_DoesPathExist
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKeyA; 
	struct FBlackboardKeySelector BlackboardKeyB; 
	char bUseSelf : 1; 
	enum class EPathExistanceQueryType PathQueryType; 
	struct UNavigationQueryFilter* FilterClass; 
};

// Class AIModule.BTDecorator_ForceSuccess
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_IsAtLocation
struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; 
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius; 
	enum class FAIDistanceType GeometricDistanceType; 
	char bUseParametrizedRadius : 1; 
	char bUseNavAgentGoalLocation : 1; 
	char bPathFindingBasedTest : 1; 
};

// Class AIModule.BTDecorator_IsBBEntryOfClass
struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	struct UObject* TestClass; 
};

// Class AIModule.BTDecorator_KeepInCone
struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; 
	struct FBlackboardKeySelector ConeOrigin; 
	struct FBlackboardKeySelector Observed; 
	char bUseSelfAsOrigin : 1; 
	char bUseSelfAsObserved : 1; 
};

// Class AIModule.BTDecorator_Loop
struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; 
	bool bInfiniteLoop; 
	float InfiniteLoopTimeoutTime; 
};

// Class AIModule.BTDecorator_ReachedMoveGoal
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.BTDecorator_SetTagCooldown
struct UBTDecorator_SetTagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; 
	float CooldownDuration; 
	bool bAddToExistingDuration; 
};

// Class AIModule.BTDecorator_TagCooldown
struct UBTDecorator_TagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; 
	float CooldownDuration; 
	bool bAddToExistingDuration; 
	bool bActivatesCooldown; 
};

// Class AIModule.BTDecorator_TimeLimit
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; 
};

// Class AIModule.BTFunctionLibrary
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {

	void StopUsingExternalEvent(struct UBTNode* NodeOwner); // (Final|Native|Static|Public|BlueprintCallable)
	void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor); // (Final|Native|Static|Public|BlueprintCallable)
	void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FVector Value); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FString Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FRotator Value); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FName Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, int32_t Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, float Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, char Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, bool Value); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	char GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct UObject* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class AIModule.BTService_BlueprintBase
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* AIOwner; 
	struct AActor* ActorOwner; 
	char bShowPropertyDetails : 1; 
	char bShowEventDetails : 1; 

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveSearchStart(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivation(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveActivation(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	bool IsServiceActive(); // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const)
};

// Class AIModule.BTService_RunEQS
struct UBTService_RunEQS : UBTService_BlackboardBase {
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; 
};

// Class AIModule.BTTask_BlueprintBase
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* AIOwner; 
	struct AActor* ActorOwner; 
	struct FIntervalCountdown TickInterval; 
	char bShowPropertyDetails : 1; 

	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID); // (Final|Native|Protected|BlueprintCallable)
	void SetFinishOnMessage(struct FName MessageName); // (Final|Native|Protected|BlueprintCallable)
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveAbort(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	bool IsTaskExecuting(); // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const)
	bool IsTaskAborting(); // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const)
	void FinishExecute(bool bSuccess); // (Final|Native|Protected|BlueprintCallable)
	void FinishAbort(); // (Final|Native|Protected|BlueprintCallable)
};

// Class AIModule.BTTask_FinishWithResult
struct UBTTask_FinishWithResult : UBTTaskNode {
	enum class EBTNodeResult Result; 
};

// Class AIModule.BTTask_GameplayTaskBase
struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; 
};

// Class AIModule.BTTask_MakeNoise
struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; 
};

// Class AIModule.BTTask_PawnActionBase
struct UBTTask_PawnActionBase : UBTTaskNode {
};

// Class AIModule.BTTask_PlayAnimation
struct UBTTask_PlayAnimation : UBTTaskNode {
	struct UAnimationAsset* AnimationToPlay; 
	char bLooping : 1; 
	char bNonBlocking : 1; 
	struct UBehaviorTreeComponent* MyOwnerComp; 
	struct USkeletalMeshComponent* CachedSkelMesh; 
};

// Class AIModule.BTTask_PlaySound
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* SoundToPlay; 
};

// Class AIModule.BTTask_PushPawnAction
struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	struct UPawnAction* Action; 
};

// Class AIModule.BTTask_RotateToFaceBBEntry
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; 
	bool bIgnoreZPrecision; 
};

// Class AIModule.BTTask_RunBehavior
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; 
};

// Class AIModule.BTTask_RunBehaviorDynamic
struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	struct FGameplayTag InjectionTag; 
	struct UBehaviorTree* DefaultBehaviorAsset; 
	struct UBehaviorTree* BehaviorAsset; 
};

// Class AIModule.BTTask_RunEQSQuery
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	struct UEnvQuery* QueryTemplate; 
	struct TArray<struct FEnvNamedValue> QueryParams; 
	struct TArray<struct FAIDynamicParam> QueryConfig; 
	enum class EEnvQueryRunMode RunMode; 
	struct FBlackboardKeySelector EQSQueryBlackboardKey; 
	bool bUseBBKey; 
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; 
};

// Class AIModule.BTTask_SetTagCooldown
struct UBTTask_SetTagCooldown : UBTTaskNode {
	struct FGameplayTag CooldownTag; 
	bool bAddToExistingDuration; 
	float CooldownDuration; 
};

// Class AIModule.BTTask_WaitBlackboardTime
struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey; 
};

// Class AIModule.CrowdAgentInterface
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.PathFollowingComponent
struct UPathFollowingComponent : UActorComponent {
	struct UNavMovementComponent* MovementComp; 
	struct ANavigationData* MyNavData; 

	void OnNavDataRegistered(struct ANavigationData* NavData); // (Final|Native|Protected)
	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // (Native|Public|HasOutParms|HasDefaults)
	struct FVector GetPathDestination(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	enum class EPathFollowingAction GetPathActionType(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AIModule.CrowdFollowingComponent
struct UCrowdFollowingComponent : UPathFollowingComponent {
	struct FVector CrowdAgentMoveDirection; 

	void SuspendCrowdSteering(bool bSuspend); // (Native|Public|BlueprintCallable)
};

// Class AIModule.CrowdManager
struct UCrowdManager : UCrowdManagerBase {
	struct ANavigationData* MyNavData; 
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; 
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; 
	int32_t MaxAgents; 
	float MaxAgentRadius; 
	int32_t MaxAvoidedAgents; 
	int32_t MaxAvoidedWalls; 
	float NavmeshCheckInterval; 
	float PathOptimizationInterval; 
	float SeparationDirClamp; 
	float PathOffsetRadiusMultiplier; 
	char bResolveCollisions : 1; 
};

// Class AIModule.DetourCrowdAIController
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.EnvQuery
struct UEnvQuery : UDataAsset {
	struct FName QueryName; 
	struct TArray<struct UEnvQueryOption*> Options; 
};

// Class AIModule.EnvQueryContext_BlueprintBase
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {

	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation); // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const)
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor); // (Event|Public|HasOutParms|BlueprintEvent|Const)
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet); // (Event|Public|HasOutParms|BlueprintEvent|Const)
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet); // (Event|Public|HasOutParms|BlueprintEvent|Const)
};

// Class AIModule.EnvQueryContext_Item
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.EnvQueryDebugHelpers
struct UEnvQueryDebugHelpers : UObject {
};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	struct AActor* SearchedActorClass; 
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; 
	struct FAIDataProviderFloatValue SearchRadius; 
	struct UEnvQueryContext* SearchCenter; 
};

// Class AIModule.EnvQueryGenerator_BlueprintBase
struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	struct FText GeneratorsActionDescription; 
	struct UEnvQueryContext* Context; 
	struct UEnvQueryItemType* GeneratedItemType; 

	struct UObject* GetQuerier(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void DoItemGeneration(struct TArray<struct FVector>& ContextLocations); // (Event|Public|HasOutParms|BlueprintEvent|Const)
	void AddGeneratedVector(struct FVector GeneratedVector); // (Final|Native|Public|HasDefaults|BlueprintCallable|Const)
	void AddGeneratedActor(struct AActor* GeneratedActor); // (Final|Native|Public|BlueprintCallable|Const)
};

// Class AIModule.EnvQueryGenerator_Composite
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators; 
	char bAllowDifferentItemTypes : 1; 
	char bHasMatchingItemType : 1; 
	struct UEnvQueryItemType* ForcedItemType; 
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData ProjectionData; 
};

// Class AIModule.EnvQueryGenerator_Cone
struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue AlignedPointsDistance; 
	struct FAIDataProviderFloatValue ConeDegrees; 
	struct FAIDataProviderFloatValue AngleStep; 
	struct FAIDataProviderFloatValue Range; 
	struct UEnvQueryContext* CenterActor; 
	char bIncludeContextLocation : 1; 
};

// Class AIModule.EnvQueryGenerator_CurrentLocation
struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	struct UEnvQueryContext* QueryContext; 
};

// Class AIModule.EnvQueryGenerator_Donut
struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; 
	struct FAIDataProviderFloatValue OuterRadius; 
	struct FAIDataProviderIntValue NumberOfRings; 
	struct FAIDataProviderIntValue PointsPerRing; 
	struct FEnvDirection ArcDirection; 
	struct FAIDataProviderFloatValue ArcAngle; 
	bool bUseSpiralPattern; 
	struct UEnvQueryContext* Center; 
	char bDefineArc : 1; 
};

// Class AIModule.EnvQueryGenerator_OnCircle
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue CircleRadius; 
	struct FAIDataProviderFloatValue SpaceBetween; 
	struct FAIDataProviderIntValue NumberOfPoints; 
	enum class EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; 
	struct FEnvDirection ArcDirection; 
	struct FAIDataProviderFloatValue ArcAngle; 
	float AngleRadians; 
	struct UEnvQueryContext* CircleCenter; 
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; 
	struct FAIDataProviderFloatValue CircleCenterZOffset; 
	struct FEnvTraceData TraceData; 
	char bDefineArc : 1; 
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; 
	struct FAIDataProviderFloatValue SpaceBetween; 
	struct UEnvQueryContext* GenerateAround; 
};

// Class AIModule.EnvQueryGenerator_PathingGrid
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue PathToItem; 
	struct UNavigationQueryFilter* NavigationFilter; 
	struct FAIDataProviderFloatValue ScanRangeMultiplier; 
};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
struct UEnvQueryInstanceBlueprintWrapper : UObject {
	int32_t QueryID; 
	struct UEnvQueryItemType* ItemType; 
	int32_t OptionIndex; 
	struct FMulticastInlineDelegate OnQueryFinishedEvent; 

	void SetNamedParam(struct FName ParamName, float Value); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct FVector> GetResultsAsLocations(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct AActor*> GetResultsAsActors(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations); // (Final|Native|Public|HasOutParms|BlueprintCallable|Const)
	bool GetQueryResultsAsActors(struct TArray<struct AActor*>& ResultActors); // (Final|Native|Public|HasOutParms|BlueprintCallable|Const)
	float GetItemScore(int32_t ItemIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) 
};

// Class AIModule.EnvQueryItemType
struct UEnvQueryItemType : UObject {
};

// Class AIModule.EnvQueryItemType_VectorBase
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType {
};

// Class AIModule.EnvQueryItemType_ActorBase
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Actor
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase {
};

// Class AIModule.EnvQueryItemType_Direction
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Point
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryManager
struct UEnvQueryManager : UAISubsystem {
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; 
	struct TArray<struct UEnvQueryContext*> LocalContexts; 
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; 
	float MaxAllowedTestingTime; 
	bool bTestQueriesUsingBreadth; 
	int32_t QueryCountWarningThreshold; 
	double QueryCountWarningInterval; 

	struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, enum class EEnvQueryRunMode RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AIModule.EnvQueryOption
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator; 
	struct TArray<struct UEnvQueryTest*> Tests; 
};

// Class AIModule.EnvQueryTest_Distance
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class EEnvTestDistance TestMode; 
	struct UEnvQueryContext* DistanceTo; 
};

// Class AIModule.EnvQueryTest_Dot
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection LineA; 
	struct FEnvDirection LineB; 
	enum class EEnvTestDot TestMode; 
	bool bAbsoluteValue; 
};

// Class AIModule.EnvQueryTest_GameplayTags
struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	struct FGameplayTagQuery TagQueryToMatch; 
	bool bUpdatedToUseQuery; 
	enum class EGameplayContainerMatchType TagsToMatch; 
	struct FGameplayTagContainer GameplayTags; 
};

// Class AIModule.EnvQueryTest_Overlap
struct UEnvQueryTest_Overlap : UEnvQueryTest {
	struct FEnvOverlapData OverlapData; 
};

// Class AIModule.EnvQueryTest_Pathfinding
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding TestMode; 
	struct UEnvQueryContext* Context; 
	struct FAIDataProviderBoolValue PathFromContext; 
	struct FAIDataProviderBoolValue SkipUnreachable; 
	struct UNavigationQueryFilter* FilterClass; 
};

// Class AIModule.EnvQueryTest_PathfindingBatch
struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue ScanRangeMultiplier; 
};

// Class AIModule.EnvQueryTest_Project
struct UEnvQueryTest_Project : UEnvQueryTest {
	struct FEnvTraceData ProjectionData; 
};

// Class AIModule.EnvQueryTest_Random
struct UEnvQueryTest_Random : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; 
	struct FAIDataProviderBoolValue TraceFromContext; 
	struct FAIDataProviderFloatValue ItemHeightOffset; 
	struct FAIDataProviderFloatValue ContextHeightOffset; 
	struct UEnvQueryContext* Context; 
};

// Class AIModule.EnvQueryTest_Volume
struct UEnvQueryTest_Volume : UEnvQueryTest {
	struct UEnvQueryContext* VolumeContext; 
	struct AVolume* VolumeClass; 
	char bDoComplexVolumeTest : 1; 
};

// Class AIModule.EnvQueryTypes
struct UEnvQueryTypes : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.EQSRenderingComponent
struct UEQSRenderingComponent : UPrimitiveComponent {
};

// Class AIModule.GenericTeamAgentInterface
struct UGenericTeamAgentInterface : UInterface {
};

// Class AIModule.GridPathAIController
struct AGridPathAIController : AAIController {
};

// Class AIModule.GridPathFollowingComponent
struct UGridPathFollowingComponent : UPathFollowingComponent {
	struct UNavLocalGridManager* GridManager; 
};

// Class AIModule.NavFilter_AIControllerDefault
struct UNavFilter_AIControllerDefault : UNavigationQueryFilter {
};

// Class AIModule.NavLocalGridManager
struct UNavLocalGridManager : UObject {

	bool SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize); // (Final|Native|Static|Public|BlueprintCallable)
	void RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids); // (Final|Native|Static|Public|BlueprintCallable)
	bool FindLocalNavigationGridPath(struct UObject* WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct FVector>& PathPoints); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	int32_t AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, struct TArray<struct FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	int32_t AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	int32_t AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	int32_t AddLocalNavigationGridForBox(struct UObject* WorldContextObject, struct FVector& Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class AIModule.PathFollowingManager
struct UPathFollowingManager : UObject {
};

// Class AIModule.PawnAction
struct UPawnAction : UObject {
	struct UPawnAction* ChildAction; 
	struct UPawnAction* ParentAction; 
	struct UPawnActionsComponent* OwnerComponent; 
	struct UObject* Instigator; 
	struct UBrainComponent* BrainComp; 
	char bAllowNewSameClassInstance : 1; 
	char bReplaceActiveSameClassInstance : 1; 
	char bShouldPauseMovement : 1; 
	char bAlwaysNotifyOnFinished : 1; 

	enum class EAIRequestPriority GetActionPriority(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	void Finish(enum class EPawnActionResult WithResult); // (Native|Protected|BlueprintCallable)
	struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, struct UPawnAction* ActionClass); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AIModule.PawnAction_BlueprintBase
struct UPawnAction_BlueprintBase : UPawnAction {

	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ActionStart(struct APawn* ControlledPawn); // (Event|Public|BlueprintEvent)
	void ActionResume(struct APawn* ControlledPawn); // (Event|Public|BlueprintEvent)
	void ActionPause(struct APawn* ControlledPawn); // (Event|Public|BlueprintEvent)
	void ActionFinished(struct APawn* ControlledPawn, enum class EPawnActionResult WithResult); // (Event|Public|BlueprintEvent)
};

// Class AIModule.PawnAction_Move
struct UPawnAction_Move : UPawnAction {
	struct AActor* GoalActor; 
	struct FVector GoalLocation; 
	float AcceptableRadius; 
	struct UNavigationQueryFilter* FilterClass; 
	char bAllowStrafe : 1; 
	char bFinishOnOverlap : 1; 
	char bUsePathfinding : 1; 
	char bAllowPartialPath : 1; 
	char bProjectGoalToNavigation : 1; 
	char bUpdatePathToGoal : 1; 
	char bAbortChildActionOnPathChange : 1; 
};

// Class AIModule.PawnAction_Repeat
struct UPawnAction_Repeat : UPawnAction {
	struct UPawnAction* ActionToRepeat; 
	struct UPawnAction* RecentActionCopy; 
	enum class EPawnActionFailHandling ChildFailureHandlingMode; 
};

// Class AIModule.PawnAction_Sequence
struct UPawnAction_Sequence : UPawnAction {
	struct TArray<struct UPawnAction*> ActionSequence; 
	enum class EPawnActionFailHandling ChildFailureHandlingMode; 
	struct UPawnAction* RecentActionCopy; 
};

// Class AIModule.PawnAction_Wait
struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; 
};

// Class AIModule.PawnActionsComponent
struct UPawnActionsComponent : UActorComponent {
	struct APawn* ControlledPawn; 
	struct TArray<struct FPawnActionStack> ActionStacks; 
	struct TArray<struct FPawnActionEvent> ActionEvents; 
	struct UPawnAction* CurrentAction; 

	bool K2_PushAction(struct UPawnAction* NewAction, enum class EAIRequestPriority Priority, struct UObject* Instigator); // (Final|Native|Public|BlueprintCallable)
	bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, enum class EAIRequestPriority Priority); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EPawnActionAbortState K2_ForceAbortAction(struct UPawnAction* ActionToAbort); // (Final|Native|Public|BlueprintCallable)
	enum class EPawnActionAbortState K2_AbortAction(struct UPawnAction* ActionToAbort); // (Final|Native|Public|BlueprintCallable)
};

// Class AIModule.PawnSensingComponent
struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; 
	float LOSHearingThreshold; 
	float SightRadius; 
	float SensingInterval; 
	float HearingMaxSoundAge; 
	char bEnableSensingUpdates : 1; 
	char bOnlySensePlayers : 1; 
	char bSeePawns : 1; 
	char bHearNoises : 1; 
	struct FMulticastInlineDelegate OnSeePawn; 
	struct FMulticastInlineDelegate OnHearNoise; 
	float PeripheralVisionAngle; 
	float PeripheralVisionCosine; 

	void SetSensingUpdatesEnabled(bool bEnabled); // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	void SetSensingInterval(float NewSensingInterval); // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector& Location, float Volume); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) 
	float GetPeripheralVisionCosine(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPeripheralVisionAngle(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AIModule.VisualLoggerExtension
struct UVisualLoggerExtension : UObject {
};

