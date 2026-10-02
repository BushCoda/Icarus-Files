// BlueprintGeneratedClass BP_Seat_Bed.BP_Seat_Bed_C
struct ABP_Seat_Bed_C : ABP_SeatBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetAudioSeatType(enum class EAudioSeatType& Type); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool FindExit(struct FVector& OutExitLocation, struct FRotator& OutExitRotation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OwningBedDestroyed(struct AActor* DestroyedActor); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Seat_Bed(int32_t EntryPoint); // (Final|UbergraphFunction)
};

