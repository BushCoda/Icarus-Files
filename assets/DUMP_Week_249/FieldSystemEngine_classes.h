// Class FieldSystemEngine.FieldSystemActor
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; 
};

// Class FieldSystemEngine.FieldSystem
struct UFieldSystem : UObject {
};

// Class FieldSystemEngine.FieldSystemComponent
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; 
	bool bIsWorldField; 
	bool bIsChaosField; 
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; 
	struct FFieldObjectCommands ConstructionCommands; 
	struct FFieldObjectCommands BufferCommands; 

	void ResetFieldSystem(); // (Final|Native|Public|BlueprintCallable)
	void RemovePersistentFields(); // (Final|Native|Public|BlueprintCallable)
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector position, struct FVector Direction, float Radius, float Magnitude); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void ApplyStrainField(bool Enabled, struct FVector position, float Radius, float Magnitude, int32_t Iterations); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void ApplyStayDynamicField(bool Enabled, struct FVector position, float Radius); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector position, float Radius, float Magnitude); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void ApplyRadialForce(bool Enabled, struct FVector position, float Magnitude); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // (Final|Native|Public|BlueprintCallable)
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // (Final|Native|Public|BlueprintCallable)
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // (Final|Native|Public|BlueprintCallable)
};

// Class FieldSystemEngine.FieldSystemMetaData
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; 

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; 

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.FieldSystemMetaDataFilter
struct UFieldSystemMetaDataFilter : UFieldSystemMetaData {
	enum class EFieldFilterType FilterType; 

	struct UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldFilterType FilterType); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.FieldNodeBase
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; 

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.RadialIntMask
struct URadialIntMask : UFieldNodeInt {
	float Radius; 
	struct FVector position; 
	int32_t InteriorValue; 
	int32_t ExteriorValue; 
	enum class ESetMaskConditionType SetMaskCondition; 

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.UniformScalar
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; 

	struct UUniformScalar* SetUniformScalar(float Magnitude); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.WaveScalar
struct UWaveScalar : UFieldNodeFloat {
	float Magnitude; 
	struct FVector position; 
	float Wavelength; 
	float Period; 
	enum class EWaveFunctionType Function; 
	enum class EFieldFalloffType Falloff; 

	struct UWaveScalar* SetWaveScalar(float Magnitude, struct FVector position, float Wavelength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.RadialFalloff
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; 
	float MinRange; 
	float MaxRange; 
	float Default; 
	float Radius; 
	struct FVector position; 
	enum class EFieldFalloffType Falloff; 

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector position, enum class EFieldFalloffType Falloff); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.PlaneFalloff
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; 
	float MinRange; 
	float MaxRange; 
	float Default; 
	float Distance; 
	struct FVector position; 
	struct FVector Normal; 
	enum class EFieldFalloffType Falloff; 

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector position, struct FVector Normal, enum class EFieldFalloffType Falloff); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.BoxFalloff
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; 
	float MinRange; 
	float MaxRange; 
	float Default; 
	struct FTransform Transform; 
	enum class EFieldFalloffType Falloff; 

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.NoiseField
struct UNoiseField : UFieldNodeFloat {
	float MinRange; 
	float MaxRange; 
	struct FTransform Transform; 

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.UniformVector
struct UUniformVector : UFieldNodeVector {
	float Magnitude; 
	struct FVector Direction; 

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.RadialVector
struct URadialVector : UFieldNodeVector {
	float Magnitude; 
	struct FVector position; 

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector position); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.RandomVector
struct URandomVector : UFieldNodeVector {
	float Magnitude; 

	struct URandomVector* SetRandomVector(float Magnitude); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.OperatorField
struct UOperatorField : UFieldNodeBase {
	float Magnitude; 
	struct UFieldNodeBase* RightField; 
	struct UFieldNodeBase* LeftField; 
	enum class EFieldOperationType Operation; 

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* LeftField, struct UFieldNodeBase* RightField, enum class EFieldOperationType Operation); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.ToIntegerField
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; 

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.ToFloatField
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; 

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.CullingField
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; 
	struct UFieldNodeBase* Field; 
	enum class EFieldCullingOperationType Operation; 

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class FieldSystemEngine.ReturnResultsTerminal
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

