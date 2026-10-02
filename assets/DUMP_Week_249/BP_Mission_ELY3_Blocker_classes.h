// BlueprintGeneratedClass BP_Mission_ELY3_Blocker.BP_Mission_ELY3_Blocker_C
struct ABP_Mission_ELY3_Blocker_C : ABP_Destructible_Blocker_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void UpdateDestroyed(); // (Public|BlueprintCallable|BlueprintEvent)
	void TriggerDestroy(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_ELY3_Blocker(int32_t EntryPoint); // (Final|UbergraphFunction)
};

