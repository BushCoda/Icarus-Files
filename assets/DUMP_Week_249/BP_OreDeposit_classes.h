// BlueprintGeneratedClass BP_OreDeposit.BP_OreDeposit_C
struct ABP_OreDeposit_C : AResourceDeposit {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct UStaticMeshComponent* StaticMesh; 
	float DrillTimeModifier; 
	bool IsMapIconShown; 
	struct FTimerHandle UpdateTimer; 
	bool NewVar_1; 
	struct ABP_Drill_Base_C* AttachedDrill; 

	void OnRep_IsMapIconShown(); // (BlueprintCallable|BlueprintEvent)
	void IsDepleted(bool& Depleted); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnStatContainerUpdate(); // (BlueprintCallable|BlueprintEvent)
	void UpdateMapIconVisibility(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_OreDeposit(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

