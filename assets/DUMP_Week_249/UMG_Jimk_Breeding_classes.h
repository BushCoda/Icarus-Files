// WidgetBlueprintGeneratedClass UMG_Jimk_Breeding.UMG_Jimk_Breeding_C
struct UUMG_Jimk_Breeding_C : UUMG_UserInterface_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button; 
	struct UButton* Button_2; 
	struct UButton* Button_3; 
	struct UButton* Button_5; 
	struct UButton* Button_6; 
	struct UButton* Button_7; 
	struct UButton* Button_8; 
	struct UButton* Button_9; 
	struct UButton* Button_10; 
	struct UButton* Button_11; 
	struct UButton* Button_13; 
	struct UButton* Button_14; 
	struct UButton* Button_15; 
	struct UButton* Button_36; 
	struct UButton* Button_37; 
	struct UButton* Button_38; 
	struct UButton* Button_47; 
	struct UButton* Button_48; 
	struct UButton* Button_49; 
	struct UButton* Button_50; 
	struct UComboBoxString* ComboBoxString_1; 
	struct UEditableText* Father; 
	struct UImage* Image_1; 
	struct UListView* ListView_98; 
	struct UEditableText* Mother; 
	struct USlider* Slider_2; 
	struct UTextBlock* TextBlock_4; 
	struct UTextBlock* TextBlock_6; 
	struct UTextBlock* TextBlock_7; 
	struct UTextBlock* TextBlock_48; 
	struct UTextBlock* TextBlock_51; 
	struct UTextBlock* TextBlock_54; 
	struct UTextBlock* TextBlock_55; 
	struct UTextBlock* TextBlock_108; 
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
	struct UBP_Actionable_Behaviour_ShowUMG_Breeding_C* SendingAction; 
	struct ABP_IcarusPlayerCharacterSurvival_C* PlayerCharacter; 
	struct FString Notification; 
	struct UObject* __WorldContext; 
	struct FString DisplayInfo; 
	struct FString SelectedName; 
	struct TArray<struct ABP_Mount_Base_C*> Mounts; 
	int32_t ListType; 
	int32_t SelectedNumber; 
	struct FString SelectedLevel; 
	struct FString SelectedOwner; 
	bool MountFound; 
	struct AActor* SelectedActor; 
	struct FOreDepositEnum NewVar_1; 
	float NewSkinIndex; 
	struct FSData_Breeding SData Breeding; 
	int32_t Array Element Value; 
	int32_t MountHealth; 
	int32_t MountStamina; 
	int32_t MountWeightCap; 
	int32_t MountMovement; 
	int32_t MountPhysicalResist; 
	int32_t MountTempResist; 
	int32_t MountSlots; 
	int32_t MountLineage; 
	int32_t MountSkin; 
	struct FText MountSex; 
	struct UUdata_Breeding_C* NewVar_2; 
	struct UUdata_Breeding_C* NewVar_3; 
	int32_t MountTotal; 
	struct ABP_Mount_Base_C* Mount1; 
	struct ABP_Mount_Base_C* Mount2; 
	struct FText Mount1Name; 
	struct FText Mount2Name; 
	struct FString MotherName; 
	struct FString FatherName; 
	struct FGeneticLineagesRowHandle Lineage; 
	struct UGeneticsComponent* CustomGenetics; 
	struct TArray<struct FCreatureGenetics> GenticsArray; 
	struct ABP_Mount_Base_C* DummyMount; 
	struct UGeneticsComponent* Maxxed_Genetics; 
	struct TArray<struct FCreatureGenetics> CreatureGeneticsMax; 
	bool MountCreated; 
	struct TArray<struct FCreatureGenetics> NewVar_4; 
	struct FGeneticValuesRowHandle Genetic Value; 

	enum class ESlateVisibility GetVisibility_1(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetText_1(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_4_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_35_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_ListView_97_K2Node_ComponentBoundEvent_39_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_36_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_37_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void Close(); // (BlueprintCallable|BlueprintEvent)
	void CheckForItem(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_46_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_47_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Slider_1_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature(float Value); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_48_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpecialMenu_Button_49_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Button_5_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Button_6_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Button_7_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Button_9_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Button_10_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Button_12_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Button_13_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Mother_K2Node_ComponentBoundEvent_14_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Father_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_Jimk_Breeding_Button_14_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Jimk_Breeding(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

