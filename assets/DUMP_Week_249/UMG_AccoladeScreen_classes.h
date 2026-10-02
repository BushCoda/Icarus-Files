// WidgetBlueprintGeneratedClass UMG_AccoladeScreen.UMG_AccoladeScreen_C
struct UUMG_AccoladeScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* AnimateIn; 
	struct UUMG_ToggleButton_MenuHeader_C* AchievementButton; 
	struct UHorizontalBox* Buttons; 
	struct UWidgetSwitcher* CategorySwitcher; 
	struct UUMG_ToggleButton_MenuHeader_C* ConstructionButton; 
	struct UUMG_ToggleButton_MenuHeader_C* GeneralButton; 
	struct UUMG_ToggleButton_MenuHeader_C* HuntingButton; 
	struct UUMG_ToggleButton_MenuHeader_C* MedalsButton; 
	struct UUMG_ToggleButton_MenuHeader_C* SurvivalButton; 
	struct UInventory* Inventory; 
	struct TArray<struct UUMG_AccoladeList_C*> AccoladeLists; 
	bool RequiresUpdate; 

	void InitAccoladeLists(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_AccoladeScreen_MedalsButton_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__UMG_AccoladeScreen_HuntingButton_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__UMG_AccoladeScreen_SurvivalButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__UMG_AccoladeScreen_ConstructionButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void PlayerTrackerInitialized(); // (BlueprintCallable|BlueprintEvent)
	void CustomEvent_1(struct FAccoladesRowHandle Accolade); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_AccoladeScreen_SurvivalButton_1_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__UMG_AccoladeScreen_AchievementButton_K2Node_ComponentBoundEvent_5_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_AccoladeScreen(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

