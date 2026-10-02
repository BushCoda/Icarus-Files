// BlueprintGeneratedClass BP_Snare_Trap_Base.BP_Snare_Trap_Base_C
struct ABP_Snare_Trap_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Scene_HitVFX; 
	struct UBoxComponent* OverlapBox; 
	bool TrapOpen; 
	int32_t DamageAmount; 

	void ApplyModifiers(struct AActor* Defender); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_TrapOpen(); // (BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void DoDamage(int32_t DamageAmount, struct AActor* Defender); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void DealDamageToSelf(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Snare_Trap_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

