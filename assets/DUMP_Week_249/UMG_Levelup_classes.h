// WidgetBlueprintGeneratedClass UMG_Levelup.UMG_Levelup_C
struct UUMG_Levelup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* LevelUp_TierUnlock; 
	struct UWidgetAnimation* LevelUp_Default; 
	struct UImage* Arrow; 
	struct UImage* Arrow_2; 
	struct UProgressBar* BarBase; 
	struct UImage* Base; 
	struct UTextBlock* BlueprintPointText; 
	struct UImage* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* Corner_5; 
	struct UImage* Corner_6; 
	struct UImage* Corner_7; 
	struct UImage* Corner_8; 
	struct UImage* Glow; 
	struct UImage* Image_276; 
	struct UTextBlock* LevelText; 
	struct UBorder* SoloPoints; 
	struct UTextBlock* SoloPointsText; 
	struct UImage* Star; 
	struct UBorder* TalentPoints; 
	struct UTextBlock* TalentPointText; 
	struct UImage* TierUnlockImage; 
	struct UTextBlock* TierUnlockName; 
	int32_t CurrentLevel; 
	bool InitialExperienceSet; 
	struct UFMODEvent* FMODEvent_LevelUp; 
	struct UFMODEvent* FMODEvent_LevelUpTierUnlock; 
	bool firstExperienceCheck; 

	bool UnlockCheck(int32_t Level, struct FItemableRowHandle& Itemable); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnExperienceUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void Initialise Player(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Levelup(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

