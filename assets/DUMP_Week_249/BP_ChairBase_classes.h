// BlueprintGeneratedClass BP_ChairBase.BP_ChairBase_C
struct ABP_ChairBase_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* SeatAttachPoint_3S_L; 
	struct USceneComponent* SeatAttachPoint_3S_R; 
	struct USceneComponent* SeatAttachPoint_2S_R; 
	struct USceneComponent* SeatAttachPoint_2S_L; 
	struct USceneComponent* SeatAttachPoint; 
	struct TArray<struct FString> AssignedPlayerUIDs; 
	int32_t Seats; 
	struct ABP_Seat_Chair_C* SeatRef; 
	struct ABP_Seat_Chair_C* SeatRef_2S_L; 
	struct ABP_Seat_Chair_C* SeatRef_2S_R; 
	struct ABP_Seat_Chair_C* SeatRef_3S_L; 
	struct ABP_Seat_Chair_C* SeatRef_3S_R; 

	struct TArray<struct FString> GetPlayerUIDArray(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void GetClosestSeatRef(struct AActor* Instigator, struct ABP_Seat_Chair_C*& SeatOut); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckTimeSkip(); // (Public|BlueprintCallable|BlueprintEvent)
	void InitSeat(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector FindExitSpot(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_AssignedPlayerUIDs(); // (BlueprintCallable|BlueprintEvent)
	bool HasPlayerUID(struct FString& PlayerUID); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SanitzeAllBedUIDs(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemovePlayerUID(struct FString& PlayerUID); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddPlayerUID(struct FString& PlayerUID); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetPlayerUIDArray(struct TArray<struct FString>& PlayerUIDArray); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_ChairBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

