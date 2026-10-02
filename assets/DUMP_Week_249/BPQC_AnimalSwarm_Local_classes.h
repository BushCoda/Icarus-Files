// BlueprintGeneratedClass BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C
struct UBPQC_AnimalSwarm_Local_C : UBPQC_AnimalSwarm_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetCreatureToSpawnFromAtmosphere(struct FAtmospheresEnum Atmosphere, struct FAISetupRowHandle& OutCreature); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ModifyTimeByAttraction(float RawValue, float& ModifiedValue); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetFallbackCreature(struct FAISetupRowHandle& CreatureToSpawn); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ModifyAmountByAttraction(int32_t RawValue, int32_t& ModifiedValue); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool CanSpawn(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Select AITo Spawn(struct FAISetupRowHandle& Output); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SpawnCreature(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BPQC_AnimalSwarm_Local(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

