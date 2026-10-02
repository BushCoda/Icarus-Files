// BlueprintGeneratedClass BP_BedBase.BP_BedBase_C
struct ABP_BedBase_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Scene; 
	struct USceneComponent* SeatAttachPoint; 
	struct UBP_UIProjectionComponent_C* BP_UIProjectionComponent; 
	struct TArray<struct FString> AssignedPlayerUIDs; 
	struct ABP_Seat_Bed_C* SeatRef; 

	struct TArray<struct FString> GetPlayerUIDArray(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EnterBed(struct AIcarusPlayerCharacter* Player); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckTimeSkip(); // (Public|BlueprintCallable|BlueprintEvent)
	void InitSeat(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateInWorldIcon(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector FindExitSpot(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_AssignedPlayerUIDs(); // (BlueprintCallable|BlueprintEvent)
	bool HasPlayerUID(struct FString& PlayerUID); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SanitzeAllBedUIDs(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemovePlayerUID(struct FString& PlayerUID); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddPlayerUID(struct FString& PlayerUID); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetPlayerUIDArray(struct TArray<struct FString>& PlayerUIDArray); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_BedBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

