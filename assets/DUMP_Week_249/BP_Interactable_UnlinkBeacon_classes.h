// BlueprintGeneratedClass BP_Interactable_UnlinkBeacon.BP_Interactable_UnlinkBeacon_C
struct UBP_Interactable_UnlinkBeacon_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetInstigatorBeaconTool(struct AActor* Instigator, struct ABP_SkeletalItem_Beacon_Tool_C*& BeaconTool); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_UnlinkBeacon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

