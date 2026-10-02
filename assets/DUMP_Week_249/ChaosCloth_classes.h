// Class ChaosCloth.ChaosClothConfig
struct UChaosClothConfig : UClothConfigCommon {
	enum class EClothMassMode MassMode; 
	float UniformMass; 
	float TotalMass; 
	float Density; 
	float MinPerParticleMass; 
	float EdgeStiffness; 
	float BendingStiffness; 
	bool bUseBendingElements; 
	float AreaStiffness; 
	float VolumeStiffness; 
	struct FChaosClothWeightedValue TetherStiffness; 
	float LimitScale; 
	bool bUseGeodesicDistance; 
	float ShapeTargetStiffness; 
	float CollisionThickness; 
	float FrictionCoefficient; 
	bool bUseCCD; 
	bool bUseSelfCollisions; 
	float SelfCollisionThickness; 
	bool bUseLegacyBackstop; 
	float DampingCoefficient; 
	bool bUsePointBasedWindModel; 
	float DragCoefficient; 
	float LiftCoefficient; 
	bool bUseGravityOverride; 
	float GravityScale; 
	struct FVector Gravity; 
	struct FChaosClothWeightedValue AnimDriveStiffness; 
	struct FChaosClothWeightedValue AnimDriveDamping; 
	struct FVector LinearVelocityScale; 
	float AngularVelocityScale; 
	float FictitiousAngularScale; 
	bool bUseTetrahedralConstraints; 
	bool bUseThinShellVolumeConstraints; 
	bool bUseContinuousCollisionDetection; 
};

// Class ChaosCloth.ChaosClothSharedSimConfig
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; 
	int32_t SubdivisionCount; 
	bool bUseLocalSpaceSimulation; 
	bool bUseXPBDConstraints; 
};

// Class ChaosCloth.ChaosClothingSimulationFactory
struct UChaosClothingSimulationFactory : UClothingSimulationFactory {
};

// Class ChaosCloth.ChaosClothingInteractor
struct UChaosClothingInteractor : UClothingInteractor {

	void SetVelocityScale(struct FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness); // (Final|Native|Public|BlueprintCallable)
	void SetLongRangeAttachmentLinear(float TetherStiffness); // (Final|Native|Public|BlueprintCallable)
	void SetLongRangeAttachment(struct FVector2D TetherStiffness); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetGravity(float GravityScale, bool bIsGravityOverridden, struct FVector GravityOverride); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetDamping(float DampingCoefficient); // (Final|Native|Public|BlueprintCallable)
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness); // (Final|Native|Public|BlueprintCallable)
	void SetAnimDriveLinear(float AnimDriveStiffness); // (Final|Native|Public|BlueprintCallable)
	void SetAnimDrive(struct FVector2D AnimDriveStiffness, struct FVector2D AnimDriveDamping); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, struct FVector WindVelocity); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void ResetAndTeleport(bool bReset, bool bTeleport); // (Final|Native|Public|BlueprintCallable)
};

// Class ChaosCloth.ChaosClothingSimulationInteractor
struct UChaosClothingSimulationInteractor : UClothingSimulationInteractor {
};

