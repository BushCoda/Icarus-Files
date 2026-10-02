// WidgetBlueprintGeneratedClass UMG_ResourcePrompt.UMG_ResourcePrompt_C
struct UUMG_ResourcePrompt_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* UpdatedAddedNumber; 
	struct UWidgetAnimation* OutAnim; 
	struct UWidgetAnimation* InAnim; 
	struct UTextBlock* Amount; 
	struct UImage* Icon; 
	struct UBorder* MainBorder; 
	struct UTextBlock* Total; 
	struct UTextBlock* Type; 
	struct FFResourcePromptInfo Info; 
	int32_t TotalCount; 
	struct FMulticastInlineDelegate ResourceRemoved; 
	int32_t AddedCount; 
	struct FTimerHandle RemoveTimer; 
	bool FadingOut; 

	void UpdateAddedCount(int32_t AmountAdded); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTotalCount(int32_t AmountAdded); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Finished_471FD1334CBA6E1EEA9F34B4CB60397C(); // (BlueprintCallable|BlueprintEvent)
	void Timer(); // (BlueprintCallable|BlueprintEvent)
	void RefreshTimer(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ResourcePrompt(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ResourceRemoved__DelegateSignature(struct FName Item); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

