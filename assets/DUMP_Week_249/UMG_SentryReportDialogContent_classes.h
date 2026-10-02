// WidgetBlueprintGeneratedClass UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C
struct UUMG_SentryReportDialogContent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UMultiLineEditableTextBox* ReportInput; 
	struct UTextBlock* TextBlock_CharacterCount; 
	struct UUMG_ExternalTitleButton_C* UMG_ExternalDiscord; 
	struct UUMG_ExternalTitleButton_C* UMG_ExternaUpvote; 
	struct UUMG_MoodRow_C* UMG_MoodRow; 
	int32_t ReportMaxCharacterLength; 

	void UpdateCharacterLimit(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_SentryReportDialogContent_MultiLineEditableTextBox_130_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_SentryReportDialogContent_ReportInput_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_SentryReportDialogContent_UMG_ExternalDiscord_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SentryReportDialogContent_UMG_ExternaUpvote_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_SentryReportDialogContent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

