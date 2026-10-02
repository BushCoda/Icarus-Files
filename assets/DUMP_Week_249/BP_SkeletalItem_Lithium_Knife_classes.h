// BlueprintGeneratedClass BP_SkeletalItem_Lithium_Knife.BP_SkeletalItem_Lithium_Knife_C
struct ABP_SkeletalItem_Lithium_Knife_C : ABP_SkeletalItem_LithiumBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_ZapActive; 

	void GetPoweredParticleSystem(struct UNiagaraComponent*& System); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Lithium_Knife(int32_t EntryPoint); // (Final|UbergraphFunction)
};

