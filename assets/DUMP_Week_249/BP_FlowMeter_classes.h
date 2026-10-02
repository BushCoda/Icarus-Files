// BlueprintGeneratedClass BP_FlowMeter.BP_FlowMeter_C
struct ABP_FlowMeter_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetComponent* Widget_Summary; 
	struct FIcarusResourcesEnum NetworkType; 
	struct FBPS_FlowMeterData MeterData; 
	int32_t NetworkTypeInt; 

	void GetTargetNetworkType(struct FIcarusResourcesEnum& TargetNetworkType); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindNextValidNetworkType(struct FIcarusResourcesEnum Current, struct FIcarusResourcesEnum& Out); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_MeterData(); // (BlueprintCallable|BlueprintEvent)
	void FindValidNetworkType(struct FIcarusResourcesEnum& ResourceOut); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void ServerUpdate(); // (BlueprintCallable|BlueprintEvent)
	void UpdateWidget(); // (BlueprintCallable|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_FlowMeter(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

