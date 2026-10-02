// BlueprintGeneratedClass BP_Trail_Beacon.BP_Trail_Beacon_C
struct ABP_Trail_Beacon_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct UMaterialInstanceDynamic* EmissiveMat; 
	struct FMulticastInlineDelegate BeaconStyleUpdated; 
	struct AActor* PreviousBeaconActor; 
	int32_t PreviousBeaconActorUID; 

	void UpdatePreviousBeaconActor(struct AActor* PreviousBeaconActor); // (Public|BlueprintCallable|BlueprintEvent)
	void FindPreviousBeaconActor(bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateBeaconStyle(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_SelectedIconIndex(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_BeaconColour(); // (BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Trail_Beacon(int32_t EntryPoint); // (Final|UbergraphFunction)
	void BeaconStyleUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

