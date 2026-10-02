// WidgetBlueprintGeneratedClass UMG_ConfirmationPopup_Small.UMG_ConfirmationPopup_Small_C
struct UUMG_ConfirmationPopup_Small_C : UConfirmationPopupBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetSwitcher* ContentSlot; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_97; 
	struct UUMG_IconTextButton_C* OptionAButton; 
	struct UUMG_IconTextButton_C* OptionBButton; 
	struct URichTextBlock* RichText; 
	struct USizeBox* SizeBox_Main; 
	struct UFMODEvent* ClickSoundDefault_A; 
	struct UFMODEvent* ClickSoundDefault_B; 
	struct UTexture2D* CachedOptionAImage; 
	struct UTexture2D* CachedOptionBImage; 
	struct FLinearColor CachedOptionATint; 
	struct FLinearColor CachedOptionBTint; 
	float DesiredWidth; 

	void GetDefaultClickSound(struct UUMG_IconTextButton_C* Button, struct UFMODEvent*& ClickSound); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetOption(struct UUMG_IconTextButton_C* Button, struct FText Text, struct UFMODEvent* FMODEvent, struct UTexture2D* Image, struct FLinearColor Tint); // (Public|BlueprintCallable|BlueprintEvent)
	void CallCancel(); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__OptionAButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__OptionBButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void SetPromptDetails(struct FConfirmationPopupDetails& ConfirmationPopupDetails); // (Event|Protected|HasOutParms|BlueprintEvent)
	void OnInitialized(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ConfirmationPopup_Small(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

