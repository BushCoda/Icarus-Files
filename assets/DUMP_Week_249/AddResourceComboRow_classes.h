// WidgetBlueprintGeneratedClass AddResourceComboRow.AddResourceComboRow_C
struct UAddResourceComboRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* RowIcon; 
	struct UTextBlock* RowText; 
	struct FText DisplayName; 
	struct FName RowName; 

	bool LessThan(struct UObject* Other); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_AddResourceComboRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

