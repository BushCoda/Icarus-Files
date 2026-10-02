// BlueprintGeneratedClass BP_EdenSetup_FunctionLibrary.BP_EdenSetup_FunctionLibrary_C
struct UBP_EdenSetup_FunctionLibrary_C : UBlueprintFunctionLibrary {

	void CleanupNPC(struct FString Name, struct AQuestManager* Target, struct UObject* __WorldContext); // (Static|Public|BlueprintCallable|BlueprintEvent)
	void CheckNPC(struct AQuestManager* QuestManager, struct FString Name, struct FQuestQueriesRowHandle Location, struct FItemsStaticRowHandle Item, struct AIcarusItem* Class, struct UObject* __WorldContext); // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnEdenDeployable(struct FItemsStaticRowHandle Item, struct FTransform& SpawnTransform, struct AIcarusItem* Override Actor Class, struct UObject* __WorldContext, struct AIcarusItem*& Deployable); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupEden(struct AActor* Context, struct UObject* __WorldContext, bool& Success); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

