// BlueprintGeneratedClass BP_Deployable_ManualToggle_Base.BP_Deployable_ManualToggle_Base_C
struct ABP_Deployable_ManualToggle_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool bActiveState; 
	bool bWantedState; 
	bool TurnDeviceOffOnBeginPlay; 

	void OnRep_bActiveState(); // (BlueprintCallable|BlueprintEvent)
	void ActiveUpdated(bool bNewActive); // (Public|BlueprintCallable|BlueprintEvent)
	void DeployableTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void TurnOffDevice(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Deployable_ManualToggle_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
};

