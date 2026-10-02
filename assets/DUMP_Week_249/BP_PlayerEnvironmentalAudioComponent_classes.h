// BlueprintGeneratedClass BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C
struct UBP_PlayerEnvironmentalAudioComponent_C : UPlayerEnvironmentalAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_AtmosphereController_C* AtmosphereController; 
	float AmbienceUpdateFrequency; 
	struct AActor* CaveOverride; 
	struct TMap<struct FBiomesEnum, struct UFMODAudioComponent*> BiomeAmbiences; 
	bool UseExperimentalReflections; 
	int32_t ReflectionTraceIndex; 
	struct TArray<float> ReflectionTraceResults; 
	bool DebugBiomes; 
	float FoliageUpdateFrequency; 
	struct FName FMODParamWind; 
	struct FName FMODParamShelter; 
	float ReflectionTraceDistance; 
	struct AIcarusPlayerCharacterSurvival* Player; 
	float LevelHeightScale; 
	float ShelterRoomToneThreshold; 
	struct UFMODAudioComponent* RoomToneAudioComponent; 
	struct UFMODEvent* RoomToneFMODEvent; 
	enum class EPhysicalSurface CurrentRoomToneSurface; 
	struct UFMODEvent* DistantThunderFMODEvent; 
	struct UFMODEvent* SleepFMODEvent; 
	struct UFMODEvent* SleepSnapshotFMODEvent; 
	struct UCurveFloat* FireIntensityCurve; 
	float MaxFireIntensity; 
	struct TMap<enum class EPhysicalSurface, float> SurfaceReflectionMultipliers; 
	struct FFMODEventInstance SleepSnapshotFMODEventInstance; 
	struct FBiomesRowHandle CurrentAmbienceBiome; 
	struct UFMODAudioComponent* RadiationAudioComponent; 

	void Update Radiation Geiger(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetTreeDensityValue(int32_t Count, int32_t CloseCount, float CoverDepth, float GroupOverlap, float& TreeDensity); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RemoveCaveOverride(); // (Private|BlueprintCallable|BlueprintEvent)
	void PlaySleepAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetSleepSnapshotActive(bool Active); // (Private|BlueprintCallable|BlueprintEvent)
	void OnPlayerAttachedSeatChanged(); // (Private|BlueprintCallable|BlueprintEvent)
	void SetCaveOverride(struct AActor* Actor); // (Private|BlueprintCallable|BlueprintEvent)
	void GetAmbienceInfluence(struct FBiomesEnum Biome, float& Value); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PlayCosmeticThunderSound(struct FVector Location); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector GetShelterTraceLocation(); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateShelterParameters(); // (Private|BlueprintCallable|BlueprintEvent)
	struct FVector GetFoliageTraceLocation(); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetFireIntensity(float Weighting, float Distance, float& Intensity); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateFireIntensity(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateRoomTone(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetGlobalWeatherParameters(float Time, float Rain, float Overcast, float Snow, float SandStorm, float SnowStorm, float Thunder, float Debris, float Wind, float AcidRain, float VolcanicEmbers, float VolcanicAsh, float Hail); // (Public|BlueprintCallable|BlueprintEvent)
	void SetPlayerPositionParameters(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateFoliageParameters(); // (Public|BlueprintCallable|BlueprintEvent)
	void On Player Health Updated(struct UActorState* ActorState, float NewHealth); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseReflections(); // (Private|BlueprintCallable|BlueprintEvent)
	void RemoveBiomeAmbience(struct FBiomesEnum Biome); // (Public|BlueprintCallable|BlueprintEvent)
	void AddBiomeAmbience(struct FBiomesEnum Biome); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateBiomeAmbiences(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateBiome(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Environment Update(); // (BlueprintCallable|BlueprintEvent)
	void Initialise(); // (BlueprintCallable|BlueprintEvent)
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_PlayerEnvironmentalAudioComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

