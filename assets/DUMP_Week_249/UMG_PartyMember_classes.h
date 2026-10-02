// WidgetBlueprintGeneratedClass UMG_PartyMember.UMG_PartyMember_C
struct UUMG_PartyMember_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* CharacterName; 
	struct UBorder* ColourBorder; 
	struct UOverlay* HealthBar; 
	struct UBorder* HostIcon; 
	struct UTextBlock* HostText; 
	struct UImage* Image_223; 
	struct UUMG_BasicButton_2_C* KickButton; 
	struct UTextBlock* LevelText; 
	struct UTextBlock* Ping; 
	struct UTextBlock* PingText; 
	struct UProgressBar* PlayerHealth; 
	struct UBorder* PlayerIcon; 
	struct UTextBlock* PlayerName; 
	struct USizeBox* SizeBox_30; 
	struct UBorder* SleepingIcon; 
	struct APlayerState* PlayerState; 
	bool InSleepScreen; 

	enum class ESlateVisibility Get_KickButton_Visibility(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetLevelText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FSlateBrush GetBackground_1(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetPlayerHealth(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FSlateColor GetColorAndOpacity(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetPing(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetHost(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetPlayerName(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetCharacterName(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void StatsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_PartyMember_KickButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void KickPlayer(); // (BlueprintCallable|BlueprintEvent)
	void DoNothing(); // (BlueprintCallable|BlueprintEvent)
	void UpdateSleepParty(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_PartyMember(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

