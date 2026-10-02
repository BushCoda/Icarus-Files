// WidgetBlueprintGeneratedClass UMG_BestiaryLore.UMG_BestiaryLore_C
struct UUMG_BestiaryLore_C : UUserWidget {
	struct UWidgetAnimation* Lore3Animation; 
	struct UWidgetAnimation* Lore2Animation; 
	struct UWidgetAnimation* Lore1Animation; 
	struct UUMG_FieldGuide_Bestiary_Lock_C* Lock_Lore1; 
	struct UUMG_FieldGuide_Bestiary_Lock_C* Lock_Lore2; 
	struct UUMG_FieldGuide_Bestiary_Lock_C* Lock_Lore3; 
	struct UTextBlock* Lore1; 
	struct UTextBlock* Lore2; 
	struct UTextBlock* Lore3; 

	void Highlight(bool Lore1, bool Lore2, bool Lore3); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(struct FText LoreText1, struct FText LoreText2, struct FText LoreText3, bool Lock1, bool Lock2, bool Lock3); // (Public|BlueprintCallable|BlueprintEvent)
};

