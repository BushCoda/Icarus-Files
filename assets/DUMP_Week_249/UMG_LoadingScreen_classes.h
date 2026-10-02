// WidgetBlueprintGeneratedClass UMG_LoadingScreen.UMG_LoadingScreen_C
struct UUMG_LoadingScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetSwitcher* ContentSlot; 
	struct UWidgetSwitcher* ContentSwitcher; 
	struct UTextBlock* Description; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_97; 
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; 

	void SetDescription(struct FText Description); // (BlueprintCallable|BlueprintEvent)
	void SetContentWidget(struct UWidget* Widget); // (BlueprintCallable|BlueprintEvent)
	void SetContentSwitcher(bool ContentShown); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_LoadingScreen(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

