// WidgetBlueprintGeneratedClass UMG_ItemTooltip_LivingItem.UMG_ItemTooltip_LivingItem_C
struct UUMG_ItemTooltip_LivingItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* ChallengeDescription; 
	struct UVerticalBox* ChallengeDetailsVBox; 
	struct UTextBlock* ChallengeProgress; 
	struct UProgressBar* ChallengeProgressBar; 
	struct UTextBlock* ChallengeTitle; 
	struct UUMG_BioLab_UpgradeSlotMain_C* Slot1; 
	struct UUMG_BioLab_UpgradeSlotMain_C* Slot2; 
	struct UUMG_BioLab_UpgradeSlotMain_C* Slot3; 
	struct UUMG_BioLab_UpgradeSlotMain_C* Slot4; 
	struct UUMG_BioLab_UpgradeSlotMain_C* Slot5; 
	struct FItemData ItemData; 
	struct TArray<struct UUMG_BioLab_UpgradeSlotMain_C*> Slots; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void TrySetupChallengeInfo(struct FLivingItemSlotState& LivingItemSlotState); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ItemTooltip_LivingItem(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

