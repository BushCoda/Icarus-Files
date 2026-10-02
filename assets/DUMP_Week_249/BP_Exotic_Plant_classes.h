// BlueprintGeneratedClass BP_Exotic_Plant.BP_Exotic_Plant_C
struct ABP_Exotic_Plant_C : ABP_ResourceNodeBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Exotic_Plant(int32_t EntryPoint); // (Final|UbergraphFunction)
};

