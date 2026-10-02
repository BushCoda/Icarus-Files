// WidgetBlueprintGeneratedClass UMG_DeleteCharacterName.UMG_DeleteCharacterName_C
struct UUMG_DeleteCharacterName_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* EditIcon; 
	struct UEditableTextBox* ProspectNameTextbox; 
	struct FText ConfirmationText; 
	struct FMulticastInlineDelegate OnConfirmTextMatched; 
	struct FMulticastInlineDelegate OnConfirmTextUnmatched; 
	bool WasMatching; 
	struct FMulticastInlineDelegate OnCommitText; 

	void HasEnteredConfirmText(bool& Entered); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_DeleteCharacterName_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_DeleteCharacterName_ProspectNameTextbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void FocusTextField(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_DeleteCharacterName(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnCommitText__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnConfirmTextUnmatched__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnConfirmTextMatched__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

