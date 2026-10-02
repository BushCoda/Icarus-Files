// BlueprintGeneratedClass BP_Flammable_Building.BP_Flammable_Building_C
struct UBP_Flammable_Building_C : UBP_Flammable_Actor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_Building_Base_C* OwnerBuilding; 
	struct UModifierStateComponent* ModiferStateComponent; 

	struct FBoxSphereBounds GetLocalBounds(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool CanPropagate(enum class EFlammablePropagationType PropagationType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void TeardownCosmetics(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupCosmetics(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void SetupBuildingCosmetics(); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceState_Combusting_Tick(struct UFlammableInstance* Instance, struct UFlammableState* State, float DeltaSeconds); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceState_Combusting_Enter(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Flammable_Building(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

