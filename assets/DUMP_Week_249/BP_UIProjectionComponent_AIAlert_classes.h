// BlueprintGeneratedClass BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C
struct UBP_UIProjectionComponent_AIAlert_C : UBP_UIProjectionComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t AlertValue; 
	bool PerceptionEnabled; 
	float HealthValue; 
	float AlertTickRate; 
	bool CanSeeHealthBar; 
	int32_t Level; 
	struct FAICreatureTypeRowHandle CreatureType; 
	struct FEpicCreaturesRowHandle EpicCreature; 
	float NamePlateRenderRange; 
	float EpicNamePlateRenderRangeExtend; 
	float AlertRenderRange; 
	bool IsRecentlyPerceiving Any Player; 
	struct FText EpicCreatureName; 
	bool IsEatingOrDrinking; 
	struct AIcarusNPCGOAPCharacter* CharacterRef; 
	int32_t CustomBehaviourState; 
	bool StatBasedVisibilityRange; 
	bool OverrideVisibility; 
	float ArmorValue; 
	bool bHasArmor; 

	void OnRep_ArmorValue(); // (BlueprintCallable|BlueprintEvent)
	void UpdateArmorState(struct UActorState* ActorState, float NewArmor); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_CustomBehaviourState(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_IsEatingOrDrinking(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_EpicCreatureName(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_NamePlateRenderRange(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_IsRecentlyPerceiving Any Player(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_EpicCreature(); // (BlueprintCallable|BlueprintEvent)
	void UpdateLevel(int32_t Level); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_PerceptionEnabled(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Level(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_CreatureType(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_HealthValue(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_AlertValue(); // (BlueprintCallable|BlueprintEvent)
	void UpdateHealthState(struct UActorState* ActorState, float NewHealth); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePerceptionState(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnStatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void AlertTick(); // (BlueprintCallable|BlueprintEvent)
	void AnyPlayerRecentlyWasPerceived(); // (BlueprintCallable|BlueprintEvent)
	void ForceProjectionUpdate(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_UIProjectionComponent_AIAlert(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

