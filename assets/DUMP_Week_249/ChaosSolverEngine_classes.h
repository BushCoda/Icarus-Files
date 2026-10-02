// Class ChaosSolverEngine.ChaosDebugDrawComponent
struct UChaosDebugDrawComponent : UActorComponent {
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
struct UChaosEventListenerComponent : UActorComponent {
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; 
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; 
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
};

// Class ChaosSolverEngine.ChaosSolver
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
struct AChaosSolverActor : AActor {
	struct FChaosSolverConfiguration Properties; 
	float TimeStepMultiplier; 
	int32_t CollisionIterations; 
	int32_t PushOutIterations; 
	int32_t PushOutPairIterations; 
	float ClusterConnectionFactor; 
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; 
	bool DoGenerateCollisionData; 
	struct FSolverCollisionFilterSettings CollisionFilterSettings; 
	bool DoGenerateBreakingData; 
	struct FSolverBreakingFilterSettings BreakingFilterSettings; 
	bool DoGenerateTrailingData; 
	struct FSolverTrailingFilterSettings TrailingFilterSettings; 
	float MassScale; 
	bool bGenerateContactGraph; 
	bool bHasFloor; 
	float FloorHeight; 
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; 
	struct UBillboardComponent* SpriteComponent; 
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; 

	void SetSolverActive(bool bActive); // (Native|Public|BlueprintCallable)
	void SetAsCurrentWorldSolver(); // (Final|Native|Public|BlueprintCallable)
};

// Class ChaosSolverEngine.ChaosSolverSettings
struct UChaosSolverSettings : UDeveloperSettings {
	struct FSoftClassPath DefaultChaosSolverActorClass; 
};

