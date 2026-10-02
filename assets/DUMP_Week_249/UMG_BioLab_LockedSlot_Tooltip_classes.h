// WidgetBlueprintGeneratedClass UMG_BioLab_LockedSlot_Tooltip.UMG_BioLab_LockedSlot_Tooltip_C
struct UUMG_BioLab_LockedSlot_Tooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* ChallengeDescription; 
	struct UVerticalBox* ChallengeDetailsVBox; 
	struct UTextBlock* ChallengeProgress; 
	struct UProgressBar* ChallengeProgressBar; 
	struct UTextBlock* ChallengeTitle; 
	struct UTextBlock* UnlockDescription; 
	struct FChallengesRowHandle Challenge; 
	int32_t Progress; 
	bool IsActiveChallenge; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_LockedSlot_Tooltip(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

