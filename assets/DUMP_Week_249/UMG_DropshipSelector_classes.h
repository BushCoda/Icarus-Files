// WidgetBlueprintGeneratedClass UMG_DropshipSelector.UMG_DropshipSelector_C
struct UUMG_DropshipSelector_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* CreateDropshipButton; 
	struct UComboBoxString* DropshipComboBox; 
	struct UHorizontalBox* DropshipContainer; 
	struct UBorder* Empty; 
	struct UOverlay* EmptyOverlay; 
	struct UImage* SelectedShip; 
	struct FMulticastInlineDelegate DropshipSelected; 
	struct TArray<struct UUMG_DropshipEntry_C*> Toggles; 
	int32_t MaxDropshipCount; 
	struct TArray<struct FString> Dropships; 

	void FindDropshipIndex(struct FString Name, int32_t& DropshipIndex); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DropshipSelectedHandler(int32_t Index); // (Public|BlueprintCallable|BlueprintEvent)
	void Update(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__DropshipComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_DropshipSelector(int32_t EntryPoint); // (Final|UbergraphFunction)
	void DropshipSelected__DelegateSignature(struct FDropship Dropship); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

