// BlueprintGeneratedClass MissionFunctionLibrary.MissionFunctionLibrary_C
struct UMissionFunctionLibrary_C : UBlueprintFunctionLibrary {

	void GetHistoryForMission(struct FFactionMissionsRowHandle MissionRow, struct UObject* __WorldContext, enum class EMissionState& Mission State, int32_t& Mission End Time, bool& FoundHistory); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void IsMissionInProgress(struct FFactionMissionsRowHandle Mission, struct UObject* WorldContextObject, struct UObject* __WorldContext, bool& IsValid); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsOperationCompleteOnOpenWorld(struct UObject* WorldContextObject, struct FFactionMissionsRowHandle Operation, struct UObject* __WorldContext, bool& bComplete); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

