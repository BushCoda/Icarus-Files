// BlueprintGeneratedClass BP_Mission_NPC.BP_Mission_NPC_C
struct ABP_Mission_NPC_C : ABP_Mission_NPC_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t Stability; 
	int32_t DebuffCount; 
	bool Fillable; 
	int32_t TempValue; 
	struct UInventory* ItemInventory; 
	int32_t Index; 
	enum class ENPC_InjuredStates InjuredState; 
	struct FDialoguePoolRowHandle Dialogue_Injured; 
	struct FDialoguePoolRowHandle Dialogue_Healed; 
	bool Interact_Cooldown; 
	bool bCanTriggerMissions; 
	struct TArray<struct FProspectListRowHandle> MissionsToTrigger; 
	struct TArray<struct FTimeLockedMissionInfo> OpenWorldLockedMissions; 
	struct FRowHandle HealedDescription; 
	struct FRowHandle InjuredDescription; 
	bool PlayedHealDialog; 

	void StabilityUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Stability(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAvailableMission(struct FProspectListRowHandle& MissionToDo); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowMissionUI(struct AIcarusPlayerCharacter* Player); // (Public|BlueprintCallable|BlueprintEvent)
	void IsMissionInProgress(bool& bQuestInProgress); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Interact(struct AIcarusPlayerCharacter* Player, bool IsHoldInteract); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Medical_Scan(struct AActor* Object); // (Public|BlueprintCallable|BlueprintEvent)
	void ShouldConsume(struct FItemData Item, struct FConsumableData ConsumableData, bool& Consume); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void FullyHeal(); // (BlueprintCallable|BlueprintEvent)
	void EndInteractCooldown(); // (BlueprintCallable|BlueprintEvent)
	void HurtCharacter(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void HurtApe(); // (BlueprintCallable|BlueprintEvent)
	void CustomHurtCharacter(int32_t Water Level, int32_t Food Level, int32_t Oxygen Level); // (BlueprintCallable|BlueprintEvent)
	void OnNPCDataUpdated(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_NPC(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

