// BlueprintGeneratedClass BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C
struct UBP_QuestFuncitonLibrary_C : UBlueprintFunctionLibrary {

	void GetClosestActorOfType(struct AActor* Source, struct AActor* Actor, struct UObject* __WorldContext, struct AActor*& Closest, float& Distance); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsPlayerCharacter(struct UObject* Object, struct UObject* __WorldContext, struct AIcarusPlayerCharacter*& IcarusPlayerCharacter); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetRandomPlayerInRange(struct AActor* Origin, float Distance, struct UObject* __WorldContext, struct AIcarusPlayerCharacter*& PlayerInRange); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Is Player in Range(struct AActor* Origin, float Distance, struct UObject* __WorldContext, bool& PlayerInRange); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TriggerNewDynamicFactionMission(struct FFactionMissionsRowHandle& Mission, struct FProspectListRowHandle& MissionProspect, struct UObject* __WorldContext); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TriggerNewDynamicQuest(struct FDynamicQuestsRowHandle DynamicQuest, enum class EDynamicQuestDifficulty Difficulty, struct UObject* __WorldContext); // (Static|Public|BlueprintCallable|BlueprintEvent)
	int32_t GenerateNewDynamicQuestSeed(struct UObject* __WorldContext); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct TSoftClassPtr<UObject> GetDefaultQuestModifierClass(struct FQuestModifiersMultiRowHandle RowHandle, struct UObject* __WorldContext); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct TSoftClassPtr<UObject> GetQuestModifierClass(struct FQuestModifiersMultiRowHandle RowHandle, struct UObject* __WorldContext); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

