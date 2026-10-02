// BlueprintGeneratedClass BP_Deployable_SpawnBlocker_T4.BP_Deployable_SpawnBlocker_T4_C
struct ABP_Deployable_SpawnBlocker_T4_C : ABP_Deployable_SpawnBlocker_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UNiagaraComponent* NS_SoundWave; 

	void CalculateIsDeviceRunning(bool& IsRunning); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateSpawnBlockerEffects(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Deployable_SpawnBlocker_T4(int32_t EntryPoint); // (Final|UbergraphFunction)
};

