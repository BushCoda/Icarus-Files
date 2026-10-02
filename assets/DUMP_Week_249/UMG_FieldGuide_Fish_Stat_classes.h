// WidgetBlueprintGeneratedClass UMG_FieldGuide_Fish_Stat.UMG_FieldGuide_Fish_Stat_C
struct UUMG_FieldGuide_Fish_Stat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Description; 
	struct UImage* Icon; 
	struct UTextBlock* Unit; 
	struct UTextBlock* Value; 
	struct FText ValueText; 
	struct FText DescriptionText; 
	struct UTexture2D* Texture; 
	struct FText UnitText; 

	void UpdateValue(struct FText Text); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_Fish_Stat(int32_t EntryPoint); // (Final|UbergraphFunction)
};

