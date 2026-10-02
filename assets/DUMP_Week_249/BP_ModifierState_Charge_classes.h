// BlueprintGeneratedClass BP_ModifierState_Charge.BP_ModifierState_Charge_C
struct UBP_ModifierState_Charge_C : UBP_Modifier_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UInventoryComponent* Inventory; 
	struct TArray<struct FFindItemSlotInfo> FoundBatteryItems; 
	float EnergyPerSecond; 
	float FractionalUnit; 
	struct TArray<struct FFindItemSlotInfo> FilteredBatteryItems; 
	bool CanSeeSun; 
	struct ABP_AtmosphereController_C* AtmosphereController; 
	float DeltaTime; 

	void CheckForSun(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsFocused(int32_t FocusedSlot, struct AIcarusItem*& FocusedItem); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void FindAtmosphereController(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierState_Charge(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

