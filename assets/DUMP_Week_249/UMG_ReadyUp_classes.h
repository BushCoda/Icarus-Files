// WidgetBlueprintGeneratedClass UMG_ReadyUp.UMG_ReadyUp_C
struct UUMG_ReadyUp_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* CancelButton; 
	struct UWidgetSwitcher* ContentSwitcher; 
	struct UUMG_ToggleButton_MenuHeader_C* ContractTabButton; 
	struct UUMG_ToggleButton_MenuHeader_C* CrewTabButton; 
	struct UUMG_BasicButton_2_C* EvenSplitButton; 
	struct UUMG_BasicButton_2_C* HomeButton; 
	struct UImage* Image_140; 
	struct UBorder* LaunchButtonBorder; 
	struct UUMG_BasicButton_2_C* LaunchDropButton; 
	struct UOverlay* LaunchDropOverlay; 
	struct UUMG_ToggleButton_MenuHeader_C* LoadoutTabButton; 
	struct UOverlay* MainOverlay; 
	struct UBorder* NoContractBorder; 
	struct UTextBlock* NotReadyInstructionText; 
	struct UUMG_BasicButton_2_C* ReadyButton; 
	struct UUMG_Chatbox_C* UMG_Chatbox; 
	struct UUMG_Crew_C* UMG_Crew; 
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; 
	struct UUMG_PartySpace_C* UMG_PartySpace; 
	struct UUMG_SpaceMenu_Cargo_C* UMG_SpaceMenu_Cargo; 
	struct FString ProspectID; 
	struct FFProspectServerInfo Current Contract; 
	bool BoundToBackend; 

	void SetReadyUpButtonStates(bool Enabled); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowError(struct FErrorCodesEnum ErrorCode); // (Public|BlueprintCallable|BlueprintEvent)
	void SetContentState(enum class E_ContractTabs Tab); // (Public|BlueprintCallable|BlueprintEvent)
	void Log(struct FString Description); // (Public|BlueprintCallable|BlueprintEvent)
	void LoadoutUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PartyReadyStateChanged(bool AllPlayersReady); // (Public|BlueprintCallable|BlueprintEvent)
	void Reset(); // (Public|BlueprintCallable|BlueprintEvent)
	void Show Loading Screen(struct FText Loading Screen Text); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__LaunchDropButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__EvenSplitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnOpened(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__ReadyButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Launch(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ContractTabButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__LoadoutTabButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__CrewTabButton_K2Node_ComponentBoundEvent_6_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void ReadyUpResult(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ReadyUp(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

