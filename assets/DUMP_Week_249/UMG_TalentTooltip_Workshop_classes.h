// WidgetBlueprintGeneratedClass UMG_TalentTooltip_Workshop.UMG_TalentTooltip_Workshop_C
struct UUMG_TalentTooltip_Workshop_C : UTalentTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ExpandProgress_Instant; 
	struct UWidgetAnimation* ExpandProgress; 
	struct UImage* Background; 
	struct UTextBlock* BlueprintFlavour; 
	struct UTextBlock* Click; 
	struct UImage* Corner; 
	struct UOverlay* CraftedAtOverlay; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UVerticalBox* DynamicContent; 
	struct UProgressBar* ExpandProgressBar; 
	struct UImage* Gradient; 
	struct UHorizontalBox* HorizontalBox_Variations; 
	struct UImage* Image_53; 
	struct UImage* InputIcon; 
	struct UTextBlock* ItemDescription; 
	struct UTextBlock* MetaName; 
	struct UVerticalBox* ReplicationCost; 
	struct UVerticalBox* RequiredMatsSection; 
	struct UVerticalBox* ResearchCost; 
	struct UImage* Shape; 
	struct UImage* TopGlow; 
	struct UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon; 
	struct UUMG_ItemStats_C* UMG_ItemStats; 
	struct UImage* UnlockImage; 
	struct UTextBlock* VariationText; 

	void AddDynamicContent(struct UUserWidget* WidgetToAdd); // (Public|BlueprintCallable|BlueprintEvent)
	void ClearDynamicContent(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Item Stats(struct FItemData Item1); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnTalentSet(); // (Event|Public|BlueprintEvent)
	void PlayHoverAnimation(); // (BlueprintCallable|BlueprintEvent)
	void CustomEvent_1(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentTooltip_Workshop(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

