// BlueprintGeneratedClass BP_Deep_Mining_Drill_Oil.BP_Deep_Mining_Drill_Oil_C
struct ABP_Deep_Mining_Drill_Oil_C : ABP_Drill_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Steel_Barrel; 
	struct UStaticMeshComponent* SM_DEP_DeepMiningDrill_T5; 
	struct UNiagaraComponent* NS_DeepDrilling; 

	void ActiveStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Deep_Mining_Drill_Oil(int32_t EntryPoint); // (Final|UbergraphFunction)
};

