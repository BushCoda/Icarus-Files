// WidgetBlueprintGeneratedClass CF_WeatherSummonWeaterman.CF_WeatherSummonWeaterman_C
struct UCF_WeatherSummonWeaterman_C : UCF_BaseButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TSoftClassPtr<UObject> WeathermanWidgetClass; 

	void OnLoaded_D10C360D44FF2B87793EC4969C2F7A0E(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_WeatherSummonWeaterman(int32_t EntryPoint); // (Final|UbergraphFunction)
};

