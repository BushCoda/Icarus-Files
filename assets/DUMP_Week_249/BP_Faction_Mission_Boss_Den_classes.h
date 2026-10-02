// BlueprintGeneratedClass BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C
struct ABP_Faction_Mission_Boss_Den_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* ExitPoint; 
	struct UArrowComponent* Arrow; 
	struct UIcarusNavigationDirtier* IcarusNavigationDirtier; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UStaticMeshComponent* Den_Plane1; 
	struct UStaticMeshComponent* SM_CF_Wolf_Den_Bones02; 
	struct UDecalComponent* Decal; 
	struct UStaticMeshComponent* SM_CF_Wolf_Den_Rocks; 
	struct UStaticMeshComponent* SM_CF_Wolf_Den_Floor; 
	struct UStaticMeshComponent* SM_CF_Wolf_Den_Bones03; 
	struct UMaterialBillboardComponent* EyeGlowR; 
	struct UMaterialBillboardComponent* EyeGlowL; 
	struct USceneComponent* EyeContainer; 
	struct USceneComponent* EntryPoint; 
	float EmergeTimeline_GlowingEyeOpacity_58999D4B43A8E713CAE6C3BD0B8A2B52; 
	enum class ETimelineDirection EmergeTimeline__Direction_58999D4B43A8E713CAE6C3BD0B8A2B52; 
	struct UTimelineComponent* EmergeTimeline; 
	struct UMaterialInstanceDynamic* EyeGlow; 
	struct FName OpacityParam; 
	struct TArray<struct ABP_Faction_Mission_Boss_Den_C*> SpawnLocations; 
	struct FName HostileTargetLocationKey; 
	float NearbyPlayerRadius; 
	int32_t NumberOfSpawnEventsPerEmerge; 
	float FollowerWolvesPerPlayer; 
	int32_t RemainingSpawns; 
	int32_t TimeBetweenSpawnEvents; 
	float LastFollowerSpawnTime; 
	int32_t MaximumFollowerCountPerPlayer; 
	float MinimumTimeBetweenFollowerSpawns; 
	float FollowerIdleLifetime; 
	int32_t PerEventSpawn; 
	struct FAISetupRowHandle FollowerWolfAISetup; 
	struct TArray<struct AIcarusNPCGOAPCharacter*> Followers; 
	struct UCurveFloat* BossScaling; 
	struct UFMODEvent* PreEmergeFMODEvent; 

	void GetRetreatEntryLocation(struct FVector& WorldLocation, struct FRotator& WorldRotation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetRetreatExitLocation(struct FVector& WorldLocation, struct FRotator& WorldRotation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayPreEmergeSFX(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProjectExitLocationToLandscape(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SynchroniseFollowersArray(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateFollowerLifetimes(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFollowerDeath(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Public|BlueprintCallable|BlueprintEvent)
	void SpawnFollower(struct FTransform SpawnTransform); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void MakeAIAggressive(struct AAIController* Target); // (Public|BlueprintCallable|BlueprintEvent)
	void GetFollowerWolfSpawnCount(int32_t& PerSpawnEvent, int32_t& TotalSpawns); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PickNewFollowerTarget(struct FVector& Origin, struct AActor*& Target); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EmergeTimeline__FinishedFunc(); // (BlueprintEvent)
	void EmergeTimeline__UpdateFunc(); // (BlueprintEvent)
	void EmergeTimeline__SpawnFollower__EventFunc(); // (BlueprintEvent)
	void MULTI_PreEmergeEffects(struct AIcarusNPCGOAPCharacter* EmergingNPC); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void NextSpawn(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Faction_Mission_Boss_Den(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

