// BlueprintGeneratedClass BP_BuildBlocker_PromptForRecovery.BP_BuildBlocker_PromptForRecovery_C
struct ABP_BuildBlocker_PromptForRecovery_C : ABP_Eden_BuildBlocker_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct AIcarusPlayerCharacter*> PlayersPrompted; 
	int32_t DeployableCount; 
	int32_t BuildingCount; 
	bool HasCollected; 
	struct FTimerHandle PlayerCheckerTimer; 

	void CanPickupActor(struct AActor* Actor, bool& CanPickup); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckPlayersInside(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void MULTI_DisplayRecoveryPrompt(struct AIcarusPlayerCharacter*& Player, int32_t DeployableCount, int32_t BuildingCount); // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PopupConfirm(); // (BlueprintCallable|BlueprintEvent)
	void PopupCancel(); // (BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_BuildBlocker_PromptForRecovery(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

