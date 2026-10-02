// BlueprintGeneratedClass BP_Powered_Faction_Mission_Deployable.BP_Powered_Faction_Mission_Deployable_C
struct ABP_Powered_Faction_Mission_Deployable_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool FullyPowered; 

	void OnRep_FullyPowered(); // (BlueprintCallable|BlueprintEvent)
	void CheckPowered(bool ForceUpdate); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnDeviceFullyPowered(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceNotFullyPowered(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnDeviceResourceChanged(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Powered_Faction_Mission_Deployable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

