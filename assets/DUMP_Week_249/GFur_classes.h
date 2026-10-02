// Class GFur.GFurComponent
struct UGFurComponent : UMeshComponent {
	struct USkeletalMesh* SkeletalGrowMesh; 
	struct UStaticMesh* StaticGrowMesh; 
	struct UFurSplines* FurSplines; 
	struct TArray<struct USkeletalMesh*> SkeletalGuideMeshes; 
	struct TArray<struct UStaticMesh*> StaticGuideMeshes; 
	int32_t LayerCount; 
	float MinScreenSize; 
	struct TArray<struct FFurLod> LODs; 
	bool LODFromParent; 
	float ShellBias; 
	float FurLength; 
	float MinFurLength; 
	bool RemoveFacesWithoutSplines; 
	bool PhysicsEnabled; 
	float ForceDistribution; 
	float Stiffness; 
	float Damping; 
	struct FVector ConstantForce; 
	float MaxForce; 
	float MaxForceTorqueFactor; 
	float ReferenceHairBias; 
	float HairLengthForceUniformity; 
	float MaxPhysicsOffsetLength; 
	float NoiseStrength; 
	bool DisableMorphTargets; 
	float StreamingDistanceMultiplier; 

	void RegenerateFur(); // (Final|Native|Public|BlueprintCallable)
	bool CheckGFurSetupIsValid(); // (Final|Native|Public|BlueprintCallable)
};

// Class GFur.FurSplines
struct UFurSplines : UObject {
	struct TArray<struct FVector> Vertices; 
	struct TArray<int32_t> Index; 
	struct TArray<int32_t> Count; 
	int32_t ControlPointCount; 
	struct FString ImportFilename; 
	int32_t Version; 
	int32_t ImportTransformation; 
	float Threshold; 
};

