// BlueprintGeneratedClass BP_Drone_Drop.BP_Drone_Drop_C
struct ABP_Drone_Drop_C : ABP_Overflow_Bag_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_R; 
	struct UBoxComponent* Box; 
	struct UDecayableComponent* Decayable; 
	float Timeline_0_Alpha1_6E2E86E447B64D25D52E8AA96243022A; 
	enum class ETimelineDirection Timeline_0__Direction_6E2E86E447B64D25D52E8AA96243022A; 
	struct UTimelineComponent* Timeline_1; 

	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Drone_Drop(int32_t EntryPoint); // (Final|UbergraphFunction)
};

