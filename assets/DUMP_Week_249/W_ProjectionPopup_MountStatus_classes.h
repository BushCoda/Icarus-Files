// WidgetBlueprintGeneratedClass W_ProjectionPopup_MountStatus.W_ProjectionPopup_MountStatus_C
struct UW_ProjectionPopup_MountStatus_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShowHide; 
	struct UImage* AlertFrame; 
	struct UImage* AlertFrame_2; 
	struct UImage* AlertLines; 
	struct UImage* AlertLines_2; 
	struct UCanvasPanel* CurrentAction; 
	struct UImage* EyeImage; 
	struct UImage* Image_CurrentAction; 
	struct UCanvasPanel* Perception; 
	struct URetainerBox* PerceptionRetainerBox; 
	struct UProgressBar* ProgressBar_Vertical; 
	struct UProgressBar* ProgressBar_Vertical_2; 
	float AlertInterpSpeed; 
	struct UCurveLinearColor* ColourCurve; 
	float HealthInterpSpeed; 
	bool Is Eating or Drinking; 
	enum class EMountAction MountState; 
	struct UTexture2D* LastStateIcon; 

	void UpdateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_ProjectionPopup_MountStatus(int32_t EntryPoint); // (Final|UbergraphFunction)
};

