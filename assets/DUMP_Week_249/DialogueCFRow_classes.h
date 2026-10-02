// WidgetBlueprintGeneratedClass DialogueCFRow.DialogueCFRow_C
struct UDialogueCFRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* RowText; 
	struct FName RowName; 

	bool LessThan(struct UObject* Other); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_DialogueCFRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

