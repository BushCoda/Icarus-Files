// BlueprintGeneratedClass BP_SettlementGate.BP_SettlementGate_C
struct ABP_SettlementGate_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* TargetLocation; 
	struct UGenericAITargetComponent* GenericAITarget; 
	struct UNavBlockingStaticMeshComponent* NavBlockingStaticMesh1; 
	struct UNavBlockingStaticMeshComponent* NavBlockingStaticMesh; 
	struct UBoxComponent* TriggerBox; 
	struct USkeletalMeshComponent* SK_GateMesh; 
	struct USceneComponent* DefaultSceneRoot; 
	bool ShouldOpen; 
	struct TArray<struct UPrimitiveComponent*> OverlappedComponents; 
	struct FTimerHandle DelayedCloseTimer; 
	struct UAnimSequence* OpenAnim; 
	struct UAnimSequence* CloseAnim; 
	struct USkeletalMesh* GateMesh; 
	struct USkeletalMesh* DamagedGateMesh; 
	struct UDestructibleMesh* GateDestructibleMesh; 
	bool IsDamaged; 
	char DamagedState; 
	struct FSettlementNPCTask RepairTask; 

	struct TArray<struct FCriticalHitLocation> GetCriticalHitBones(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FAIRelationshipsRowHandle GetRelationshipData(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t GetTargetAlertness(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetTargetLocation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsActorAlive(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsCriticalHitDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsHidden(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsStealthBonusDamageDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool ShouldOverrideTargetNeutrality(struct AActor* TargetActor, enum class ERelationshipType& OutRelationshipType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnRep_DamagedState(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateDoors(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_ShouldOpen(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BP_SettlementGate_TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void BndEvt__BP_SettlementGate_TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void DelayedClose(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnHealthUpdated(struct UActorState* ActorState, float NewHealth); // (BlueprintCallable|BlueprintEvent)
	void OnDeath(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SettlementGate(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

