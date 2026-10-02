// WidgetBlueprintGeneratedClass InstructionRow.InstructionRow_C
struct UInstructionRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_47; 
	struct FText Text; 

	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_InstructionRow(int32_t EntryPoint); // (Final|UbergraphFunction)
};

