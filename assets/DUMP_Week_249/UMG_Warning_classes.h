// WidgetBlueprintGeneratedClass UMG_Warning.UMG_Warning_C
struct UUMG_Warning_C : UUserWidget {
	struct UWidgetAnimation* Blink; 
	struct UImage* Border; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UTextBlock* ReasonWarningText; 
	struct UOverlay* WarningBorder; 

	void SetState(bool Visible); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(struct FText Reason); // (Public|BlueprintCallable|BlueprintEvent)
};

