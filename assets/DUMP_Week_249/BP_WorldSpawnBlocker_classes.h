// BlueprintGeneratedClass BP_WorldSpawnBlocker.BP_WorldSpawnBlocker_C
struct ABP_WorldSpawnBlocker_C : AActor {
	struct USphereComponent* Debug_Sphere; 
	struct USceneComponent* DefaultSceneRoot; 
	int32_t EffectiveRadius; 

	int32_t GetSpawnAttractorEffectiveRadius(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t GetSpawnBlockerEffectiveRadius(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
};

