// BlueprintGeneratedClass BP_Crude_Oil_Power_Generator.BP_Crude_Oil_Power_Generator_C
struct ABP_Crude_Oil_Power_Generator_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_OilPowered_Generator_Steam; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UCameraComponent* Camera; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UInventory* FuelInventory; 

	void GetWeatherResourceModifierStrengthAndType(int32_t BaseModifierEffectiveness, struct FModifierStatesRowHandle Modifier, int32_t& PowerModifierEffectiveness, int32_t& WaterModifierEffectiveness); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnActivateStateChanged(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void ClearWeatherResourceModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Crude_Oil_Power_Generator(int32_t EntryPoint); // (Final|UbergraphFunction)
};

