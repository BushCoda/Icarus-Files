// BlueprintGeneratedClass BP_NPC_Drone_Hunter.BP_NPC_Drone_Hunter_C
struct ABP_NPC_Drone_Hunter_C : ABP_NPC_Drone_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_Drone_EngineHeat; 
	struct UBoxComponent* CriticalArea_Propeller; 
	float ExplosionTimeline_LightFalloffExponent_3320F4B04877526E991054AECBD7D717; 
	float ExplosionTimeline_LightIntensity_3320F4B04877526E991054AECBD7D717; 
	float ExplosionTimeline_EmissiveIntensity_3320F4B04877526E991054AECBD7D717; 
	enum class ETimelineDirection ExplosionTimeline__Direction_3320F4B04877526E991054AECBD7D717; 
	struct UTimelineComponent* ExplosionTimeline; 
	bool ExplosionTriggered; 
	float SphereRadius; 
	struct FName DroneStateName; 
	bool ExplosionCountdownTriggered; 
	bool WantsExplode; 
	float Damage Radius; 

	void DroneStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ExplosionTimeline__FinishedFunc(); // (BlueprintEvent)
	void ExplosionTimeline__UpdateFunc(); // (BlueprintEvent)
	void ExplosionTimeline__SetProximityColour__EventFunc(); // (BlueprintEvent)
	void ExplosionTimeline__BeepTrigger__EventFunc(); // (BlueprintEvent)
	void ExplosionTimeline__Explode__EventFunc(); // (BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void MULTI_OnExplodeFX(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void TriggerExplosion(); // (BlueprintCallable|BlueprintEvent)
	void InstantExplode(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void Multicast_ActorDeath(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Drone_Hunter(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

