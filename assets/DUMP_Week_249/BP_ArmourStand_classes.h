// BlueprintGeneratedClass BP_ArmourStand.BP_ArmourStand_C
struct ABP_ArmourStand_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool NeedsUpdate; 
	struct TArray<struct UObject*> Stored Classes; 
	struct TArray<struct UObject*> Stored Objects; 
	struct TMap<struct USkeletalMeshComponent*, struct FItemData> CurrentlyEquippedItems; 
	struct TArray<struct UAnimSequence*> AnimationPoses; 
	int32_t CurrentAnimPose; 
	bool SwapBackpack; 

	void ServerSwapArmour(struct AActor* Instigating Character); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAnimPose(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_CurrentAnimPose(); // (BlueprintCallable|BlueprintEvent)
	void UpdateHighlightable(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (Public|BlueprintCallable|BlueprintEvent)
	void GetArmourDataSoftObjects(struct TArray<struct TSoftObjectPtr<USkeletalMesh>>& SoftMeshes, struct TArray<struct TSoftClassPtr<UObject>>& SoftAnimBPs); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateEquippedArmour(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_E27239C84FEE2ECDA1A4DC9FA017A88C(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B7F3250D31(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnItemUpdated(); // (BlueprintCallable|BlueprintEvent)
	void Server_OnItemUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void DeployableTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ArmourStand(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

