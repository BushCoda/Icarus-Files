// WidgetBlueprintGeneratedClass UMG_ChallengeProgressPopup.UMG_ChallengeProgressPopup_C
struct UUMG_ChallengeProgressPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* ChallengeDescription; 
	struct UTextBlock* ChallengeName; 
	struct UProgressBar* ChallengeProgressBar; 
	struct UImage* ItemIcon; 
	struct UTextBlock* ItemName; 
	struct UTextBlock* ProgressValues; 

	void Update(struct FItemData Item, int32_t ProgressedAmount); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ChallengeProgressPopup(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

