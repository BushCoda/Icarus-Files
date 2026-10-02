// BlueprintGeneratedClass BP_NPC_Trader.BP_NPC_Trader_C
struct ABP_NPC_Trader_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct USkeletalMeshComponent* Head; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct USceneComponent* ProxyMeshesCrafting; 
	bool bShowMapIcon; 
	struct FString Name; 
	struct FQuestQueriesRowHandle Location; 
	bool bShifting; 
	float CleanupDistance; 

	void CanCleanup(bool& bCanCleanup); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ShiftToLocation(struct FString Name, struct FQuestQueriesRowHandle Location, struct FItemsStaticRowHandle Item, struct AIcarusItem* Class); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Cleanup(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetSpawnInfo(struct FString& Name, struct FQuestQueriesRowHandle& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateMapIcon(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_bShowMapIcon(); // (BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Invite(); // (BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void ToggleMapIcon(); // (BlueprintCallable|BlueprintEvent)
	void PerformCleanup(); // (BlueprintCallable|BlueprintEvent)
	void CleanupCheck(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Trader(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

