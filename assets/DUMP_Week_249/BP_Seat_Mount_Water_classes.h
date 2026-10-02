// BlueprintGeneratedClass BP_Seat_Mount_Water.BP_Seat_Mount_Water_C
struct ABP_Seat_Mount_Water_C : ABP_Seat_Mount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* RefillSphereLocation; 
	struct USphereComponent* WaterRadius; 
	int32_t UnitsConsumed; 

	struct UInventory* GetSaddleInventory(bool& IsValid); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitialiseWithSaddleData(struct FSaddlesRowHandle SaddleData); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Seat_Mount_Water(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

