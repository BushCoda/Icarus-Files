// WidgetBlueprintGeneratedClass UMG_DirectConnectInput.UMG_DirectConnectInput_C
struct UUMG_DirectConnectInput_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* EditIcon; 
	struct UEditableTextBox* IPTextField; 
	struct FMulticastInlineDelegate OnCommitText; 
	struct FString IntitialString; 

	void GetConnectString(struct FString& Pasword); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BndEvt__UMG_PasswordInput_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void FocusText(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_DirectConnectInput(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnCommitText__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

