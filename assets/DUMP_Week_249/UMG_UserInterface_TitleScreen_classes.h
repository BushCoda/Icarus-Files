// WidgetBlueprintGeneratedClass UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C
struct UUMG_UserInterface_TitleScreen_C : UUMG_UserInterface_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UScaleBox* ConfirmationScaleBox; 
	struct UBorder* ErrorCodeBox; 
	struct UScaleBox* ErrorCodeScaleBox; 
	struct UScaleBox* LoadingScreenScaleBox; 
	struct UOverlay* Menus; 
	struct USizeBox* TickerSizeBox; 
	struct UUMG_ButtonIcon_C* UMG_ButtonIcon_C_1; 
	struct UUMG_ClientLogging_C* UMG_ClientLogging; 
	struct UUMG_ConfirmationPopup_C* UMG_ConfirmationPopup; 
	struct UUMG_ConnectingOverlay_C* UMG_ConnectingOverlay; 
	struct UUMG_ErrorCodeDisplay_C* UMG_ErrorCodeDisplay; 
	struct UUMG_FeatureLevelIndicator_C* UMG_FeatureLevelIndicator; 
	struct UUMG_LoadingScreen_C* UMG_LoadingScreen; 
	struct UUMG_QueueWindow_C* UMG_QueueWindow; 
	struct UUMG_RevisionNumber_C* UMG_RevisionNumber; 
	struct UUMG_ServerMessageTicker_C* UMG_ServerMessageTicker; 
	struct UUMG_TitleScreen_Background_C* UMG_TitleScreen_Background; 
	struct UUserWidget* CurrentDynamicWidget; 
	struct UOfflineAccountMigrator* OfflineAccountMigratorTest; 

	void GetIcarusLogWindow(struct UUMG_ClientLogging_C*& LogWindow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HideLoadingScreen(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowLoadingScreen(struct FText Optional Message, struct UWidget* OptionalWidget); // (Public|BlueprintCallable|BlueprintEvent)
	void GetConfirmationWindow(struct UUMG_ConfirmationPopup_C*& ConfirmationWidget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateQueue(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateMaintenaceText(); // (Public|BlueprintCallable|BlueprintEvent)
	void HideErrorCode(); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_QueueWindow_K2Node_ComponentBoundEvent_0_Close__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_ButtonIcon_C_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void FocusDynamicWidget(struct UUserWidget* DynamicWidget); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void DisplayIcarusError(struct FErrorCodesEnum OutgoingError, struct FString ErrorInfo); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_UserInterface_TitleScreen(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

