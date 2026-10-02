// BlueprintGeneratedClass BP_SkeletalItem_Beacon_Tool.BP_SkeletalItem_Beacon_Tool_C
struct ABP_SkeletalItem_Beacon_Tool_C : ABP_SkeletalItem_Scanner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetComponent* ScreenWidget; 
	struct UBP_ActionableBehaviour_Deployable_BeaconTool_C* BeaconActionable; 
	struct AActor* LinkedBeaconActor; 

	void LinkedBeaconDestroyed(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Public|BlueprintCallable|BlueprintEvent)
	void TryRestoreLinkedBeaconActor(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateWidget(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_LinkedBeaconActor(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UWidgetComponent* GetScreenWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void MULTI_PlayLinkAudio(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Beacon_Tool(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

