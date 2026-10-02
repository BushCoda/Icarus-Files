// WidgetBlueprintGeneratedClass UMG_BioLab_PurchaseUpgradeDetails.UMG_BioLab_PurchaseUpgradeDetails_C
struct UUMG_BioLab_PurchaseUpgradeDetails_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_AlterationDescription_C* AlterationDetails; 
	struct UHorizontalBox* CostHBox; 
	struct UTextBlock* NameText; 
	struct UImage* UpgradeIcon; 
	struct FLivingItemUpgradesRowHandle UpgradeToShow; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_PurchaseUpgradeDetails(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

