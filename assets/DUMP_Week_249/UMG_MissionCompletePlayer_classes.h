// WidgetBlueprintGeneratedClass UMG_MissionCompletePlayer.UMG_MissionCompletePlayer_C
struct UUMG_MissionCompletePlayer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* CharacterEntry; 
	struct UTextBlock* CharacterName; 
	struct UImage* HostImage; 
	struct UTextBlock* Level; 
	struct UButton* ThumbsUp; 
	struct FButtonStyle Button_Up_Default; 
	struct FButtonStyle Button_Up_Selected; 
	struct FButtonStyle Button_Down_Default; 
	struct FButtonStyle Button_Down_Selected; 
	bool CanRate; 
	bool Liked; 
	struct FAssociatedMemberInfo Member; 
	bool Host; 

	void ShowRatings(); // (Public|BlueprintCallable|BlueprintEvent)
	void Set Rating Button Style(bool Liked); // (Public|BlueprintCallable|BlueprintEvent)
	void IsSettled(bool Settled); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_MissionCompletePlayer(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

