// WidgetBlueprintGeneratedClass UMG_GameMessage.UMG_GameMessage_C
struct UUMG_GameMessage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Blink; 
	struct UBorder* BGFill; 
	struct UImage* Border; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UTextBlock* MessageText; 
	struct UOverlay* WarningBorder; 
	bool IsError; 
	struct FText Message; 
	float MessageLifespan; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void RemoveMessage(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_GameMessage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

