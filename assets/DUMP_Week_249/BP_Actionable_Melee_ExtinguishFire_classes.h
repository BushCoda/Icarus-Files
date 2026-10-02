// BlueprintGeneratedClass BP_Actionable_Melee_ExtinguishFire.BP_Actionable_Melee_ExtinguishFire_C
struct UBP_Actionable_Melee_ExtinguishFire_C : UBP_ActionableBehaviour_Generic_Melee_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODEvent* FMODEvent_Extinguish; 
	float ExtinguishChance; 
	struct FString HitAnimNotifyName; 

	void ProcessDurability(int32_t DuribilityLoss); // (Public|BlueprintCallable|BlueprintEvent)
	void Try Extinguish(struct FVector SpherePos, struct AActor* InvokingActor, int32_t& ExtinguishCount); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnActionHit(struct AActor* InvokingActor, struct UPrimitiveComponent* OverlappedComponent, struct FHitResult& SweepResult, struct UTraitBehaviour* InstigatingBehaviour); // (Event|Public|HasOutParms|BlueprintEvent)
	void MULTI_ExtinguishEffects(struct FVector HitLocation); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Actionable_Melee_ExtinguishFire(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

