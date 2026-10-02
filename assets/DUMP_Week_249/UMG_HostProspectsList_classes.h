// WidgetBlueprintGeneratedClass UMG_HostProspectsList.UMG_HostProspectsList_C
struct UUMG_HostProspectsList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* BackgroundPattern; 
	struct UUMG_SessionFilterCheckbox_C* FilterCheckbox_Locked; 
	struct UUMG_SessionFilterCheckbox_C* FilterCheckbox_MatchingVersion; 
	struct UImage* Image_88; 
	struct UOverlay* LoadingScreen; 
	struct UListView* MultiplayerList; 
	struct UVerticalBox* MultiplayerVertBox; 
	struct UEditableTextBox* ProspectNameTextbox; 
	struct UTextBlock* ServerCountText; 
	struct UUMG_SessionSortButton_C* SortButton_Difficulty; 
	struct UUMG_SessionSortButton_C* SortButton_Duration; 
	struct UUMG_SessionSortButton_C* SortButton_Hardcore; 
	struct UUMG_SessionSortButton_C* SortButton_Host; 
	struct UUMG_SessionSortButton_C* SortButton_Ping; 
	struct UUMG_SessionSortButton_C* SortButton_Prospect; 
	struct UUMG_SessionSortButton_C* SortButton_Slots; 
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; 
	struct UUMG_MultiToggle_C* UMG_MultiToggle; 
	struct UUMG_SpacePlayerInfo_C* UMG_SpacePlayerInfo; 
	struct FMulticastInlineDelegate SelectProspect; 
	enum class ESessionSortType SortType; 
	enum class ESessionSortDirection SortDirection; 
	bool Dedicated; 
	bool ClaimedProspect; 
	struct UUMG_DirectConnectInput_C* DirectConnectInput; 
	struct FString DirectConnectString; 
	int32_t Previous Toggle Index; 
	struct FString CachedDirectConnectString; 
	float ServerListUpdateTime; 
	float ServerListUpdateRate; 

	void UpdateServerList(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFocus(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FText Get_ServerCountText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ClearDirectConnect(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateQueryFilters(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClearList(); // (Public|BlueprintCallable|BlueprintEvent)
	void AddInstanceToList(struct UObject* Instance); // (Public|BlueprintCallable|BlueprintEvent)
	void SessionButtonClicked(struct UUMG_ButtonBase_C* Button); // (Public|BlueprintCallable|BlueprintEvent)
	void SetLoading(bool Loading); // (Public|BlueprintCallable|BlueprintEvent)
	void RefreshList(bool Dedicated); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SortButton(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void FilterCheked(enum class ESessionFilterState Checked, bool WasForced); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_HostProspectsList_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_HostProspectsList_UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature(int32_t PreviousToggleIndex, int32_t CurrentToggleIndex); // (BlueprintEvent)
	void OnFindInstance(struct UIcarusSessionResult* Session); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnSessionsCleared(); // (BlueprintCallable|BlueprintEvent)
	void ConfirmDirectConnect(); // (BlueprintCallable|BlueprintEvent)
	void CancelDirectConnect(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnSessionsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ProspectSelected(struct FFProspectServerInfo ProspectInfo, bool Active); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_HostProspectsList(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SelectProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo, bool Active); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

