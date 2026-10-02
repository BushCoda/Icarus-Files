// BlueprintGeneratedClass BP_Mission_Communication_T2.BP_Mission_Communication_T2_C
struct ABP_Mission_Communication_T2_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UHighlightableComponent* Highlightable; 
	struct UOverlapAudioComponent* OverlapAudio; 
	struct UCameraComponent* Camera; 
	int32_t Seed; 
	struct TArray<struct FDynamicQuestsRowHandle> AvailableQuests; 
	struct TArray<enum class EDynamicQuestDifficulty> Difficulty; 
	bool Initialised; 

	void UpdateDynamicQuests(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateSeed(); // (Public|BlueprintCallable|BlueprintEvent)
	void RollQuest(int32_t Seed, struct FDynamicQuestsRowHandle& Quest); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PopulateQuests(int32_t Seed); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SelectQuest(struct FDynamicQuestsRowHandle Quest); // (BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_Communication_T2(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

