// BlueprintGeneratedClass BP_DropshipSeat.BP_DropshipSeat_C
struct ABP_DropshipSeat_C : ABP_SeatBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Exit_4; 
	struct USceneComponent* Exit_3; 
	struct USceneComponent* Exit_2; 
	bool SeatLocked; 
	bool ClientSync; 
	struct FTransform SyncedTransform; 
	bool Shake; 

	void OnRep_SyncedTransform(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	bool EnterSeat(struct AIcarusPlayerCharacter* PlayerCharacter); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ServerInteract(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_DropshipSeat(int32_t EntryPoint); // (Final|UbergraphFunction)
};

