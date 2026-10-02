// BlueprintGeneratedClass BP_SkeletalItem_BlackWolfRevolver.BP_SkeletalItem_BlackWolfRevolver_C
struct ABP_SkeletalItem_BlackWolfRevolver_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AActor* SpawnedWolf; 
	struct AActor* HitActor; 

	void GetFireTransform(bool& Success, struct FTransform& FireTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_SpawnedWolf(); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void ResetSpawner(); // (BlueprintCallable|BlueprintEvent)
	void OnProjectileFired(struct AIcarusItem* Projectile); // (BlueprintCallable|BlueprintEvent)
	void OnProjectileHit(struct FHitResult Hit); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_BlackWolfRevolver(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

