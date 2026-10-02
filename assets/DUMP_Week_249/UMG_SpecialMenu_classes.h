// WidgetBlueprintGeneratedClass UMG_SpecialMenu.UMG_SpecialMenu_C
struct UUMG_SpecialMenu_C : UUMG_UserInterface_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button; 
	struct UButton* Button_1; 
	struct UButton* Button_2; 
	struct UButton* Button_3; 
	struct UButton* Button_4; 
	struct UButton* Button_5; 
	struct UButton* Button_6; 
	struct UButton* Button_7; 
	struct UButton* Button_8; 
	struct UButton* Button_9; 
	struct UButton* Button_10; 
	struct UButton* Button_11; 
	struct UButton* Button_12; 
	struct UButton* Button_13; 
	struct UButton* Button_14; 
	struct UButton* Button_15; 
	struct UButton* Button_16; 
	struct UButton* Button_17; 
	struct UButton* Button_18; 
	struct UButton* Button_19; 
	struct UButton* Button_20; 
	struct UButton* Button_21; 
	struct UButton* Button_22; 
	struct UButton* Button_23; 
	struct UButton* Button_24; 
	struct UButton* Button_25; 
	struct UButton* Button_26; 
	struct UButton* Button_27; 
	struct UButton* Button_28; 
	struct UButton* Button_29; 
	struct UButton* Button_30; 
	struct UButton* Button_31; 
	struct UButton* Button_32; 
	struct UButton* Button_33; 
	struct UButton* Button_34; 
	struct UButton* Button_35; 
	struct UButton* Button_36; 
	struct UButton* Button_37; 
	struct UButton* Button_38; 
	struct UButton* Button_39; 
	struct UButton* Button_40; 
	struct UButton* Button_41; 
	struct UButton* Button_42; 
	struct UButton* Button_43; 
	struct UButton* Button_44; 
	struct UButton* Button_45; 
	struct UButton* Button_46; 
	struct UComboBoxString* ComboBoxString; 
	struct UComboBoxString* ComboBoxString_514; 
	struct UImage* Image_1; 
	struct UListView* ListView_98; 
	struct USlider* Slider; 
	struct USlider* Slider_1; 
	struct USlider* Slider_138; 
	struct UTextBlock* TextBlock_7; 
	struct UTextBlock* TextBlock_8; 
	struct UTextBlock* TextBlock_21; 
	struct UTextBlock* TextBlock_48; 
	struct UTextBlock* TextBlock_51; 
	struct UTextBlock* TextBlock_54; 
	struct UTextBlock* TextBlock_55; 
	struct UTextBlock* TextBlock_68; 
	struct UTextBlock* TextBlock_108; 
	struct UTextBlock* TextBlock_247; 
	struct UTextBlock* TextBlock_607; 
	struct FString JumpHeight; 
	struct FString CurrentWalkSpeed; 
	struct FString MaxWalkSpeed; 
	float Distance; 
	struct FString DistanceString; 
	struct FText pausecaption; 
	float Intensity; 
	struct FString Biome; 
	struct FString CBiome; 
	struct FBiomesRowHandle Biome_Current; 
	int32_t Modifier; 
	struct FModifier MyModifier; 
	struct UBP_Actionable_Behaviour_ShowUMG_C* SendingAction; 
	struct ABP_IcarusPlayerCharacterSurvival_C* PlayerCharacter; 
	float FireDistance; 
	struct ABP_ProcessorBase_C* ClosestFire; 
	bool FireFound; 
	struct FString Notification; 
	struct ABP_OEI_C* ExoticTransportDevice; 
	struct UObject* __WorldContext; 
	struct FString DisplayInfo; 
	struct FOreDepositRowHandle OreType; 
	int32_t TitaniumCount; 
	struct FString DeepOre; 
	struct FString SelectedName; 
	struct TArray<struct ABP_Mount_Base_C*> Mounts; 
	int32_t ListType; 
	int32_t SelectedNumber; 
	struct FString SelectedLevel; 
	struct FString SelectedOwner; 
	bool MountFound; 
	struct AActor* SelectedActor; 
	struct FOreDepositEnum NewVar_1; 
	struct FString DeepOreSelected; 
	bool DeepOreValid; 
	enum class ESlateVisibility OreVisible; 
	float InteractDistance; 

	enum class ESlateVisibility GetVisibility_1(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetText_1(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_ComboBoxString_513_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_5_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Slider_137_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature(float Value); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_8_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_9_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_11_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_10_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_4_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_6_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_14_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_15_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_16_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_17_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_18_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_13_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_19_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_20_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_21_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_22_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_23_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_24_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_25_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_26_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_27_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_28_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_29_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_30_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_31_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_32_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_33_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_34_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_35_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_ListView_97_K2Node_ComponentBoundEvent_39_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_36_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_37_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void Close(); // (BlueprintCallable|BlueprintEvent)
	void CheckForItem(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_38_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_ComboBoxString_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_39_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_40_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_41_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Slider_0_K2Node_ComponentBoundEvent_47_OnFloatValueChangedEvent__DelegateSignature(float Value); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Slider_K2Node_ComponentBoundEvent_48_OnFloatValueChangedEvent__DelegateSignature(float Value); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_42_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_43_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_44_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_45_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_SpecialMenu(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

