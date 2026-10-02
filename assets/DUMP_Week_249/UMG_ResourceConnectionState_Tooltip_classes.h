// WidgetBlueprintGeneratedClass UMG_ResourceConnectionState_Tooltip.UMG_ResourceConnectionState_Tooltip_C
struct UUMG_ResourceConnectionState_Tooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* MainText; 
	struct UTextBlock* OptionalHeading; 
	struct UTextBlock* OptionalText; 
	struct UTextBlock* PriorityDescription; 
	struct UTextBlock* PriorityHeading; 
	struct FText TooltipTextField; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetText(struct FText ToolTipText); // (BlueprintCallable|BlueprintEvent)
	void SetOptionalReason(struct FOptionalResourceFlowsRowHandle OptionalFlowType); // (BlueprintCallable|BlueprintEvent)
	void SetIsPriority(bool Priority); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ResourceConnectionState_Tooltip(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

