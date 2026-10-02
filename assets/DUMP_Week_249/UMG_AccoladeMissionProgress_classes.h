// WidgetBlueprintGeneratedClass UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C
struct UUMG_AccoladeMissionProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Achieved; 
	struct UImage* AccoladeImage; 
	struct UProgressBar* AchievedBar; 
	struct UImage* BadgeGlow; 
	struct UTextBlock* CountText; 
	struct UTextBlock* DisplayName; 
	struct USizeBox* Icon; 
	struct UProgressBar* ProgressBar_46; 
	struct FAccoladesRowHandle Accolade; 
	struct UUMG_AccoladeTooltip_C* Tooltip; 
	bool Complete; 

	void InitAccolade(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Finished_ECE88B094DF845745D1F47869C29E97C(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PlayCompleteAnimation(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_AccoladeMissionProgress(int32_t EntryPoint); // (Final|UbergraphFunction)
};

