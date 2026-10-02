// BlueprintGeneratedClass BP_SlugManager.BP_SlugManager_C
struct ABP_SlugManager_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionComponent_AIAlert_C* BP_UIProjectionComponent_AIAlert; 
	struct USceneComponent* DefaultSceneRoot; 
	struct TArray<struct AIcarusNPCGOAPCharacter*> CurrentSlugs; 
	float AddedPercentages; 
	float AveragePercentage; 
	struct FTimerHandle HideHealthTimer; 
	bool SpawnerMapIconActive; 
	struct AWorldBossSpawner* SlugBossSpawner; 
	struct FMulticastInlineDelegate SlugDeath; 

	void SetSpawnerMapIconActive(); // (Public|BlueprintCallable|BlueprintEvent)
	void Get Closest World Boss Spawner(struct AWorldBossSpawner*& AsWorld Boss Spawner); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsFinalSlug(bool& IsFinal); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void AddSlug(struct ABP_IcarusNPCGOAPCharacter_C* Slug); // (BlueprintCallable|BlueprintEvent)
	void TickHealth(); // (BlueprintCallable|BlueprintEvent)
	void ShowHealthBar(); // (BlueprintCallable|BlueprintEvent)
	void Remove Slug(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void SetWorldSpawnerIcon(); // (BlueprintCallable|BlueprintEvent)
	void CheckForFinalSlug(struct AActor* Slug); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SlugManager(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SlugDeath__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

