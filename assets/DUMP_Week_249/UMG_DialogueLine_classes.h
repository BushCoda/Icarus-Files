// WidgetBlueprintGeneratedClass UMG_DialogueLine.UMG_DialogueLine_C
struct UUMG_DialogueLine_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* FadeInOutHalfStrength; 
	struct UWidgetAnimation* FadeIn; 
	struct UWidgetAnimation* FadeOut; 
	struct UTextBlock* Dialogue; 
	struct UTextBlock* Name; 

	void Start(struct FText Name, struct FText Dialogue, float AudioLength, bool ForceQuickFade); // (BlueprintCallable|BlueprintEvent)
	void ForceFadeOut(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_DialogueLine(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

