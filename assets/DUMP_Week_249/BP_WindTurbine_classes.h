// BlueprintGeneratedClass BP_WindTurbine.BP_WindTurbine_C
struct ABP_WindTurbine_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UStaticMeshComponent* SM_DEP_WindTurbine_Metal_V2; 
	struct UFMODAudioComponent* FMODAudioTurbine; 
	struct UStaticMeshComponent* CollisionZone; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	bool Powered; 
	bool Sheltered; 
	bool Clear; 
	bool ReducedOutput; 
	int32_t EnergyBoost; 
	bool DeviceToggled; 

	void GetWeatherResourceModifierStrengthAndType(int32_t BaseModifierEffectiveness, struct FModifierStatesRowHandle Modifier, int32_t& PowerModifierEffectiveness, int32_t& WaterModifierEffectiveness); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_DeviceToggled(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_ReducedOutput(); // (BlueprintCallable|BlueprintEvent)
	void ReduceOutput(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ApplyDamage(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePoweredEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void ApplyWeatherResourceModifierFunction(int32_t Percent, struct FModifierStatesRowHandle Modifier); // (Public|BlueprintCallable|BlueprintEvent)
	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_Powered(); // (BlueprintCallable|BlueprintEvent)
	void CheckForPower(bool ForceUpdate); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnHighlighted(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void CheckForPowerHeartbeat(); // (BlueprintCallable|BlueprintEvent)
	void ClearWeatherResourceModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void UpdateVFX(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_WindTurbine(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

