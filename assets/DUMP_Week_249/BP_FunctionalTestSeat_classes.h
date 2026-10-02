// BlueprintGeneratedClass BP_FunctionalTestSeat.BP_FunctionalTestSeat_C
struct ABP_FunctionalTestSeat_C : ABP_SeatBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextRenderComponent* TextRender; 
	struct TSoftObjectPtr<AActor> LookAtActor; 

	void AttachPlayer(struct ACharacter* OptionalCharacterOverride); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_FunctionalTestSeat(int32_t EntryPoint); // (Final|UbergraphFunction)
};

