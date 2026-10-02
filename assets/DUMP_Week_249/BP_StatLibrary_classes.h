// BlueprintGeneratedClass BP_StatLibrary.BP_StatLibrary_C
struct UBP_StatLibrary_C : UBlueprintFunctionLibrary {

	void DualActorStatCheck(struct AActor* Actor1, struct FStatsEnum Stat1, struct AActor* Actor2, struct FStatsEnum Stat2, struct UObject* __WorldContext, bool& BothActors have Stats); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void HasAllBoolStatCheck(struct AActor* Actor, struct TArray<struct FItemsStaticEnum>& Stat, struct UObject* __WorldContext, bool& HasAllStats); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void HasAnyBoolStatCheck(struct AActor* Actor, struct TArray<struct FStatsEnum>& Stat, struct UObject* __WorldContext, bool& HasSomeStats); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BoolStatCheck(struct AActor* Actor, struct FStatsEnum Stat, struct UObject* __WorldContext, bool& HasStat); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

