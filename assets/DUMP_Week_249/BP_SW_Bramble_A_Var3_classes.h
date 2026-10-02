// BlueprintGeneratedClass BP_SW_Bramble_A_Var3.BP_SW_Bramble_A_Var3_C
struct ABP_SW_Bramble_A_Var3_C : ABP_ResourceNodeBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void BndEvt__BP_SW_Bramble_A_Var1_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_SW_Bramble_A_Var3(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

