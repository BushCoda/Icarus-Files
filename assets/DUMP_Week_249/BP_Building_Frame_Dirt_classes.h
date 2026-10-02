// BlueprintGeneratedClass BP_Building_Frame_Dirt.BP_Building_Frame_Dirt_C
struct ABP_Building_Frame_Dirt_C : ABP_Building_Frame_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void BuildingStabilityColorCalc(struct FLinearColor& StabilityColor); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Calculate Stability State Implementation(); // (Private|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Building_Frame_Dirt(int32_t EntryPoint); // (Final|UbergraphFunction)
};

