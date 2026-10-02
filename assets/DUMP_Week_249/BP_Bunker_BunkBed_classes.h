// BlueprintGeneratedClass BP_Bunker_BunkBed.BP_Bunker_BunkBed_C
struct ABP_Bunker_BunkBed_C : ABP_BedBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	bool HasSpawnedTopBunk_New; 

	void GetBestBedToMigrateUIDsTo(struct ABP_Bunker_BunkBed_C*& BestBed); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Bunker_BunkBed(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

