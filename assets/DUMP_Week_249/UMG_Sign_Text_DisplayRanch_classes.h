// WidgetBlueprintGeneratedClass UMG_Sign_Text_DisplayRanch.UMG_Sign_Text_DisplayRanch_C
struct UUMG_Sign_Text_DisplayRanch_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_Icon; 
	struct UTextBlock* TextBlock_SignText; 
	struct FItemableRowHandle CurrentIconRow; 

	void UpdateSignDisplayText(struct FText Text); // (BlueprintCallable|BlueprintEvent)
	void UpdateSignDisplayIcon(struct FItemableRowHandle Itemable); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Sign_Text_DisplayRanch(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

