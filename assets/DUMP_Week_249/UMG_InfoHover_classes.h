// WidgetBlueprintGeneratedClass UMG_InfoHover.UMG_InfoHover_C
struct UUMG_InfoHover_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* HoverButton; 
	struct UUMG_InfoHoverText_C* TextWidget; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetInnerTooltipText(struct FText InText); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_InfoHover(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

