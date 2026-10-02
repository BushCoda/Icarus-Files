// WidgetBlueprintGeneratedClass AccountFlagRow.AccountFlagRow_C
struct UAccountFlagRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText NameText; 
	struct FAccountFlagsRowHandle Flag; 

	void SetAccountFlagRow(struct FAccountFlagsRowHandle AccountFlag); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_AccountFlagRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

