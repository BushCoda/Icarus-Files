// WidgetBlueprintGeneratedClass UMG_Sign_Text_Display.UMG_Sign_Text_Display_C
struct UUMG_Sign_Text_Display_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_Icon; 
	struct USizeBox* SizeBox_Main; 
	struct UTextBlock* TextBlock_SignText; 
	struct FItemableRowHandle CurrentIconRow; 

	void UpdateSignDisplayText(struct FText Text); // (BlueprintCallable|BlueprintEvent)
	void UpdateSignDisplayIcon(struct FItemableRowHandle Itemable); // (BlueprintCallable|BlueprintEvent)
	void InitialiseWidget(struct FVector2D Size, bool WrapText, enum class ETextJustify Justification); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Sign_Text_Display(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

