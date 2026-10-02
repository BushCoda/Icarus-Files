// BlueprintGeneratedClass Bat_Spawner_Base.Bat_Spawner_Base_C
struct ABat_Spawner_Base_C : AActor {
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* DefaultSceneRoot; 
	bool IsActive; 

	void GetRandomSceneComponent(struct USceneComponent*& RandomComponent, bool& IsValid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

