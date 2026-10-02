// WidgetBlueprintGeneratedClass UMG_MissionUnlockReward.UMG_MissionUnlockReward_C
struct UUMG_MissionUnlockReward_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* divider; 
	struct UImage* Frame; 
	struct UBorder* UnlockBorder; 
	struct UImage* UnlockIcon; 
	struct UTextBlock* UnlockText; 
	struct FLinearColor Content Colour; 
	struct FLinearColor Background Colour; 
	struct FText Text; 

	void UpdateText(struct FText Text); // (Public|BlueprintCallable|BlueprintEvent)
	void Style Box(struct FLinearColor ContentColour, struct FLinearColor BackgroundColour); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_MissionUnlockReward(int32_t EntryPoint); // (Final|UbergraphFunction)
};

