// WidgetBlueprintGeneratedClass UMG_InWorld_FishTooltip.UMG_InWorld_FishTooltip_C
struct UUMG_InWorld_FishTooltip_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Description; 
	struct UProgressBar* Length; 
	struct UTextBlock* LengthText; 
	struct UTextBlock* LengthValuePercent; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Name; 
	struct UImage* Pointer; 
	struct UProgressBar* Quality; 
	struct UTextBlock* QualityValuePercent; 
	struct UProgressBar* Weight; 
	struct UTextBlock* WeightText; 
	struct UTextBlock* WeightValuePercent; 
	struct AActor* Linked Actor; 

	void FindFishData(struct FItemData Fish, struct FFishData& FishData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(struct AActor* LinkedActor); // (BlueprintCallable|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_InWorld_FishTooltip(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

