// WidgetBlueprintGeneratedClass UMG_RadarInterface.UMG_RadarInterface_C
struct UUMG_RadarInterface_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UProgressBar* ProgressBar_Scan; 
	struct UTextBlock* TextBlock_Radar; 

	void UpdateRadarInterfaceText(enum class ERadarInterfaceText Selection); // (BlueprintCallable|BlueprintEvent)
	void UpdateScanProgressBar(float Percent); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_RadarInterface(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

