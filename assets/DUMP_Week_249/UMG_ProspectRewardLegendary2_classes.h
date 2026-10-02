// WidgetBlueprintGeneratedClass UMG_ProspectRewardLegendary2.UMG_ProspectRewardLegendary2_C
struct UUMG_ProspectRewardLegendary2_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Blueprint; 
	struct UImage* Check; 
	struct USizeBox* IconSizeBox; 
	struct UImage* Item; 
	struct FItemTemplateRowHandle LegendaryUnlock; 
	bool bUnlocked; 

	void Set Reward(struct FItemTemplateRowHandle Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectRewardLegendary2(int32_t EntryPoint); // (Final|UbergraphFunction)
};

