// BlueprintGeneratedClass BP_DeployableFunctionLibrary.BP_DeployableFunctionLibrary_C
struct UBP_DeployableFunctionLibrary_C : UBlueprintFunctionLibrary {

	void GetDeployableVariationClass(struct FItemData Item, int32_t Variation, struct UObject* __WorldContext, struct AIcarusItem*& AsIcarus Item); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SpawnDeployablePersistent(struct FItemData Item, struct FString Name, struct FQuestQueriesRowHandle Location, struct UObject* __WorldContext, struct ABP_DeployableBase_C*& Deployable); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnDeployable(struct FItemData Item, struct FTransform Transform, struct UObject* __WorldContext, struct ABP_DeployableBase_C*& Deployable); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

