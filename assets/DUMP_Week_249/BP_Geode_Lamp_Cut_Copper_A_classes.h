// BlueprintGeneratedClass BP_Geode_Lamp_Cut_Copper_A.BP_Geode_Lamp_Cut_Copper_A_C
struct ABP_Geode_Lamp_Cut_Copper_A_C : ABP_Light_Free_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UPointLightComponent* PointLight; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Geode_Lamp_Cut_Copper_A(int32_t EntryPoint); // (Final|UbergraphFunction)
};

