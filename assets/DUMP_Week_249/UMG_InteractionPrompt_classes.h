// WidgetBlueprintGeneratedClass UMG_InteractionPrompt.UMG_InteractionPrompt_C
struct UUMG_InteractionPrompt_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* AltHoldContainer; 
	struct UTextBlock* AltHoldText; 
	struct UTextBlock* AltHoldText_2; 
	struct UTextBlock* AltHoldText_3; 
	struct UTextBlock* AltInteractText; 
	struct UBorder* AltPressContainer; 
	struct UBorder* FeedMount; 
	struct UTextBlock* FeedMountText; 
	struct UBorder* FertalizeCrop; 
	struct UBorder* HoldContainer; 
	struct UTextBlock* HoldText; 
	struct UHorizontalBox* HorizontalBox_2; 
	struct UHorizontalBox* HorizontalBox_3; 
	struct UHorizontalBox* HorizontalBox_4; 
	struct UHorizontalBox* HorizontalBox_5; 
	struct UBorder* InteractContainer; 
	struct UTextBlock* InteractText; 
	struct UBorder* MainFrame; 
	struct URetainerBox* RetainerBox_1; 
	struct UUMG_Keybind_C* UMG_Keybind; 
	struct UUMG_Keybind_C* UMG_Keybind_2; 
	struct UUMG_Keybind_C* UMG_Keybind_3; 
	struct UUMG_Keybind_C* UMG_Keybind_4; 
	struct UUMG_Keybind_C* UMG_Keybind_66; 
	struct UUMG_Keybind_C* UMG_Keybind_153; 
	struct UBorder* WaterCrop; 
	struct AActor* LastObject; 
	struct FHitResult HitObject; 
	bool AlwaysVisible; 
	bool IsHeld; 
	bool IsHeld_Alt; 
	struct AIcarusItem* FocusedActor; 
	bool ShouldShowKeybindList; 
	struct AIcarusPlayerCharacter* PlayerRef; 
	struct UInteractableComponent* CurrentInteractable; 

	void Set Held(bool Held, struct UImage* Image, float Alpha, struct UWidgetAnimation* Animation, bool& Cache); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetState(bool Visible); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_InteractionPrompt(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

