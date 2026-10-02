// BlueprintGeneratedClass BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C
struct ABP_IcarusRespawnShipSpawn_C : AIcarusActor {
	struct UStaticMeshComponent* SM_DS_Podhopper; 
	struct USceneComponent* TempDPPosition; 
	struct USceneComponent* DefaultSceneRoot; 
	bool Assigned; 
	int32_t Group; 
	struct FString PlayerUID; 
	bool DebugWithoutBackend; 
	float CooldownTime; 
	struct FBiomesRowHandle Biome; 
	struct UStaticMeshComponent* LocatorMesh; 

	void HideEditorLocator(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowEditorLocator(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateBiomeValue(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UnassignSpawn(); // (Public|BlueprintCallable|BlueprintEvent)
	void AssignSpawn(struct FString PlayerID); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

