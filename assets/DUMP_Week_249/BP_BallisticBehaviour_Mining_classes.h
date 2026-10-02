// BlueprintGeneratedClass BP_BallisticBehaviour_Mining.BP_BallisticBehaviour_Mining_C
struct UBP_BallisticBehaviour_Mining_C : UBP_BallisticBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool HitRock; 
	int32_t NUM_DRILL_HITS; 
	struct FHitResult ProjectedHit; 
	struct FTimerHandle AdditionalDamageTimer; 
	int32_t TotalNumAdditionalDamageHits; 
	int32_t AdditionalDamageHitsPerformed; 
	struct FVector RelativeLocation; 
	struct FVector RelativeNormal; 
	float TimeBetweenDamageEvents; 

	void PlayBloodSplats(struct FHitResult Hit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryApplyAdditionalDamage(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ApplyDamage(struct AActor* HitActor, struct FHitResult& HitInfo); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayHitEffects(struct FHitResult Hit, bool ValidHit); // (Public|BlueprintCallable|BlueprintEvent)
	void OnProjectileFired(struct FVector Impulse, struct FVector InstigatorVelocity, struct FProjectileFireParams AdvancedParameters); // (BlueprintCallable|BlueprintEvent)
	void Multi_PlayBloodSplats(struct FHitResult Hit); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_BallisticBehaviour_Mining(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

