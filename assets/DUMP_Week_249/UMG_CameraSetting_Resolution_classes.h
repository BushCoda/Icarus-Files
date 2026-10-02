// WidgetBlueprintGeneratedClass UMG_CameraSetting_Resolution.UMG_CameraSetting_Resolution_C
struct UUMG_CameraSetting_Resolution_C : UW_CameraEntry_GenericSlider_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	struct FText GetSliderText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdatePostProcess(struct FPostProcessSettings& Settings); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_CameraSetting_Resolution(int32_t EntryPoint); // (Final|UbergraphFunction)
};

