// BlueprintGeneratedClass BP_SkeletalItem_Shield.BP_SkeletalItem_Shield_C
struct ABP_SkeletalItem_Shield_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* AudioLocation; 
	struct UFMODEvent* DamagedSound; 
	struct UFMODEvent* BrokenSound; 

	void CacheAudioRefs(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayBrokenAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayDamagedAudio(int32_t DamageAmount, enum class EIcarusDamageType DamageType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void EventDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EventBroken(); // (BlueprintCallable|BlueprintEvent)
	void Multi_PlayBrokenEffects(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Shield(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

