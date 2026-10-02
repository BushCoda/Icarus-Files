// BlueprintGeneratedClass BP_FLODInfluence_VoxelCracker.BP_FLODInfluence_VoxelCracker_C
struct UBP_FLODInfluence_VoxelCracker_C : UFLODInfluenceComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TMap<struct FFLODInstanceID, struct FVoxelCrackInfo> PendingCrackInfo; 
	struct FVector ProjectedNormal; 
	struct FHitResult ProjectedHit; 
	float Radius; 
	struct FVector Location; 
	struct FVector Impact; 
	struct FTimerHandle TimerHandle; 
	struct ABP_VoxelResource_Base_C* CachedVoxel; 
	struct AActor* CachedAttacker; 
	int32_t CachedWantHits; 
	int32_t DoneHits; 
	struct AActor* CachedWeapon; 
	bool IsPristine; 
	struct TSoftObjectPtr<UFMODEvent> DrillSFX; 
	struct AIcarusItem* IcarusWeapon; 
	struct TSoftObjectPtr<UFMODEvent> TinkSFX; 
	struct FVector InitialImpact; 

	void DealCrackDamage(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePendingCracks(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddPendingCrack(struct FFLODInstanceID InstanceId, struct FVoxelCrackInfo Info); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_44AD4E9A4964E259B0A51B82AC558602(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void UpdateActiveInfluences(); // (Event|Protected|BlueprintEvent)
	void MultiCrackVoxel(struct ABP_VoxelResource_Base_C* Voxel, struct AActor* Attacker, struct AActor* Weapon, struct FHitResult HitInfo, int32_t NumHits); // (BlueprintCallable|BlueprintEvent)
	void Multi_PlayCrumbleFX(struct FVector Loc, struct FVector Normal); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void PlayVoxel_SFX(struct TSoftObjectPtr<UFMODEvent> Event, struct FVector Loc); // (BlueprintCallable|BlueprintEvent)
	void Multi_PlayTinkFX(struct FVector Loc, struct FVector Normal); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void OnVoxelMined(int32_t MinedSpheres); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FLODInfluence_VoxelCracker(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

