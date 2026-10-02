// BlueprintGeneratedClass BP_Actionable_FireExtinguisher.BP_Actionable_FireExtinguisher_C
struct UBP_Actionable_FireExtinguisher_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 
	struct AActor* OwningActor; 
	struct ABP_SkeletalItem_FireExtinguisher_C* ExtinguisherSKItem; 
	bool DoFire; 
	struct UFMODAudioComponent* FMOD_Audio_Component; 
	struct UFMODEvent* ExtinguishSound; 
	struct TArray<struct UObject*> StoredMontages; 

	void CanFire(bool& CanFire); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ProcessWater(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsFiring(bool& Firing); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ProcessDurability(int32_t DurabilityLoss); // (Public|BlueprintCallable|BlueprintEvent)
	int32_t GetStatAdjustedDurability(int32_t DurabilityLoss); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TickTimer(); // (Public|BlueprintCallable|BlueprintEvent)
	void SphereTrace(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B79C537CC2(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void Multi_SpawnFX(struct FVector ImpactPoint, struct FVector ImpactNormal); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void Stop Fire(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Actionable_FireExtinguisher(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

