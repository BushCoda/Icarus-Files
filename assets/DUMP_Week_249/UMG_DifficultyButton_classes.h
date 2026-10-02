// WidgetBlueprintGeneratedClass UMG_DifficultyButton.UMG_DifficultyButton_C
struct UUMG_DifficultyButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button1; 
	struct UImage* ButtonImage; 
	struct UTextBlock* DifficultyName; 
	struct UTextBlock* RewardMultiplier; 
	struct UBorder* SelectedImage; 
	bool Checked; 
	struct FMulticastInlineDelegate Updated; 
	enum class EMissionDifficulty New Difficulty; 

	void SetDifficulty(enum class EMissionDifficulty NewDifficulty, bool HideRewards); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ManuallyCheck(bool Checked); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ManualCheckNoEvents(bool Checked); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_DifficultyButton(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Updated__DelegateSignature(bool Checked, struct UUMG_DifficultyButton_C* Widget); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

