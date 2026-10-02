// BlueprintGeneratedClass BP_SkeletalItem_IceMammoth_Sledgehammer1.BP_SkeletalItem_IceMammoth_Sledgehammer1_C
struct ABP_SkeletalItem_IceMammoth_Sledgehammer1_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* AudioLocation; 
	struct UBP_UIProjectionComponent_Building_C* BP_UIProjectionComponent_Building; 
	struct UCapsuleComponent* Capsule; 
	struct UFMODEvent* DamagedSound; 
	struct UFMODEvent* BrokenSound; 
	struct UNiagaraSystem* NiagaraEmitter; 

	void CacheAudioRefs(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayBrokenAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayDamagedAudio(int32_t DamageAmount, enum class EIcarusDamageType DamageType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void Multi_PlayBrokenEffects(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Server_ShowFX(struct FVector Location); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Multi_ShowFX(struct FVector Location); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_IceMammoth_Sledgehammer1(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

