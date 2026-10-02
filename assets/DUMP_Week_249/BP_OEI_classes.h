// BlueprintGeneratedClass BP_OEI.BP_OEI_C
struct ABP_OEI_C : ABP_Exotic_Delivery_Interface_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* PlayerChar; 

	void OnNoLongerInteractedWith(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Delay_Destroy(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_OEI(int32_t EntryPoint); // (Final|UbergraphFunction)
};

