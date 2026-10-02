// BlueprintGeneratedClass BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C
struct UBP_Modifier_TemperatureClear_C : UBP_Modifier_Base_C {
	bool Healing; 
	float HealTime; 
	bool HealingEnabled; 

	void TemperatureUpdated(int32_t NewTemperature); // (Public|BlueprintCallable|BlueprintEvent)
	void TriggerCheck(); // (Public|BlueprintCallable|BlueprintEvent)
	void CanHeal(bool& CanHeal); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

