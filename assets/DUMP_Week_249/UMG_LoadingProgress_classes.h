// WidgetBlueprintGeneratedClass UMG_LoadingProgress.UMG_LoadingProgress_C
struct UUMG_LoadingProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_LoadingIcon_C* LoadingIcon; 
	struct UTextBlock* Text; 
	struct FText LoadingText; 

	void LoadingStateChanged(bool HideLoadingIcon, struct FText StateText); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_LoadingProgress(int32_t EntryPoint); // (Final|UbergraphFunction)
};

