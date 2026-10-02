// BlueprintGeneratedClass BP_Workshop_Animal_MED.BP_Workshop_Animal_MED_C
struct ABP_Workshop_Animal_MED_C : ABP_Workshop_Animal_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* CryonOpenVFXLocator; 
	struct UNiagaraComponent* NS_CryogenicCrate_1; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Multicast_OpenCage(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Workshop_Animal_MED(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

