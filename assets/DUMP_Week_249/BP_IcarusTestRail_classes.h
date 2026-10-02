// BlueprintGeneratedClass BP_IcarusTestRail.BP_IcarusTestRail_C
struct ABP_IcarusTestRail_C : AIcarusTestRail {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBillboardComponent* Billboard; 
	struct USceneComponent* AttachPoint; 
	struct ABP_FunctionalTestSeat_C* TestSeat; 
	float SplineDistancePerSecond; 

	void TestComplete(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void BeginTest(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetupTest(struct ACharacter* InTestCharacter); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusTestRail(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

