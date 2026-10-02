// BlueprintGeneratedClass BP_NPC_Drone.BP_NPC_Drone_C
struct ABP_NPC_Drone_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Active_VFX; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_G; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_R; 
	struct UNiagaraComponent* NS_DroneFlare_L; 
	struct UNiagaraComponent* NS_DroneFlare_R; 
	struct UFMODAudioComponent* DroneFly; 
	struct USceneComponent* AttachedComponents; 
	float TimelineLights_Alpha2_7E005599419271A0900B7798031FD2DA; 
	float TimelineLights_Alpha1_7E005599419271A0900B7798031FD2DA; 
	enum class ETimelineDirection TimelineLights__Direction_7E005599419271A0900B7798031FD2DA; 
	struct UTimelineComponent* TimelineLights; 
	enum class DroneState DroneState; 
	enum class DroneState LastDroneState; 
	struct UMaterialInstanceDynamic* DroneLightMaterial; 
	struct UNiagaraComponent* SmokeFX; 
	struct UFMODEvent* SpotVocal; 
	struct UFMODEvent* DroneSpawn; 
	struct UFMODEvent* DroneDeathSpark; 
	int32_t EmissiveLightSlot; 
	struct FName MinDistToTargetBBKeyName; 
	struct FName MaxDistFromAnchorBBKeyName; 
	struct FName MaxDistToEngageTargetBBKeyName; 
	enum class DroneType DroneType; 
	struct UDestructibleMesh* DeathDestructibleMesh; 

	void DroneStateUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CreateDynMat(); // (Public|BlueprintCallable|BlueprintEvent)
	bool ReplaceSelfWithDeadItem(struct AIcarusActor*& ReplacementActor, struct TArray<struct FIcarusStatReplicated>& CustomStats); // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnLoot(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	enum class EStealthAttackType GetStealthAwarenessLevel(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t GetTargetAlertness(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsCriticalHitDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateDroneLights(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_DroneState(); // (BlueprintCallable|BlueprintEvent)
	void ReplicateBlackboardVariables(); // (Public|BlueprintCallable|BlueprintEvent)
	bool CanKillcam(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TimelineLights__FinishedFunc(); // (BlueprintEvent)
	void TimelineLights__UpdateFunc(); // (BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnRagdollSettled(); // (BlueprintCallable|BlueprintEvent)
	void Multicast_ActorDeath(); // (BlueprintCallable|BlueprintEvent)
	void MULTI_SettleExplosion(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void SetupNavLights(); // (BlueprintCallable|BlueprintEvent)
	void UpdateNavLights(); // (BlueprintCallable|BlueprintEvent)
	void PlaySpotAudio(); // (BlueprintCallable|BlueprintEvent)
	void UpdateAudioOcclusionParam(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Drone(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

