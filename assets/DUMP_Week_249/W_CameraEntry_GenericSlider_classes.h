// WidgetBlueprintGeneratedClass W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C
struct UW_CameraEntry_GenericSlider_C : UW_PostProcessEntry_Slider_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float MinValue; 
	float MaxValue; 

	void SetupSliderValues(); // (Public|BlueprintCallable|BlueprintEvent)
	void InitFromSaveGameValue(struct FFPostProcessSaveData Value); // (Public|BlueprintCallable|BlueprintEvent)
	void InitFromDefaultValue(); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_W_CameraEntry_GenericSlider(int32_t EntryPoint); // (Final|UbergraphFunction)
};

