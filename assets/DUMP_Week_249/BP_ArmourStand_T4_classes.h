// BlueprintGeneratedClass BP_ArmourStand_T4.BP_ArmourStand_T4_C
struct ABP_ArmourStand_T4_C : ABP_ArmourStand_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* ArmorCase; 
	bool CaseOpen; 
	bool IsInteracting; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void ToggleOpen(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ArmourStand_T4(int32_t EntryPoint); // (Final|UbergraphFunction)
};

