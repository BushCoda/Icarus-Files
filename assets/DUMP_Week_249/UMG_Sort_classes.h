// WidgetBlueprintGeneratedClass UMG_Sort.UMG_Sort_C
struct UUMG_Sort_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCustomComboBox* ComboBox; 
	struct UUMG_BasicButton_2_C* SortButton; 
	struct UInventory* Inventory; 
	enum class EInventorySortType Sort Type; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Sort_Combobox_K2Node_ComponentBoundEvent_2_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // (BlueprintEvent)
	void BndEvt__UMG_Sort_SortButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Sort(int32_t EntryPoint); // (Final|UbergraphFunction)
};

