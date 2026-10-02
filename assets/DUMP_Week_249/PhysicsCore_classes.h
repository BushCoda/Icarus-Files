// Class PhysicsCore.BodySetupCore
struct UBodySetupCore : UObject {
	struct FName BoneName; 
	enum class EPhysicsType PhysicsType; 
	enum class ECollisionTraceFlag CollisionTraceFlag; 
	enum class EBodyCollisionResponse CollisionReponse; 
};

// Class PhysicsCore.ChaosPhysicalMaterial
struct UChaosPhysicalMaterial : UObject {
	float Friction; 
	float StaticFriction; 
	float Restitution; 
	float LinearEtherDrag; 
	float AngularEtherDrag; 
	float SleepingLinearVelocityThreshold; 
	float SleepingAngularVelocityThreshold; 
};

// Class PhysicsCore.PhysicalMaterial
struct UPhysicalMaterial : UObject {
	float Friction; 
	float StaticFriction; 
	enum class EFrictionCombineMode FrictionCombineMode; 
	bool bOverrideFrictionCombineMode; 
	float Restitution; 
	enum class EFrictionCombineMode RestitutionCombineMode; 
	bool bOverrideRestitutionCombineMode; 
	float Density; 
	float SleepLinearVelocityThreshold; 
	float SleepAngularVelocityThreshold; 
	int32_t SleepCounterThreshold; 
	float RaiseMassToPower; 
	float DestructibleDamageThresholdScale; 
	struct UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; 
	enum class EPhysicalSurface SurfaceType; 
};

// Class PhysicsCore.PhysicalMaterialPropertyBase
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class PhysicsCore.PhysicsSettingsCore
struct UPhysicsSettingsCore : UDeveloperSettings {
	float DefaultGravityZ; 
	float DefaultTerminalVelocity; 
	float DefaultFluidFriction; 
	int32_t SimulateScratchMemorySize; 
	int32_t RagdollAggregateThreshold; 
	float TriangleMeshTriangleMinAreaThreshold; 
	bool bEnableShapeSharing; 
	bool bEnablePCM; 
	bool bEnableStabilization; 
	bool bWarnMissingLocks; 
	bool bEnable2DPhysics; 
	bool bDefaultHasComplexCollision; 
	float BounceThresholdVelocity; 
	enum class EFrictionCombineMode FrictionCombineMode; 
	enum class EFrictionCombineMode RestitutionCombineMode; 
	float MaxAngularVelocity; 
	float MaxDepenetrationVelocity; 
	float ContactOffsetMultiplier; 
	float MinContactOffset; 
	float MaxContactOffset; 
	bool bSimulateSkeletalMeshOnDedicatedServer; 
	enum class ECollisionTraceFlag DefaultShapeComplexity; 
	struct FChaosSolverConfiguration SolverOptions; 
};

