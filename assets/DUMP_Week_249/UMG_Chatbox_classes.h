// WidgetBlueprintGeneratedClass UMG_Chatbox.UMG_Chatbox_C
struct UUMG_Chatbox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* FadeInChat; 
	struct UWidgetAnimation* FadeOutChat; 
	struct USizeBox* HintBox; 
	struct UListView* ListView_36; 
	struct UEditableText* TextBox; 
	bool Initalised; 
	bool Typing; 
	int32_t MaxMessageCharacterLength; 
	struct FTimerHandle FadeOutTimer; 
	enum class ChatBoxFadeState State; 
	float FadeOutDelay; 
	bool UnfocusAfterSendMessage; 
	bool UseUnfocusBehaviour; 

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddServerMessage(struct FString Message); // (Public|BlueprintCallable|BlueprintEvent)
	void ClampMessageLength(struct FText InMessage, struct FText& OutMessage, bool& WasClamped); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FocusEntry(); // (Public|BlueprintCallable|BlueprintEvent)
	void ScrollToBottom(); // (Public|BlueprintCallable|BlueprintEvent)
	void AddLocalMessage(struct FString Message); // (Public|BlueprintCallable|BlueprintEvent)
	void AddChatMessage(struct FIcarusPlayerChatMessage& Message); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Finished_13A3F937400836F18C3C2AA44C299F32(); // (BlueprintCallable|BlueprintEvent)
	void Finished_6346353C4787712A7E87BDAF80B3DCC4(); // (BlueprintCallable|BlueprintEvent)
	void ShowChatTyping(); // (BlueprintCallable|BlueprintEvent)
	void EndTyping(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BeginFadeOutTimer(); // (BlueprintCallable|BlueprintEvent)
	void PlayFadeOutAnim(); // (BlueprintCallable|BlueprintEvent)
	void PlayFadeInAnim(); // (BlueprintCallable|BlueprintEvent)
	void ShowChat(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void CheckChatBoxVisible(); // (BlueprintCallable|BlueprintEvent)
	void CommitText(); // (BlueprintCallable|BlueprintEvent)
	void ClearAndUnfocusTextBox(); // (BlueprintCallable|BlueprintEvent)
	void OnFocusLost(struct FFocusEvent InFocusEvent); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void FocusInputBox(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Chatbox(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

