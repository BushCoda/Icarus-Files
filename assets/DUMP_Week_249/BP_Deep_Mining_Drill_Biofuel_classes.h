// BlueprintGeneratedClass BP_Deep_Mining_Drill_Biofuel.BP_Deep_Mining_Drill_Biofuel_C
struct ABP_Deep_Mining_Drill_Biofuel_C : ABP_Drill_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_BiofuelBurn; 
	struct UNiagaraComponent* NS_DeepDrilling; 
	struct UMaterialInstanceDynamic* Belt; 

	void ActiveStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Deep_Mining_Drill_Biofuel(int32_t EntryPoint); // (Final|UbergraphFunction)
};

