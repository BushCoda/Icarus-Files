// BlueprintGeneratedClass BPSessionFunctionLibrary.BPSessionFunctionLibrary_C
struct UBPSessionFunctionLibrary_C : UBlueprintFunctionLibrary {

	bool IsAssociatedWithProspect(struct FProspectInfo& Prospect, bool bIncludeOutpostsAndOpenWorld, struct UObject* __WorldContext, struct FLastProspectHostInfo& Hosted By); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CalculateProspectState(struct FProspectInfo& ProspectInfo, struct AIcarusPlayerController* Target, struct UObject* __WorldContext, enum class E_ProspectState& ProspectState); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Have Joined Prospect(struct FString UserID, struct TArray<struct FAssociatedMemberInfo>& Members, int32_t ChrSlot, struct UObject* __WorldContext, bool& AssignedToProspect, enum class EProspectLocation& Status); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HasSettled(struct AIcarusPlayerController* Target, struct FFProspectServerInfo& FProspectServerInfo, struct UObject* __WorldContext, bool& Settled); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProspectInfoIsValid(struct FFProspectServerInfo Server Prospect Info, bool RequiresSession, struct UObject* __WorldContext, bool& Valid); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

