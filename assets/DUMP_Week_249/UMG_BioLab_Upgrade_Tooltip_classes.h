// WidgetBlueprintGeneratedClass UMG_BioLab_Upgrade_Tooltip.UMG_BioLab_Upgrade_Tooltip_C
struct UUMG_BioLab_Upgrade_Tooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* CostBox; 
	struct UTextBlock* DescriptionText; 
	struct UUMG_AlterationDescription_C* UMG_AlterationDescription; 
	struct UTextBlock* UpgradeName; 
	struct FLivingItemUpgradesRowHandle Upgrade; 
	bool ShowCost; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_Upgrade_Tooltip(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

