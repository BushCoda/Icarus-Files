// WidgetBlueprintGeneratedClass UMG_FieldGuide_Fish_Page.UMG_FieldGuide_Fish_Page_C
struct UUMG_FieldGuide_Fish_Page_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* BiomeImage; 
	struct UUMG_FieldGuide_Fish_Stat_C* CaughtStat; 
	struct UImage* CreatureImage; 
	struct UTextBlock* CreatureName; 
	struct UBorder* FishImage; 
	struct UImage* FishRarity; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_59; 
	struct UImage* Image_113; 
	struct UUMG_FieldGuide_Fish_Stat_C* LengthStat; 
	struct UTextBlock* LocationText; 
	struct UUMG_IcarusGrid_C* LureGrid; 
	struct UUMG_FieldGuide_Fish_Stat_C* QualityStat; 
	struct UHorizontalBox* Tags; 
	struct UUMG_BestiaryLore_C* UMG_BestiaryLore; 
	struct UUMG_FieldGuide_Fish_Stat_C* WeightStat; 
	struct FFishDataRowHandle Fish; 
	struct FMulticastInlineDelegate Close; 
	bool Discovered; 
	struct FFishData Fish Data; 
	struct FText Biomes; 
	struct FLinearColor FreshwaterColour; 
	struct FSlateColor Text Brush Colour; 
	struct FLinearColor TerrainColor; 
	struct FLinearColor SaltwaterColour; 

	void OnLoaded_712ED9A845A85CC2E8EB51B9C70343CF(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_Fish_Page(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Close__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

