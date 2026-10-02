// BlueprintGeneratedClass BP_ActionableBehaviour_Apply_To_Target.BP_ActionableBehaviour_Apply_To_Target_C
struct UBP_ActionableBehaviour_Apply_To_Target_C : UBP_ActionableBehaviour_Hold_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* Owning_Player; 
	struct AIcarusCharacter* TargetCharacter; 
	bool HasTargetCharacter; 
	struct TArray<struct UObject*> StoredMontages; 
	struct FTagQueriesRowHandle VehicleTagQuery; 

	void EndHold(bool Success); // (Public|BlueprintCallable|BlueprintEvent)
	bool IsHolding(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B70C6DB20F(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void CompleteHold(bool Success); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Play Animation Montage Healing(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Server_StartHold(struct AActor* ActorStatedHoldOn); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Stop Bandaging(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void SetTargetCharacter(struct AIcarusCharacter* Character, bool HasTargetCharacter); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Apply_To_Target(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

