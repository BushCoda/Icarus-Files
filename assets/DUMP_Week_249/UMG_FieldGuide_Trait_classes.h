// WidgetBlueprintGeneratedClass UMG_FieldGuide_Trait.UMG_FieldGuide_Trait_C
struct UUMG_FieldGuide_Trait_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* BorderColour; 
	struct UTextBlock* Description; 
	struct UImage* Icon; 
	struct FBestiaryTraitsRowHandle Trait; 
	bool Unlocked; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_Trait(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

