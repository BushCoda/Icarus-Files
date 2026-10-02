// WidgetBlueprintGeneratedClass UMG_RecipeElementImage.UMG_RecipeElementImage_C
struct UUMG_RecipeElementImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* CountText; 
	struct UImage* RecipeImage; 
	struct USizeBox* SizeBox_1; 
	struct TSoftObjectPtr<UTexture2D> Image; 
	float Size; 
	int32_t Count; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeElementImage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

