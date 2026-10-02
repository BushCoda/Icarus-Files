// BlueprintGeneratedClass BP_IcarusSpotLight.BP_IcarusSpotLight_C
struct UBP_IcarusSpotLight_C : USpotLightComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool InitWithShadows; 

	void UpdateShadowSetting(bool bNewValue); // (BlueprintCallable|BlueprintEvent)
	void InitLightSettings(); // (BlueprintCallable|BlueprintEvent)
	void ShadowSettingUpdated(bool Value); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusSpotLight(int32_t EntryPoint); // (Final|UbergraphFunction)
};

