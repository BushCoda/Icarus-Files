// WidgetBlueprintGeneratedClass UMG_MeteorShowers.UMG_MeteorShowers_C
struct UUMG_MeteorShowers_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* UIBlink; 
	struct UWidgetAnimation* TextBlink; 
	struct UWidgetAnimation* FadeIn; 
	struct UImage* BottomBorder; 
	struct UHorizontalBox* ContainingBox; 
	struct UOverlay* MeteorHUD; 
	struct UImage* MeteorIconL; 
	struct UTextBlock* MeteorText; 
	struct UImage* TopBorder; 

	void BlinkToShowShowersComing(struct FVector2D Direction); // (Public|BlueprintCallable|BlueprintEvent)
	void Finished_9EB29E1B48915F1A2B2E0ABDEBD3CEB6(); // (BlueprintCallable|BlueprintEvent)
	void Finished_A2518B9541AE4D63ADD0388E70CEAA65(); // (BlueprintCallable|BlueprintEvent)
	void BlinkyTextThenHide(struct FVector2D Direction); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_MeteorShowers(int32_t EntryPoint); // (Final|UbergraphFunction)
};

