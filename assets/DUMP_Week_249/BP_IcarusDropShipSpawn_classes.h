// BlueprintGeneratedClass BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C
struct ABP_IcarusDropShipSpawn_C : AIcarusRocketSpawnBase {
	struct UStaticMeshComponent* SM_DS_Podhopper; 
	struct USceneComponent* TempDPPosition; 
	struct USceneComponent* DefaultSceneRoot; 
	int32_t Group; 
	struct UStaticMeshComponent* LocatorMesh; 

	void HideEditorLocator(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowEditorLocator(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	int32_t GetGroupIndex(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
};

