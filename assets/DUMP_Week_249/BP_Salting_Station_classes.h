// BlueprintGeneratedClass BP_Salting_Station.BP_Salting_Station_C
struct ABP_Salting_Station_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesCrafting; 
	struct UCameraComponent* Camera; 
	struct UUMG_IcarusLinkedActorPanel_C* WidgetClassToOpen; 
	struct TArray<struct FAlterationsEnum> Alterations; 
	int32_t ItemsPerOneSalt; 
	struct FItemData ItemToSalt; 

	void HasFood(bool& HasFood); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetRequiredSalt(int32_t& RequiredSalt); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SaltFood(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HasEnoughSalt(bool& EnoughSalt); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsSalted(bool& Salted); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Salting_Station(int32_t EntryPoint); // (Final|UbergraphFunction)
};

