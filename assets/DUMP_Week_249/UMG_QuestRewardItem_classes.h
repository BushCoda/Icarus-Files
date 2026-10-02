// WidgetBlueprintGeneratedClass UMG_QuestRewardItem.UMG_QuestRewardItem_C
struct UUMG_QuestRewardItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* AmountText; 
	struct UImage* BonusIcon; 
	struct UImage* ItemImage; 
	struct UBorder* Selectable; 
	struct FRewardItemEntry ItemReward; 
	float Multipler; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_QuestRewardItem(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

