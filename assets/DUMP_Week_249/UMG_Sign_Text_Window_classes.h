// WidgetBlueprintGeneratedClass UMG_Sign_Text_Window.UMG_Sign_Text_Window_C
struct UUMG_Sign_Text_Window_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonIcon; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonText; 
	struct UUniformGridPanel* ColorSelectionPanel; 
	struct UUMG_IconTextButton_C* ConfirmButton; 
	struct UImage* divider; 
	struct UEditableTextBox* EditableTextBox1; 
	struct UEditableTextBox* EditableTextBox2; 
	struct UEditableTextBox* EditableTextBox3; 
	struct UEditableTextBox* EditableTextBox4; 
	struct UEditableTextBox* EditableTextBox_IconSearch; 
	struct UHorizontalBox* HorizontalBox_Tabs; 
	struct UListView* ListView_ItemIcons; 
	struct USizeBox* SizeBox_Text1; 
	struct USizeBox* SizeBox_Text2; 
	struct USizeBox* SizeBox_Text3; 
	struct USizeBox* SizeBox_Text4; 
	struct UVerticalBox* VerticalBox_Input; 
	struct UWidgetSwitcher* WidgetSwitcher_SignType; 
	struct FString TempString; 
	struct TArray<int32_t> MaxCharacters; 
	struct TArray<struct FLinearColor> SupportedColors; 
	struct FLinearColor FontColor; 
	struct FMulticastInlineDelegate FontColorChanged; 
	struct ABP_Sign_Base_C* SignReference; 
	struct TArray<struct USignIconListItem*> IconListItems; 

	void ParseText(struct FText& InText, struct FString& Row1, struct FString& Row2, struct FString& Row3, struct FString& Row4); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAppendedText(struct FText& OutText); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateIconList(struct TArray<struct UObject*>& Items); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ProxyUpdateIcon(struct FItemableRowHandle IconRow); // (Public|BlueprintCallable|BlueprintEvent)
	void GenerateItemList(struct TArray<struct FItemableRowHandle>& ValidItemables); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProxyUpdateText(struct FText Text); // (Public|BlueprintCallable|BlueprintEvent)
	void SetFontColor(struct FLinearColor Color); // (Public|BlueprintCallable|BlueprintEvent)
	void OnColorSelected(struct UUMG_ButtonBase_C* Button); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_ButtonText_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_ButtonIcon_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_EditableTextBox_IconSearch_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_EditableTextBox2_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_EditableTextBox2_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_EditableTextBox3_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_EditableTextBox3_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_EditableTextBox4_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_EditableTextBox4_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_UMG_Sign_Text_Window(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FontColorChanged__DelegateSignature(struct FLinearColor NewColor); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

