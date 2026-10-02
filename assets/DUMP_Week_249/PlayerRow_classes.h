// WidgetBlueprintGeneratedClass PlayerRow.PlayerRow_C
struct UPlayerRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText PlayerName; 
	struct APlayerState* Player; 

	void AddPlayer(struct APlayerState* Player); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_PlayerRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

