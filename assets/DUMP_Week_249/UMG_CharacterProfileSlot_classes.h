// WidgetBlueprintGeneratedClass UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C
struct UUMG_CharacterProfileSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* AbandonReveal; 
	struct UWidgetAnimation* RevealDetails; 
	struct UWidgetAnimation* HoverAnimation; 
	struct UButton* ButtonBase; 
	struct UBorder* CharacterDetailsBorder; 
	struct UImage* CharacterImage; 
	struct UTextBlock* CharacterLevel; 
	struct UTextBlock* CharacterName; 
	struct UImage* cornerimage; 
	struct UImage* cornerimage_2; 
	struct UImage* cornerimage_3; 
	struct UImage* cornerimage_4; 
	struct UOverlay* Corners; 
	struct UTextBlock* DropStatus; 
	struct UImage* SelectedFrame; 
	struct UUMG_AbandonProspectButton_C* UMG_AbandonProspectButton; 
	struct FMulticastInlineDelegate ButtonClicked; 
	struct FMulticastInlineDelegate DeleteCharacter; 
	struct FOnlineProfileCharacter Character; 
	struct FProspectInfo ActiveProspect; 
	struct FSlateColor TextColour_Default; 
	struct FSlateColor TextColour_Hovered; 
	bool Is Selected; 
	struct UMaterialInstanceDynamic* IconMaterial; 
	struct UTextureRenderTarget2D* IconRenderTarget; 
	struct FMulticastInlineDelegate AbandonButtonClicked; 

	void GenerateIcon(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetSelectedState(bool IsSelected); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CalculatePlayerLevelFromExp(int32_t Experience, int32_t& Level); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialize(struct FOnlineProfileCharacter Character, struct FProspectInfo CurrentActiveProspect); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_CharacterProfileSlot_UMG_AbandonProspectButton_K2Node_ComponentBoundEvent_2_AbandonButtonClicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_CharacterProfileSlot(int32_t EntryPoint); // (Final|UbergraphFunction)
	void AbandonButtonClicked__DelegateSignature(struct UUMG_CharacterProfileSlot_C* Slot); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void DeleteCharacter__DelegateSignature(struct UUMG_CharacterProfileSlot_C* Delete); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ButtonClicked__DelegateSignature(struct UUMG_CharacterProfileSlot_C* Input); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

