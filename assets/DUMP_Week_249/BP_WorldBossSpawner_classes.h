// BlueprintGeneratedClass BP_WorldBossSpawner.BP_WorldBossSpawner_C
struct ABP_WorldBossSpawner_C : AWorldBossSpawner {
	struct USphereComponent* DummySphere; 
	struct USceneComponent* DefaultSceneRoot; 
	bool IsWorldBossActive; 

	void OnRep_IsWorldBossActive(); // (BlueprintCallable|BlueprintEvent)
	void SetWorldBossActive(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
};

