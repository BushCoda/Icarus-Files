// Class ClothingSystemRuntimeInterface.ClothConfigBase
struct UClothConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
struct UClothingSimulationFactory : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingInteractor
struct UClothingInteractor : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
struct UClothingSimulationInteractor : UObject {
	struct TMap<struct FName, struct UClothingInteractor*> ClothingInteractors; 

	void SetNumSubsteps(int32_t NumSubsteps); // (Native|Public|BlueprintCallable)
	void SetNumIterations(int32_t NumIterations); // (Native|Public|BlueprintCallable)
	void SetAnimDriveSpringStiffness(float InStiffness); // (Native|Public|BlueprintCallable)
	void PhysicsAssetUpdated(); // (Native|Public|BlueprintCallable)
	float GetSimulationTime(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumSubsteps(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumKinematicParticles(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumIterations(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumDynamicParticles(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumCloths(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UClothingInteractor* GetClothingInteractor(struct FString ClothingAssetName); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void EnableGravityOverride(struct FVector& InVector); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void DisableGravityOverride(); // (Native|Public|BlueprintCallable)
	void ClothConfigUpdated(); // (Native|Public|BlueprintCallable)
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
struct UClothSharedSimConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
struct UClothingAssetBase : UObject {
	struct FString ImportedFilePath; 
	struct FGuid AssetGuid; 
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
struct UClothPhysicalMeshDataBase_Legacy : UObject {
	struct TArray<struct FVector> Vertices; 
	struct TArray<struct FVector> Normals; 
	struct TArray<uint32_t> Indices; 
	struct TArray<float> InverseMasses; 
	struct TArray<struct FClothVertBoneData> BoneData; 
	int32_t NumFixedVerts; 
	int32_t MaxBoneWeights; 
	struct TArray<uint32_t> SelfCollisionIndices; 
};

