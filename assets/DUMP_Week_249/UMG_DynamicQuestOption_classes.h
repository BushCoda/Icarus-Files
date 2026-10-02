// WidgetBlueprintGeneratedClass UMG_DynamicQuestOption.UMG_DynamicQuestOption_C
struct UUMG_DynamicQuestOption_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Backglow; 
	struct UTextBlock* Description; 
	struct UTextBlock* DifficultyText; 
	struct UImage* Image_115; 
	struct UImage* QuestImage; 
	struct UTextBlock* QuestName; 
	struct UTextBlock* RenText; 
	struct UUMG_BasicButton_2_C* RequestButton; 
	struct UBorder* StartError; 
	struct FDynamicQuestsRowHandle DynamicQuest; 
	struct FMulticastInlineDelegate QuestSelected; 
	enum class EDynamicQuestDifficulty QuestDifficulty; 
	struct FSessionFlagsRowHandle Session Flag; 
	struct FText BuiltText; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_DynamicQuestOption(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void QuestSelected__DelegateSignature(struct FDynamicQuestsRowHandle Quest); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

