// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8 {
	Chaos_PointImplicit = 0,
	Chaos_DelaunayTriangulation = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None = 4,
	Chaos_EClsuterCreationParameters_Max = 5,
	Chaos_MAX = 6
};

// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
struct FChaosPhysicsCollisionInfo {
	struct UPrimitiveComponent* Component; 
	struct UPrimitiveComponent* OtherComponent; 
	struct FVector Location; 
	struct FVector Normal; 
	struct FVector AccumulatedImpulse; 
	struct FVector Velocity; 
	struct FVector OtherVelocity; 
	struct FVector AngularVelocity; 
	struct FVector OtherAngularVelocity; 
	float Mass; 
	float OtherMass; 
};

// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
struct FChaosBreakEvent {
	struct UPrimitiveComponent* Component; 
	struct FVector Location; 
	struct FVector Velocity; 
	struct FVector AngularVelocity; 
	float Mass; 
};

// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
struct FChaosHandlerSet {
	struct TSet<struct UObject*> ChaosHandlers; 
};

// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
struct FBreakEventCallbackWrapper {
};

// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
struct FChaosDebugSubstepControl {
	bool bPause; 
	bool bSubstep; 
	bool bStep; 
};

