// WidgetBlueprintGeneratedClass UMG_CheatOverlay.UMG_CheatOverlay_C
struct UUMG_CheatOverlay_C : UCheatOverlayBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UInvalidationBox* InvalidationBox_2; 
	struct UOverlay* MainOverlay; 
	struct UUMG_SearchBox_C* SearchBar; 
	struct UUMG_CloseButton_2_C* UMG_CloseButton_2_C_2; 
	struct UScrollBox* WidgetList; 
	struct TSoftObjectPtr<UCheatFunctionBase> TopFunction; 
	struct TArray<struct UUMG_CheatFunctionBorder_C*> CheatWidgets; 
	enum class ECheatContext Context; 
	bool Changed; 
	bool QueuePreview; 
	struct FString PreviewText; 
	struct TArray<struct UCheatFunctionBase*> FilteredWidgets; 

	void SetTopFunction(struct UCheatFunctionBase* NewTop); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSetFilteredWidgets(struct TArray<struct UCheatFunctionBase*>& Array); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddCustomAutomationFunctionImpl(struct FString Name, struct TArray<struct FString>& Instructions, struct FString Description); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddCustomFunctionImpl(struct FString Name, struct TArray<struct FString>& Instructions, struct FString Description); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	enum class ESlateVisibility GetPanelVisibility(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BuildWidget(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetTopFunction(struct UCheatFunctionBase*& Top); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnAddCheat(struct UCheatFunctionBase* Widget); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Toggle(); // (BlueprintCallable|BlueprintEvent)
	void ClearFilteredWidgets(); // (Event|Public|BlueprintEvent)
	void AddFilteredWidget(struct UCheatFunctionBase* Widget); // (BlueprintEvent)
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnSearchBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_1_OnSearchBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_SearchBoxReply__DelegateSignature(struct FKeyEvent& KeyEvent); // (HasOutParms|BlueprintEvent)
	void Setup(enum class ECheatContext Context); // (BlueprintCallable|BlueprintEvent)
	void AddCustomFunction(struct FString Name, struct TArray<struct FString>& ScriptLines, struct FString Description); // (Event|Public|HasOutParms|BlueprintEvent)
	void AddCheat(struct UCheatFunctionBase* Widget); // (Event|Public|BlueprintEvent)
	void AddCustomAutomationFunction(struct FString Name, struct TArray<struct FString>& ScriptLines, struct FString Description); // (Event|Public|HasOutParms|BlueprintEvent)
	void BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(); // (BlueprintEvent)
	void RequestReloadCheats(); // (Event|Public|BlueprintEvent)
	void OnShowChanged(bool bNewShow); // (Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetFilteredWidgets(struct TArray<struct UCheatFunctionBase*>& Widgets); // (Event|Public|HasOutParms|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HidePanelDisplay(); // (BlueprintCallable|BlueprintEvent)
	void OnWaitingChanged(bool bNewWaiting); // (Event|Public|BlueprintEvent)
	void UpdateVisibility(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CheatOverlay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

