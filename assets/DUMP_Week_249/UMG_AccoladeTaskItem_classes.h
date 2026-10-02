// WidgetBlueprintGeneratedClass UMG_AccoladeTaskItem.UMG_AccoladeTaskItem_C
struct UUMG_AccoladeTaskItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TaskNameText; 
	bool CheckedOff; 
	struct FText Text; 
	struct FLinearColor DefaultColour; 
	struct FLinearColor CheckedOffColour; 
	bool Blue; 
	struct FLinearColor DefaultColourBlue; 
	struct FLinearColor CheckedOffColourBlue; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateState(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_AccoladeTaskItem(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

