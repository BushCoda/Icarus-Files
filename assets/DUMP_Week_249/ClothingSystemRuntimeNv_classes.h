// Class ClothingSystemRuntimeNv.ClothConfigNv
struct UClothConfigNv : UClothConfigCommon {
	enum class EClothingWindMethodNv ClothingWindMethod; 
	struct FClothConstraintSetupNv VerticalConstraint; 
	struct FClothConstraintSetupNv HorizontalConstraint; 
	struct FClothConstraintSetupNv BendConstraint; 
	struct FClothConstraintSetupNv ShearConstraint; 
	float SelfCollisionRadius; 
	float SelfCollisionStiffness; 
	float SelfCollisionCullScale; 
	struct FVector Damping; 
	float Friction; 
	float WindDragCoefficient; 
	float WindLiftCoefficient; 
	struct FVector LinearDrag; 
	struct FVector AngularDrag; 
	struct FVector LinearInertiaScale; 
	struct FVector AngularInertiaScale; 
	struct FVector CentrifugalInertiaScale; 
	float SolverFrequency; 
	float StiffnessFrequency; 
	float GravityScale; 
	struct FVector GravityOverride; 
	bool bUseGravityOverride; 
	float TetherStiffness; 
	float TetherLimit; 
	float CollisionThickness; 
	float AnimDriveSpringStiffness; 
	float AnimDriveDamperStiffness; 
	enum class EClothingWindMethod_Legacy WindMethod; 
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; 
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; 
	struct FClothConstraintSetup_Legacy BendConstraintConfig; 
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; 
};

// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
struct UClothingSimulationFactoryNv : UClothingSimulationFactory {
};

// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
struct UClothingSimulationInteractorNv : UClothingSimulationInteractor {

	void SetAnimDriveDamperStiffness(float InStiffness); // (Final|Native|Public|BlueprintCallable)
};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	struct TArray<float> MaxDistances; 
	struct TArray<float> BackstopDistances; 
	struct TArray<float> BackstopRadiuses; 
	struct TArray<float> AnimDriveMultipliers; 
};

