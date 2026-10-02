// WidgetBlueprintGeneratedClass UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C
struct UUMG_ProgressBarAnimatedLayer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UProgressBar* ProgressBar; 
	float Target; 
	float Interp Speed; 

	void GetCurrent(float& Current); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsAnimating(bool& Animating); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetTarget(float Target, float Speed); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProgressBarAnimatedLayer(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

