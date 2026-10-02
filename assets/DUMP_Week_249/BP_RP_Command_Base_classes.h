// BlueprintGeneratedClass BP_RP_Command_Base.BP_RP_Command_Base_C
struct ABP_RP_Command_Base_C : ABP_PartBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UChildActorComponent* Container; 
	struct UChildActorComponent* Seat; 
	struct UChildActorComponent* Bottom; 
	struct UChildActorComponent* Top; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	bool Open; 

	void ReadyCheck(bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetSeat(struct ABP_DropshipSeat_C*& Dropship Seat); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TriggerEvent(struct FDropShipActionsEnum Actions); // (Public|BlueprintCallable|BlueprintEvent)
	void ExitSeat(bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void EnterSeat(struct AIcarusPlayerCharacterSurvival* Character, bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetMesh(struct UPrimitiveComponent*& Mesh); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_RP_Command_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
};

