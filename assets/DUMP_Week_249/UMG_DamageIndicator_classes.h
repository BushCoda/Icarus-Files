// WidgetBlueprintGeneratedClass UMG_DamageIndicator.UMG_DamageIndicator_C
struct UUMG_DamageIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Blink; 
	struct UWidgetAnimation* FadeOut; 
	struct UImage* Img_ProgressBar; 
	struct UBorder* Rotator; 
	struct AActor* Attacker; 
	bool Deactivate; 

	void Delayed Remove(); // (BlueprintCallable|BlueprintEvent)
	void OnFadeFinished(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void TickIndicatorUpdate(); // (BlueprintCallable|BlueprintEvent)
	void Refresh(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_DamageIndicator(int32_t EntryPoint); // (Final|UbergraphFunction)
};

