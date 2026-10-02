// BlueprintGeneratedClass BP_ActionableBehaviour_Show_AddItemUMG.BP_ActionableBehaviour_Show_AddItemUMG_C
struct UBP_ActionableBehaviour_Show_AddItemUMG_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool SecondTry; 
	bool FoundStorage; 
	struct UInventory* Temp_Inventory; 
	struct UDeployableComponent* Deployable_Comp; 

	void PerformAction(struct AActor* InvokingActor, char OnActionType, char ActionTrigger); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowMenu(struct AActor* InvokingActor); // (BlueprintCallable|BlueprintEvent)
	void AddItemToInventory(struct UInventory* Inventory, struct ABP_IcarusPlayerCharacterSurvival_C* PlayerCharacter, int32_t Type, int32_t Count); // (BlueprintCallable|BlueprintEvent)
	void Server_AddItemToInventory(struct UInventory* Inventory, int32_t Type, int32_t Count); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Show_AddItemUMG(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

