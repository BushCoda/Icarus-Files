// BlueprintGeneratedClass BP_TPS_Communication_Tower.BP_TPS_Communication_Tower_C
struct ABP_TPS_Communication_Tower_C : ABP_Deployable_ManualToggle_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 

	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_TPS_Communication_Tower(int32_t EntryPoint); // (Final|UbergraphFunction)
};

