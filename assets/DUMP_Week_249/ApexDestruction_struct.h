// Enum ApexDestruction.EImpactDamageOverride
enum class EImpactDamageOverride : uint8 {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3
};

// ScriptStruct ApexDestruction.DestructibleChunkParameters
struct FDestructibleChunkParameters {
	bool bIsSupportChunk; 
	bool bDoNotFracture; 
	bool bDoNotDamage; 
	bool bDoNotCrumble; 
};

// ScriptStruct ApexDestruction.FractureMaterial
struct FFractureMaterial {
	struct FVector2D UVScale; 
	struct FVector2D UVOffset; 
	struct FVector Tangent; 
	float UAngle; 
	int32_t InteriorElementIndex; 
};

// ScriptStruct ApexDestruction.DestructibleParameters
struct FDestructibleParameters {
	struct FDestructibleDamageParameters DamageParameters; 
	struct FDestructibleDebrisParameters DebrisParameters; 
	struct FDestructibleAdvancedParameters AdvancedParameters; 
	struct FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; 
	struct TArray<struct FDestructibleDepthParameters> DepthParameters; 
	struct FDestructibleParametersFlag Flags; 
};

// ScriptStruct ApexDestruction.DestructibleParametersFlag
struct FDestructibleParametersFlag {
	char bAccumulateDamage : 1; 
	char bAssetDefinedSupport : 1; 
	char bWorldSupport : 1; 
	char bDebrisTimeout : 1; 
	char bDebrisMaxSeparation : 1; 
	char bCrumbleSmallestChunks : 1; 
	char bAccurateRaycasts : 1; 
	char bUseValidBounds : 1; 
	char bFormExtendedStructures : 1; 
};

// ScriptStruct ApexDestruction.DestructibleDepthParameters
struct FDestructibleDepthParameters {
	enum class EImpactDamageOverride ImpactDamageOverride; 
};

// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; 
	int32_t MinimumFractureDepth; 
	bool bEnableDebris; 
	int32_t DebrisDepth; 
	int32_t EssentialDepth; 
};

// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
struct FDestructibleAdvancedParameters {
	float DamageCap; 
	float ImpactVelocityThreshold; 
	float MaxChunkSpeed; 
	float FractureImpulseScale; 
};

// ScriptStruct ApexDestruction.DestructibleDebrisParameters
struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; 
	float DebrisLifetimeMax; 
	float DebrisMaxSeparationMin; 
	float DebrisMaxSeparationMax; 
	struct FBox ValidBounds; 
};

// ScriptStruct ApexDestruction.DestructibleDamageParameters
struct FDestructibleDamageParameters {
	float DamageThreshold; 
	float DamageSpread; 
	bool bEnableImpactDamage; 
	float ImpactDamage; 
	int32_t DefaultImpactDamageDepth; 
	bool bCustomImpactResistance; 
	float ImpactResistance; 
};

