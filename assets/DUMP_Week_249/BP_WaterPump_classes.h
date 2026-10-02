// BlueprintGeneratedClass BP_WaterPump.BP_WaterPump_C
struct ABP_WaterPump_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_WaterPump; 
	struct UFMODAudioComponent* FMODAudio; 

	void GetWeatherResourceModifierStrengthAndType(int32_t BaseModifierEffectiveness, struct FModifierStatesRowHandle Modifier, int32_t& PowerModifierEffectiveness, int32_t& WaterModifierEffectiveness); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateRunningEffects(bool Running); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void ClearWeatherResourceModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_WaterPump(int32_t EntryPoint); // (Final|UbergraphFunction)
};

