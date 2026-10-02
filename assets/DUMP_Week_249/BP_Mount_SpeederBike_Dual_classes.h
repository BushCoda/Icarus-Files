// BlueprintGeneratedClass BP_Mount_SpeederBike_Dual.BP_Mount_SpeederBike_Dual_C
struct ABP_Mount_SpeederBike_Dual_C : ABP_Mount_SpeederBike_C {
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight4; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight3; 
	struct USceneComponent* HandsTarget_Passenger; 

	void CheckForTwoPlayerRidingAccolade(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector GetHandsTargetLocation(struct FVector SeatLocation); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

