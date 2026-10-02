// WidgetBlueprintGeneratedClass UMG_SettlementLedger_ListEntry.UMG_SettlementLedger_ListEntry_C
struct UUMG_SettlementLedger_ListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UComboBoxText* AssignedNPC; 
	struct UImage* Image; 
	struct UImage* Image_76; 
	struct UImage* Image_BuildingIcon; 
	struct UTextBlock* TextBlock_BuildingName; 
	struct UTextBlock* TextBlock_Status; 
	struct ASettlementBuilding* LinkedBuilding; 
	bool IsAutomaticAssignment; 
	bool IsAssigned; 
	struct ASettlement* LinkedSettlement; 

	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void BndEvt__UMG_SettlementLedger_ListEntry_AssignedNPC_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FText SelectedItem, enum class ESelectInfo SelectionType); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_SettlementLedger_ListEntry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

