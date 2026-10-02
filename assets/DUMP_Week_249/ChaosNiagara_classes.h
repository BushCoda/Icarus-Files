// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
struct UNiagaraDataInterfaceChaosDestruction : UNiagaraDataInterface {
	struct TSet<struct AChaosSolverActor*> ChaosSolverActorSet; 
	enum class EDataSourceTypeEnum DataSourceType; 
	int32_t DataProcessFrequency; 
	int32_t MaxNumberOfDataEntriesToSpawn; 
	bool DoSpawn; 
	struct FVector2D SpawnMultiplierMinMax; 
	float SpawnChance; 
	struct FVector2D ImpulseToSpawnMinMax; 
	struct FVector2D SpeedToSpawnMinMax; 
	struct FVector2D MassToSpawnMinMax; 
	struct FVector2D ExtentMinToSpawnMinMax; 
	struct FVector2D ExtentMaxToSpawnMinMax; 
	struct FVector2D VolumeToSpawnMinMax; 
	struct FVector2D SolverTimeToSpawnMinMax; 
	int32_t SurfaceTypeToSpawn; 
	enum class ELocationFilteringModeEnum LocationFilteringMode; 
	enum class ELocationXToSpawnEnum LocationXToSpawn; 
	struct FVector2D LocationXToSpawnMinMax; 
	enum class ELocationYToSpawnEnum LocationYToSpawn; 
	struct FVector2D LocationYToSpawnMinMax; 
	enum class ELocationZToSpawnEnum LocationZToSpawn; 
	struct FVector2D LocationZToSpawnMinMax; 
	enum class EDataSortTypeEnum DataSortingType; 
	bool bGetExternalCollisionData; 
	bool DoSpatialHash; 
	struct FVector SpatialHashVolumeMin; 
	struct FVector SpatialHashVolumeMax; 
	struct FVector SpatialHashVolumeCellSize; 
	int32_t MaxDataPerCell; 
	bool bApplyMaterialsFilter; 
	struct TSet<struct UPhysicalMaterial*> ChaosBreakingMaterialSet; 
	bool bGetExternalBreakingData; 
	bool bGetExternalTrailingData; 
	struct FVector2D RandomPositionMagnitudeMinMax; 
	float InheritedVelocityMultiplier; 
	enum class ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType; 
	struct FVector2D RandomVelocityMagnitudeMinMax; 
	float SpreadAngleMax; 
	struct FVector VelocityOffsetMin; 
	struct FVector VelocityOffsetMax; 
	struct FVector2D FinalVelocityMagnitudeMinMax; 
	float MaxLatency; 
	enum class EDebugTypeEnum DebugType; 
	int32_t LastSpawnedPointID; 
	float LastSpawnTime; 
	float SolverTime; 
	float TimeStampOfLastProcessedData; 
};

// Class ChaosNiagara.NiagaraDataInterfacePhysicsField
struct UNiagaraDataInterfacePhysicsField : UNiagaraDataInterface {
};

