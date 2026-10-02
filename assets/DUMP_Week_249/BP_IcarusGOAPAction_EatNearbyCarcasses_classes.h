// BlueprintGeneratedClass BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C
struct UBP_IcarusGOAPAction_EatNearbyCarcasses_C : UBP_IcarusGOAPAction_Interact_Base_C {
	struct FTagQueriesRowHandle ValidFoodQuery; 
	int32_t Array Index; 
	struct AFLODTile* Tile; 
	int32_t RecordIndex; 
	int32_t FLODInstanceIndex; 
	struct ABP_GOAP_Corpse_C* TargetCorpse; 
	int32_t MaxEatAmount; 
	bool IsEating; 
	struct FTimerHandle EatTimer; 
	bool DidEmptyCarcass; 

	void GetCorpseMoveLocation(struct AActor* InActor, struct FVector& WorldLocation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void IsPointUnderwater(struct FVector InLocation, bool& IsUnderwater); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	bool ActionReset(bool Interrupted); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool GOAPAnimNotify(struct FString NotifyName, struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void EatFromCorpse(struct AIcarusNPCGOAPController* Controller); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsCorpseValid(struct ABP_GOAP_Corpse_C* Target); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void GetInteractLocation(struct AIcarusNPCGOAPController* ForController, struct FVector& OutLocation, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

