// BlueprintGeneratedClass BP_Dead_Colonist_A.BP_Dead_Colonist_A_C
struct ABP_Dead_Colonist_A_C : ABP_Dead_NPC_Deployable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	bool ShowItemInHand; 

	void OnRep_ShowItemInHand(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnItemRemoved(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Dead_Colonist_A(int32_t EntryPoint); // (Final|UbergraphFunction)
};

