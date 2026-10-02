// BlueprintGeneratedClass BP_IcarusPointLight.BP_IcarusPointLight_C
struct UBP_IcarusPointLight_C : UPointLightComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool InitWithShadows; 

	void InitLightSettings(); // (BlueprintCallable|BlueprintEvent)
	void ShadowSettingUpdated(bool Value); // (BlueprintCallable|BlueprintEvent)
	void UpdateShadowSetting(bool bNewValue); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusPointLight(int32_t EntryPoint); // (Final|UbergraphFunction)
};

