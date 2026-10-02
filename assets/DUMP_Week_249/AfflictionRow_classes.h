// WidgetBlueprintGeneratedClass AfflictionRow.AfflictionRow_C
struct UAfflictionRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* RowText; 
	struct FName RowName; 
	struct FName DisplayName; 
	struct FString RowNameStr; 

	bool LessThan(struct UObject* Other); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Set Row(struct FName RowName); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_AfflictionRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

