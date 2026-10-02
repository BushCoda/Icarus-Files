// WidgetBlueprintGeneratedClass CharacterVoiceRow.CharacterVoiceRow_C
struct UCharacterVoiceRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* RowIcon; 
	struct UTextBlock* RowText; 
	struct FName RowName; 
	struct FName DisplayName; 
	struct FString RowNameStr; 

	bool LessThan(struct UObject* Other); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Set Row(struct FName RowName); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CharacterVoiceRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

