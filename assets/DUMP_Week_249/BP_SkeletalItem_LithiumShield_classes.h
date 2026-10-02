// BlueprintGeneratedClass BP_SkeletalItem_LithiumShield.BP_SkeletalItem_LithiumShield_C
struct ABP_SkeletalItem_LithiumShield_C : ABP_SkeletalItem_LithiumBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_LithiumShield_Zap; 
	struct USceneComponent* AudioLocation; 
	struct UFMODEvent* DamagedSound; 
	struct UFMODEvent* BrokenSound; 

	void ShieldBlockedDamage(struct FIcarusDamagePacket& DamagePacket); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ConsumeZapEnergy(struct FHitResult HitResult); // (Public|BlueprintCallable|BlueprintEvent)
	void CacheAudioRefs(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayBrokenAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayDamagedAudio(int32_t DamageAmount, enum class EIcarusDamageType DamageType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EventDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EventBroken(); // (BlueprintCallable|BlueprintEvent)
	void Multi_PlayBrokenEffects(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ConsumeFuel(int32_t Amount); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void MULTI_ZapFX(struct AActor* HitActor); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_LithiumShield(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

