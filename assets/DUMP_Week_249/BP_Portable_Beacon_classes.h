// BlueprintGeneratedClass BP_Portable_Beacon.BP_Portable_Beacon_C
struct ABP_Portable_Beacon_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct FLinearColor BeaconColour; 
	int32_t SelectedIconIndex; 
	struct TArray<struct FLinearColor> SupportedColors; 
	struct TArray<struct TSoftObjectPtr<UTexture2D>> SupportedIcons; 
	struct FMulticastInlineDelegate BeaconStyleUpdated; 
	int32_t VisibleDistance; 
	struct FName BeaconName; 
	struct FName BeaconOwner; 
	bool BeaconOwnerOnlySee; 

	void OnRep_BeaconeOwnerOnlySee(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_BeaconOwner(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_BeaconName(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_VisibleDistance(); // (BlueprintCallable|BlueprintEvent)
	void UpdateBeaconStyle(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_SelectedIconIndex(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_BeaconColour(); // (BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Portable_Beacon(int32_t EntryPoint); // (Final|UbergraphFunction)
	void BeaconStyleUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

