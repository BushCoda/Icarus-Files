// WidgetBlueprintGeneratedClass UMG_ProspectRewardBlueprint.UMG_ProspectRewardBlueprint_C
struct UUMG_ProspectRewardBlueprint_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Blueprint; 
	struct UImage* Check; 
	struct UImage* Item; 
	struct FItemTemplateRowHandle BlueprintUnlock; 
	bool bUnlocked; 

	void Set Reward(struct FItemTemplateRowHandle Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectRewardBlueprint(int32_t EntryPoint); // (Final|UbergraphFunction)
};

