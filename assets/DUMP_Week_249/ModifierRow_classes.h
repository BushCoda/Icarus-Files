// WidgetBlueprintGeneratedClass ModifierRow.ModifierRow_C
struct UModifierRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* RowIcon; 
	struct UTextBlock* RowText; 
	struct FName RowName; 

	bool LessThan(struct UObject* Other); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_ModifierRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

