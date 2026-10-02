// BlueprintGeneratedClass BP_SettlementStarter.BP_SettlementStarter_C
struct ABP_SettlementStarter_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ClaimSettlement(struct FString Name); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SettlementStarter(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

