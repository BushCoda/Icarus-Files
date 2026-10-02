// BlueprintGeneratedClass BP_Metal_Ladder.BP_Metal_Ladder_C
struct ABP_Metal_Ladder_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBoxComponent* Collision; 
	struct UBP_LadderComponent_C* BP_LadderComponent; 

	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Metal_Ladder(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

