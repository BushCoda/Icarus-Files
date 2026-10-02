// BlueprintGeneratedClass BP_Modifier_Fertilize.BP_Modifier_Fertilize_C
struct UBP_Modifier_Fertilize_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool DebugRender; 
	int32_t FoodCost; 
	int32_t WaterCost; 

	void TryFertilizeCreature(bool& Fertilized); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FertilizationCostCheck(bool& CanFertilize); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FertilizationCost(); // (Public|BlueprintCallable|BlueprintEvent)
	void AttemptFertilization(bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void Multicast_PlayEffects(struct FVector ParticleLocation); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Modifier_Fertilize(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

