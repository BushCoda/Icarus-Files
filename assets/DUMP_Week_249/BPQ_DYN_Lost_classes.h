// BlueprintGeneratedClass BPQ_DYN_Lost.BPQ_DYN_Lost_C
struct ABPQ_DYN_Lost_C : ABPQ_DYN_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBPQC_DynamicLocation_C* BPQC_BaseLocation; 
	struct UGenericAITargetComponent* GenericAITarget; 
	struct UBPQC_LocationQueries_C* BPQC_LocationQueries; 
	struct FEpicCreaturesRowHandle EpicCreature; 
	struct FAISetupRowHandle Creature; 
	struct FItemsStaticRowHandle Row; 

	void GetItems(struct TArray<struct FItemData>& Array); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool Check(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RunFlow(); // (Event|Public|BlueprintEvent)
	void ReceiveQuestEnded(bool bWasAbandoned); // (Event|Public|BlueprintEvent)
	void PostLocationFound(bool FirstTime); // (BlueprintCallable|BlueprintEvent)
	void SpawningComplete(); // (BlueprintCallable|BlueprintEvent)
	void RunOperations(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnBaseLocationFound(struct FVector Location); // (BlueprintCallable|BlueprintEvent)
	void SetupSpawner(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BPQ_DYN_Lost(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

