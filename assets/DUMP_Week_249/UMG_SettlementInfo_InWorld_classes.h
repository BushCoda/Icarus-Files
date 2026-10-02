// WidgetBlueprintGeneratedClass UMG_SettlementInfo_InWorld.UMG_SettlementInfo_InWorld_C
struct UUMG_SettlementInfo_InWorld_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_105; 
	struct UProgressBar* ProgressBar_Biofuel; 
	struct UProgressBar* ProgressBar_Electricity; 
	struct UProgressBar* ProgressBar_Oxygen; 
	struct UProgressBar* ProgressBar_Water; 
	struct UTextBlock* TextBlock_Damage; 
	struct UTextBlock* TextBlock_Inhabitants; 
	struct UTextBlock* TextBlock_Mood; 
	struct UTextBlock* TextBlock_ProductionState; 
	struct UTextBlock* TextBlock_Storage; 
	struct UTextBlock* TitleText; 
	struct ASettlement* LinkedSettlement; 

	void GetWarningColour(struct FSlateColor& Color); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetBadColour(struct FSlateColor& Color); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetGoodColour(struct FSlateColor& Color); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateStatus(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateResources(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettlementInfo_InWorld(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

