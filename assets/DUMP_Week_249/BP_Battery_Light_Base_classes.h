// BlueprintGeneratedClass BP_Battery_Light_Base.BP_Battery_Light_Base_C
struct ABP_Battery_Light_Base_C : ABP_Light_Electric_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UInventory* FuelInventory; 
	struct UFMODEvent* Extinguish; 
	bool bLightIsActive; 
	int32_t FuelConsumedPer5Sec; 

	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Toggle(); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ConsumeFuel(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceTurnedOn(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceTurnedOff(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Battery_Light_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

