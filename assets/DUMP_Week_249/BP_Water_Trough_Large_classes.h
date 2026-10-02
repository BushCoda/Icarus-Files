// BlueprintGeneratedClass BP_Water_Trough_Large.BP_Water_Trough_Large_C
struct ABP_Water_Trough_Large_C : ABP_Water_Trough_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool Filling; 

	bool RequiresFilling(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void AddWater(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Water_Trough_Large(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

