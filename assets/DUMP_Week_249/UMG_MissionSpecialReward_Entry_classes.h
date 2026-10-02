// WidgetBlueprintGeneratedClass UMG_MissionSpecialReward_Entry.UMG_MissionSpecialReward_Entry_C
struct UUMG_MissionSpecialReward_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* B1; 
	struct UImage* B2; 
	struct UImage* B3; 
	struct UImage* B4; 
	struct UTextBlock* Description; 
	struct UImage* Icon; 
	struct UTextBlock* Title; 
	struct UBorder* UnlockOverlay; 
	struct FText TitleText; 
	struct FText RewardText; 
	struct TSoftObjectPtr<UTexture2D> RewardIcon; 
	enum class ETalentProspectButtonState Colour; 

	void Setup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_MissionSpecialReward_Entry(int32_t EntryPoint); // (Final|UbergraphFunction)
};

