// WidgetBlueprintGeneratedClass UMG_ResourcePromptDisplay.UMG_ResourcePromptDisplay_C
struct UUMG_ResourcePromptDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* NewAnimation; 
	struct UWidgetAnimation* UpandFade; 
	struct UVerticalBox* ResourceList; 
	struct TArray<struct FFResourcePromptInfo> Queue; 
	struct TArray<struct FFResourcePromptInfo> TempQueue; 
	struct TMap<struct FName, struct UUMG_ResourcePrompt_C*> WidgetMap; 

	void AddResource(struct FItemData Item, int32_t Count); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ResourceRemoved(struct FName Item); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ResourcePromptDisplay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

