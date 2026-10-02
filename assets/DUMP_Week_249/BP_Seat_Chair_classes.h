// BlueprintGeneratedClass BP_Seat_Chair.BP_Seat_Chair_C
struct ABP_Seat_Chair_C : ABP_SeatBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool FindExit(struct FVector& OutExitLocation, struct FRotator& OutExitRotation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OwningBedDestroyed(struct AActor* DestroyedActor); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Seat_Chair(int32_t EntryPoint); // (Final|UbergraphFunction)
};

