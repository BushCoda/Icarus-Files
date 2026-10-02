// WidgetBlueprintGeneratedClass UMG_DeployableRotationIndicator.UMG_DeployableRotationIndicator_C
struct UUMG_DeployableRotationIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Grow; 
	struct UWidgetAnimation* Rotate; 
	struct UImage* Image_AngleSnap; 
	struct UImage* Image_Rotator; 
	float DrawSize; 

	void Show(float DesiredSize, bool ShowAngleSnap); // (BlueprintCallable|BlueprintEvent)
	void Hide(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_DeployableRotationIndicator(int32_t EntryPoint); // (Final|UbergraphFunction)
};

