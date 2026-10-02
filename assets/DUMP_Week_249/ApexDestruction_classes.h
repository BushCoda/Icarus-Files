// Class ApexDestruction.DestructibleActor
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; 
	struct FMulticastInlineDelegate OnActorFracture; 
};

// Class ApexDestruction.DestructibleComponent
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; 
	struct TArray<struct FFractureEffect> FractureEffects; 
	bool bEnableHardSleeping; 
	float LargeChunkThreshold; 
	struct FName FracturedChunkCollisionProfile; 
	struct FMulticastInlineDelegate OnComponentFracture; 

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // (Final|Native|Public|BlueprintCallable)
	struct UDestructibleMesh* GetDestructibleMesh(); // (Final|Native|Public|BlueprintCallable)
	void ApplyRadiusDamage(float BaseDamage, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void ApplyDamage(float DamageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class ApexDestruction.DestructibleFractureSettings
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; 
	struct FFractureMaterial FractureMaterialDesc; 
	int32_t RandomSeed; 
	struct TArray<struct FVector> VoronoiSites; 
	int32_t OriginalSubmeshCount; 
	struct TArray<struct UMaterialInterface*> Materials; 
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; 
};

// Class ApexDestruction.DestructibleMesh
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; 
	struct TArray<struct FFractureEffect> FractureEffects; 
};

