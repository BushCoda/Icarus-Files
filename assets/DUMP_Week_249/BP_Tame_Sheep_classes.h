// BlueprintGeneratedClass BP_Tame_Sheep.BP_Tame_Sheep_C
struct ABP_Tame_Sheep_C : ABP_Tame_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* HandsTarget; 
	int32_t WoolGrowthPercent; 
	struct FTimerHandle WoolGrowthTimer; 
	int32_t FoodConsumedPerWoolTick; 
	int32_t WaterConsumedPerWoolTick; 
	int32_t WoolGrowthPerTick; 
	bool HasWool; 
	bool NeedsStatUpdate; 
	float TimeBetweenTicks; 
	bool HasBeenSpawned; 

	void UpdateStatValues(); // (Public|BlueprintCallable|BlueprintEvent)
	bool ReplaceSelfWithDeadItem(struct AIcarusActor*& ReplacementActor, struct TArray<struct FIcarusStatReplicated>& CustomStats); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetWoolGrowthPercent(int32_t WoolGrowthPercent); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_HasWool(); // (BlueprintCallable|BlueprintEvent)
	void UpdateWoolCosmetics(); // (Public|BlueprintCallable|BlueprintEvent)
	void TryShearWool(struct AIcarusPlayerCharacter* Shearer, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryGrowWool(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void TimerExec(); // (BlueprintCallable|BlueprintEvent)
	void OnStatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Tame_Sheep(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

