// WidgetBlueprintGeneratedClass UMG_DifficultyModifiers.UMG_DifficultyModifiers_C
struct UUMG_DifficultyModifiers_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Enter; 
	struct UBorder* BackgroundColour; 
	struct UBorder* ContentColour; 
	struct UImage* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* HardcoreIcon; 
	struct UImage* InsuranceIcon; 
	struct URichTextBlock* RewardRichText; 
	struct UTextBlock* Text; 
	struct FLinearColor Colour_Background; 
	struct FLinearColor Colour_Content; 
	struct FText MultiplierText; 
	struct FText BoxText; 
	bool Insured; 
	bool Harcore; 

	void UpdateText(struct FText Reason, struct FText Modifier); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialize(struct FLinearColor BackgroundColour, struct FLinearColor ContentColour, struct FText RewardMultiplier, struct FText MainText, bool Insurance, bool Harcore); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PlayEnterAnimation(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_DifficultyModifiers(int32_t EntryPoint); // (Final|UbergraphFunction)
};

