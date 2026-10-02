// WidgetBlueprintGeneratedClass UMG_RadiationDisplay_Needle.UMG_RadiationDisplay_Needle_C
struct UUMG_RadiationDisplay_Needle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* LowPulse; 
	struct UImage* Image; 
	struct UImage* Image_46; 
	struct UOverlay* MainOverlay; 
	struct UImage* Pin; 
	float Target; 
	bool LowImage; 
	struct FProgressBarStyle NormalStyle; 
	bool UsePlayerShelter; 
	struct UCurveLinearColor* ColourCurve; 
	float Calculated; 

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RadiationDisplay_Needle(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

