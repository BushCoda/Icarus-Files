// BlueprintGeneratedClass BP_SettlementNPC.BP_SettlementNPC_C
struct ABP_SettlementNPC_C : ASettlementNPCCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UBP_UIProjectionComponent_SettlementNPC_C* BP_UIProjectionComponent_SettlementNPC; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct USkeletalMeshComponent* SK_Lantern; 
	struct UCameraComponent* Camera; 
	struct UHighlightableComponent* Highlightable; 
	struct UInteractableComponent* Interactable; 
	enum class SettlementNPC_AnimState CurrentAnimState; 
	struct AActor* ViewTargetActor; 
	struct FVector_NetQuantize CurrentTargetLocation; 
	struct FVector_NetQuantize LastKnownTargetLocation; 
	bool IsADS; 
	struct FSettlementNPCRolesRowHandle GuardRole; 
	struct FSettlementNPCTask CachedCurrentTask; 
	bool UseCombatAnims; 

	void GetDisplayName(struct FText& Name); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetDescription(struct FText& Description); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnOwningSettlementReady(struct ASettlement* Settlement); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRecordUpdated(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRep_CurrentAnimState(); // (BlueprintCallable|BlueprintEvent)
	void AnimStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetDefaultAnimState(enum class SettlementNPC_AnimState& OutAnimState); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateLanternVisibility(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorStateIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	bool ShouldOverrideTargetNeutrality(struct AActor* TargetActor, enum class ERelationshipType& OutRelationshipType); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsPointWithinFOV(struct FVector TargetLocation, float DotLimit); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FindNewViewTarget(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FAIRelationshipsRowHandle GetRelationshipData(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Update Blackboard Properties(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetCurrentTaskMontage(struct UAnimMontage*& TaskMontage); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetNextMoveLocation(struct FVector& Out); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool GetOverrideMoveSpeedMappingMultiplier(float& OutMultiplier); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	struct AActor* GetCurrentAnimationTarget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_57A4B8AA43054B1276FD228332D70349(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_1351EC27429EE53A456E08A45806914A(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnAddedToSettlement(struct ASettlement* Settlement); // (Event|Public|BlueprintEvent)
	void OnCurrentTaskUpdated(); // (Event|Public|BlueprintEvent)
	void ReceivePossessed(struct AController* NewController); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnHighlightChanged(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void OnHeldItemUpdated(); // (Event|Public|BlueprintEvent)
	void SetupAI(struct FAISetupRowHandle AISetupData, struct FEpicCreaturesRowHandle EpicCreatureSetup); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnCharacterDamaged(struct FIcarusDamagePacket DamagePacket); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void UpdateLanternAttachment(); // (BlueprintCallable|BlueprintEvent)
	void OnMontageStarted(struct UAnimMontage* Montage); // (BlueprintCallable|BlueprintEvent)
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SettlementNPC(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

