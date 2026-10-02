// BlueprintGeneratedClass BP_Wheat.BP_Wheat_C
struct ABP_Wheat_C : ABP_ResourceNodeBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Wheat(int32_t EntryPoint); // (Final|UbergraphFunction)
};

