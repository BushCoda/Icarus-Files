// BlueprintGeneratedClass BP_SW_Mangrove_Sap_02.BP_SW_Mangrove_Sap_02_C
struct ABP_SW_Mangrove_Sap_02_C : ABP_ResourceNodeBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 

	void PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SW_Mangrove_Sap_02(int32_t EntryPoint); // (Final|UbergraphFunction)
};

