// BlueprintGeneratedClass BP_MainLevelTeleport.BP_MainLevelTeleport_C
struct ABP_MainLevelTeleport_C : ABaseLevelTeleport {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionComponent_C* BP_UIProjectionComponent; 
	bool EntranceVisibility; 

	void SetEntranceVisibility(bool Visible); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_EntranceVisibility(); // (BlueprintCallable|BlueprintEvent)
	void TeleportPlayerNearLocation(struct AIcarusPlayerCharacter* Character, struct FString LeavingUniqueLevelName); // (Event|Public|BlueprintEvent|Const)
	void LocationQueryComplete(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_MainLevelTeleport(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

