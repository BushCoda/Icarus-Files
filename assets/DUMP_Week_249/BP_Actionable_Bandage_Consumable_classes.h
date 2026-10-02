// BlueprintGeneratedClass BP_Actionable_Bandage_Consumable.BP_Actionable_Bandage_Consumable_C
struct UBP_Actionable_Bandage_Consumable_C : UBP_ActionableBehaviour_Hold_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct UObject*> StoredMontages; 

	void EndHold(bool Success); // (Public|BlueprintCallable|BlueprintEvent)
	bool CanHold(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnLoaded_2B8B2B624CE5F97DAE6892B748390F73(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void CompleteHold(bool Success); // (BlueprintCallable|BlueprintEvent)
	void Server_StartHold(struct AActor* ActorStatedHoldOn); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Multicast_Bandage(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Multicast_StopBandaging(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Actionable_Bandage_Consumable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

