// BlueprintGeneratedClass BP_Tame_Base.BP_Tame_Base_C
struct ABP_Tame_Base_C : ABP_Mount_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusItem* HeldItem; 
	struct FName HeldItemSocket; 

	void OnRep_HeldItem(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void AddHeldItem(struct AIcarusItem* HeldItem); // (BlueprintCallable|BlueprintEvent)
	void RemoveHeldItem(); // (BlueprintCallable|BlueprintEvent)
	void SimulateHeldItem(struct AIcarusItem* CurrentHeldItem); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Tame_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

