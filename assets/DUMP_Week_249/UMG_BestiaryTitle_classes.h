// WidgetBlueprintGeneratedClass UMG_BestiaryTitle.UMG_BestiaryTitle_C
struct UUMG_BestiaryTitle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* BestiaryUnlocks_CornerAnimation; 
	struct UBorder* Border; 
	struct UBorder* Border_2; 
	struct UBorder* Border_3; 
	struct UBorder* Border_80; 
	struct UBorder* Border_168; 
	struct UOverlay* Main; 
	struct UTextBlock* Progress; 
	struct UTextBlock* TitleText; 
	struct FText ProgressTitle; 
	struct FMulticastInlineDelegate HoverUpdated; 
	int32_t Unlock; 
	int32_t Percent; 
	struct FSlateColor FALSE; 
	struct FSlateColor TRUE; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetPercent(int32_t Percent); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_BestiaryTitle(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void HoverUpdated__DelegateSignature(bool Mouse); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

