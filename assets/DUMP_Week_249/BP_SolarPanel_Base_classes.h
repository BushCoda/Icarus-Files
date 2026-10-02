// BlueprintGeneratedClass BP_SolarPanel_Base.BP_SolarPanel_Base_C
struct ABP_SolarPanel_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_AtmosphereController_C* AtmosphereController; 
	bool CanSeeSun; 
	struct FVector SunTraceOffset; 

	void GetWeatherResourceModifierStrengthAndType(int32_t BaseModifierEffectiveness, struct FModifierStatesRowHandle Modifier, int32_t& PowerModifierEffectiveness, int32_t& WaterModifierEffectiveness); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateEnergyFlow(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_CanSeeSun(); // (BlueprintCallable|BlueprintEvent)
	void UpdatePoweredEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckForSun(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ClearWeatherResourceModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SolarPanel_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

