// BlueprintGeneratedClass BP_LightningStrike.BP_LightningStrike_C
struct ABP_LightningStrike_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UPostProcessComponent* PostProcessStrike; 
	struct UPointLightComponent* PointLight; 
	struct UStaticMeshComponent* LightningMesh; 
	struct USceneComponent* DefaultSceneRoot; 
	float BuildupTimeRemaining; 
	struct AActor* ActorTarget; 
	struct FFLODInstanceID FLODRecordTarget; 
	enum class ELightningStrikeTarget TargetType; 
	struct UFMODEvent* FMODEvent_Strike; 
	struct UFMODEvent* FMODEvent_Buildup; 
	bool EffectTriggered; 
	float StrikeDuration; 
	bool IsDynamicallyShadowCasting; 
	float DefaultLightningBurnChance%; 

	void ConfigureLightningLight(bool CanCastShadows); // (Public|BlueprintCallable|BlueprintEvent)
	void CanCastShadows(bool& CanTurnOnShadowCasting); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayBuildupSound(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayStrikeSound(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickStrikeSequence(float DeltaTime); // (Public|BlueprintCallable|BlueprintEvent)
	void StrikeLightningRod(); // (Public|BlueprintCallable|BlueprintEvent)
	void StrikeBuilding(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StrikeFLOD(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StrikePlayer(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Strike(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void TestStrike(works once)(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Particles only(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_LightningStrike(int32_t EntryPoint); // (Final|UbergraphFunction)
};

