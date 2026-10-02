// BlueprintGeneratedClass BP_Actionable_Shovel.BP_Actionable_Shovel_C
struct UBP_Actionable_Shovel_C : UBP_ActionableBehaviour_Generic_Melee_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float SnowClearThresholdDegrees; 
	struct TSet<struct UPhysicalMaterial*> DigHolePhysMaterials; 
	struct TMap<struct UPhysicalMaterial*, struct FItemRewardsRowHandle> CollectResourceMap; 
	bool bCorrectTrigger; 

	void GetResourceRewardRow(struct UPhysicalMaterial*& GroundMaterial, bool& Found, struct FItemRewardsRowHandle& RewardRow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CollectResource(struct FItemRewardsRowHandle RowHandle); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnActionHitEvent(struct AActor* Invoking Actor, struct UPrimitiveComponent* OverlappedComponent , struct FHitResult& SweepResult, bool& WasHitSuccessful); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Actionable_Shovel(int32_t EntryPoint); // (Final|UbergraphFunction)
};

