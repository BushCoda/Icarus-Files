// WidgetBlueprintGeneratedClass UMG_PlayerListEntry.UMG_PlayerListEntry_C
struct UUMG_PlayerListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* CharacterEntry; 
	struct UTextBlock* CharacterLevelText; 
	struct UTextBlock* CharacterName; 
	struct UTextBlock* CharacterStatus; 
	struct UImage* Image_96; 
	struct UHorizontalBox* RatingButtons; 
	struct UBorder* SettledState; 
	struct UButton* ThumbsDown; 
	struct UButton* ThumbsUp; 
	struct UBorder* UnSettledState; 
	struct FButtonStyle Button_Up_Default; 
	struct FButtonStyle Button_Up_Selected; 
	struct FButtonStyle Button_Down_Default; 
	struct FButtonStyle Button_Down_Selected; 
	bool CanRate; 
	struct FString PendingLoadPlayerId; 

	void ShowRatings(); // (Public|BlueprintCallable|BlueprintEvent)
	void Set Rating Button Style(bool Liked); // (Public|BlueprintCallable|BlueprintEvent)
	void IsSettled(bool Settled); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFailure_F261DD19407D95F6521E3A9C07B7A8CF(struct FGetIcarusPlayerPersonaResult Result); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_F261DD19407D95F6521E3A9C07B7A8CF(struct FGetIcarusPlayerPersonaResult Result); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ThumbsDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ShowPlayerDetails(struct FAssociatedMemberInfo MemberInfo); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_PlayerListEntry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

