// BlueprintGeneratedClass BP_Destructible_Blocker.BP_Destructible_Blocker_C
struct ABP_Destructible_Blocker_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UArrowComponent* NiagaraSystemTransform; 
	struct UDestructibleComponent* Destructible; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	bool bDestroyed; 
	bool bCanDamage; 
	int32_t ModifierUID; 
	bool bInitialised; 
	struct FFactionMissionsRowHandle BoundMission; 
	bool bReloaded; 
	struct UFMODEvent* BlockerDestroyedAudio; 
	struct UNiagaraSystem* NiagaraSystem; 

	void UpdateDestroyed(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateBlockerState(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateModifier(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_bCanDamage(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_bDestroyed(); // (BlueprintCallable|BlueprintEvent)
	void OnActorDestroyed(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Destructible_Blocker(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

