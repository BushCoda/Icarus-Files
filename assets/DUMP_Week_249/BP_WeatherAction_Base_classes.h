// BlueprintGeneratedClass BP_WeatherAction_Base.BP_WeatherAction_Base_C
struct UBP_WeatherAction_Base_C : UIcarusWeatherAction {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FText ActiveWarningMessage; 
	struct TArray<struct ABP_Building_Base_C*> WindDamagedBuildings; 
	struct ABP_WeatherController_C* WeatherControllerRef; 
	struct FTimerHandle DamageDeployablesRef; 
	struct FTimerHandle DamagePlayerRef; 
	struct TArray<struct UObject*> LoadedSoftObjects; 
	struct TMap<struct AIcarusPlayerCharacter*, int32_t> AppliedExposureModifiers; 
	struct FTimerHandle DamageTaggedRef; 
	struct FTimerHandle ClogProcessorsRef; 
	struct FTimerHandle DamagePlayerTaggedRef; 
	struct TArray<struct ABP_Building_Base_C*> TaggedBuildings; 
	struct TArray<struct ADeployable*> TaggedDeployables; 
	struct TArray<struct ABP_Building_Base_C*> TaggedBuildingsDamaged; 
	int32_t TaggedBuildingMaxPiecesToDamage; 
	struct FTimerHandle NetworkUpdateRef; 
	float ColorAmount; 

	void Visual_Speckles(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_RadiationWind(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_LightningCloud(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_Radiation(); // (Public|BlueprintCallable|BlueprintEvent)
	void Action_AshBuildUp(); // (Public|BlueprintCallable|BlueprintEvent)
	void Action_SandBuildUp(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_Whiteout(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetColorCurveTimeRemaining(struct UCurveLinearColor* Curve, bool Inverse, struct FLinearColor NewParam); // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Visual_FogColor(); // (Public|BlueprintCallable|BlueprintEvent)
	void DoTaggedDamage(int32_t Intensity, enum class EIcarusDamageType DamageType, float DutyCycle, bool IsRampingUp); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StopTaggedDamage(); // (Public|BlueprintCallable|BlueprintEvent)
	void StartTaggedDamage(struct FTagQueriesRowHandle TagQueryRow, struct FBiomesRowHandle Biome, int32_t StormTier); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Visual_FogExtinction(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_FogDensity(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_Smoke(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_Hail(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_Embers(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_Ash(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_AcidRain(); // (Public|BlueprintCallable|BlueprintEvent)
	float GetStormTier(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void PickUnzipGrid(struct ABP_Grid_Base_C*& SelectedGrid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Action_SnowBuildUp(); // (Public|BlueprintCallable|BlueprintEvent)
	void ClearExposureModifierForPlayer(struct AIcarusPlayerCharacter*& Player); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Action_ExtinguishFire(); // (Public|BlueprintCallable|BlueprintEvent)
	void Action_RainFillable(); // (Public|BlueprintCallable|BlueprintEvent)
	void Action_Wind(); // (Public|BlueprintCallable|BlueprintEvent)
	void Action_AIPerception(); // (Public|BlueprintCallable|BlueprintEvent)
	void Action_Temperature(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_SnowStorm(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_Snow(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_Sand(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_Wind(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_Debris(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_Clouds(); // (Public|BlueprintCallable|BlueprintEvent)
	void Visual_Rain(); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayerExposureChecks(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RandomizeWind(); // (Public|BlueprintCallable|BlueprintEvent)
	float GetTimeRemaining(struct UCurveFloat* Curve, bool Inverse); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void StartWindDamageToBuilding(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DebugWeatherActionBase(struct FBiomesRowHandle& BiomesRowHandle, float CurrentLifeTime, float TotalLifeTime, float Delta); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B7F63BB814(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void WeatherActionStarted(struct AWeatherController* WeatherController); // (Event|Public|BlueprintEvent)
	void WeatherActionEnded(struct AWeatherController* WeatherController); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void StormWindDamageSelectBuildingPiece(); // (BlueprintCallable|BlueprintEvent)
	void WeatherActionVisualTick(float Delta, struct AWeatherController* WeatherController); // (Event|Public|BlueprintEvent)
	void WeatherActionTick(float Delta, struct AWeatherController* WeatherController); // (Event|Public|BlueprintEvent)
	void Damage_Deployables(); // (BlueprintCallable|BlueprintEvent)
	void Damage_Player(); // (BlueprintCallable|BlueprintEvent)
	void LoadSoftObjects(); // (BlueprintCallable|BlueprintEvent)
	void DamageTaggedCycle(); // (BlueprintCallable|BlueprintEvent)
	void CloggedCycle(); // (BlueprintCallable|BlueprintEvent)
	void DmagePlayerItemCycle(); // (BlueprintCallable|BlueprintEvent)
	void NetworkUpdateCycle(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_WeatherAction_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

