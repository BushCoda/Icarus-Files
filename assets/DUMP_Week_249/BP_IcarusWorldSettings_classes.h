// BlueprintGeneratedClass BP_IcarusWorldSettings.BP_IcarusWorldSettings_C
struct ABP_IcarusWorldSettings_C : AIcarusWorldSettings {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	struct AActor* AtmosphereController; 

	void CreateAssets(); // (BlueprintCallable|BlueprintEvent)
	void CaptureMap(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusWorldSettings(int32_t EntryPoint); // (Final|UbergraphFunction)
};

