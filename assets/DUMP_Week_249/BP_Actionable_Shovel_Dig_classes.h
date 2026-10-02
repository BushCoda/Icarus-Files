// BlueprintGeneratedClass BP_Actionable_Shovel_Dig.BP_Actionable_Shovel_Dig_C
struct UBP_Actionable_Shovel_Dig_C : UBP_ActionableBehaviour_Generic_Melee_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float SnowClearThresholdDegrees; 
	struct FItemData GainedResource; 
	bool bCorrectTrigger; 
	struct TSet<struct UPhysicalMaterial*> DigHolePhysMaterials; 

	void ApplyDirtMoundModifiers(struct AActor* DirtMound, struct UIcarusStatContainer* ShovelStatContainer); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAdditionalStatsForDugHole(struct UIcarusStatContainer* ShovelStats, struct TArray<struct FIcarusStatReplicated>& HoleAdditionalStats); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnActionHitEvent(struct AActor* Invoking Actor, struct UPrimitiveComponent* OverlappedComponent , struct FHitResult& SweepResult, bool& WasHitSuccessful); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Actionable_Shovel_Dig(int32_t EntryPoint); // (Final|UbergraphFunction)
};

