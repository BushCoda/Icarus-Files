// WidgetBlueprintGeneratedClass UMG_AddItemToInventory.UMG_AddItemToInventory_C
struct UUMG_AddItemToInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button; 
	struct UButton* Button_2; 
	struct UButton* Button_3; 
	struct UButton* Button_4; 
	struct UButton* Button_5; 
	struct UButton* Button_35; 
	struct UEditableText* EditableText_1; 
	struct UImage* Image_1; 
	struct UListView* ListView_1; 
	struct UListView* ListView_98; 
	struct USlider* Slider_1; 
	struct UTextBlock* TextBlock; 
	struct UTextBlock* TextBlock_3; 
	struct ABP_IcarusPlayerCharacterSurvival_C* PlayerCharacter; 
	struct FBiomesRowHandle CurrentBiome; 
	struct FText Title; 
	struct FNone* As Teleport Savedata; 
	struct FString Info; 
	struct FString Location; 
	struct UBP_ActionableBehaviour_Show_AddItemUMG_C* SendingAction; 
	struct TArray<struct FSData> ListviewArray; 
	int32_t Count; 
	int32_t SelectedNumber; 
	struct FString SelectedName; 
	struct TArray<struct FString> Presets; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__LoadTeleport_Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__LoadTeleport_ListView_97_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // (BlueprintEvent)
	void BndEvt__LoadTeleport_ListView_97_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // (BlueprintEvent)
	void BndEvt__UMG_AddItemToInventory_EditableText_0_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_AddItemToInventory_Button_34_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_AddItemToInventory_Slider_0_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value); // (BlueprintEvent)
	void BndEvt__UMG_AddItemToInventory_ListView_97_K2Node_ComponentBoundEvent_6_OnListItemScrolledIntoViewDynamic__DelegateSignature(struct UObject* Item, struct UUserWidget* Widget); // (BlueprintEvent)
	void BndEvt__UMG_AddItemToInventory_ListView_97_K2Node_ComponentBoundEvent_9_OnListEntryInitializedDynamic__DelegateSignature(struct UObject* Item, struct UUserWidget* Widget); // (BlueprintEvent)
	void BndEvt__UMG_AddItemToInventory_ListView_97_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsSelected); // (BlueprintEvent)
	void BndEvt__UMG_AddItemToInventory_ListView_0_K2Node_ComponentBoundEvent_8_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // (BlueprintEvent)
	void BndEvt__UMG_AddItemToInventory_Button_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_AddItemToInventory_Button_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_AddItemToInventory_Button_3_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_AddItemToInventory_Button_4_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_AddItemToInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

