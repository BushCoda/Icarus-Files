// BlueprintGeneratedClass BP_SkeletalItem_Recurve_Bow.BP_SkeletalItem_Recurve_Bow_C
struct ABP_SkeletalItem_Recurve_Bow_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UChildActorComponent* Arrow; 
	struct UFMODEvent* DamagedAudio; 

	void GetFireTransform(bool& Success, struct FTransform& FireTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayDamagedAudio(int32_t DamageAmount, enum class EIcarusDamageType DamageType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Recurve_Bow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

