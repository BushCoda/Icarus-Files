// BlueprintGeneratedClass BP_SW_Bog_Flower_01.BP_SW_Bog_Flower_01_C
struct ABP_SW_Bog_Flower_01_C : ABP_ResourceNodeBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 

	void PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SW_Bog_Flower_01(int32_t EntryPoint); // (Final|UbergraphFunction)
};

