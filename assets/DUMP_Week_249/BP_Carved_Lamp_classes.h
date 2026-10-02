// BlueprintGeneratedClass BP_Carved_Lamp.BP_Carved_Lamp_C
struct ABP_Carved_Lamp_C : ABP_Light_Electric_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Carved_Lamp(int32_t EntryPoint); // (Final|UbergraphFunction)
};

