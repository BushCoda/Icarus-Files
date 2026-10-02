// WidgetBlueprintGeneratedClass UMG_PasswordInput.UMG_PasswordInput_C
struct UUMG_PasswordInput_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* EditIcon; 
	struct UEditableTextBox* PasswordTextField; 
	struct UUMG_PasswordVisibilityControl_C* UMG_PasswordVisibilityControl; 
	struct FMulticastInlineDelegate OnCommitText; 

	void GetPasswordString(struct FString& Pasword); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_PasswordInput_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void FocusText(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void VisibilityControlClicked(bool Selected); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_PasswordInput(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnCommitText__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

