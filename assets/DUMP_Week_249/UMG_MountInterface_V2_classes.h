// WidgetBlueprintGeneratedClass UMG_MountInterface_V2.UMG_MountInterface_V2_C
struct UUMG_MountInterface_V2_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenExtraStats; 
	struct UWidgetAnimation* OpenMenu; 
	struct UOverlay* APPointBox; 
	struct UImage* AttributeGlow; 
	struct UImage* Backglow; 
	struct UTextBlock* ButtonText; 
	struct UEditableTextBox* CreateCharacterName; 
	struct UImage* Dropshadow; 
	struct UTextBlock* FoodBuffs; 
	struct UUMG_ToggleButton_MenuHeader_C* Inventory_Button; 
	struct UBorder* MainBorder; 
	struct UOverlay* Overlay_TalentTree; 
	struct UButton* ShowMoreButton; 
	struct UTextBlock* ShowMoreText; 
	struct UOverlay* StatsWindow; 
	struct UImage* SuitImage; 
	struct UWidgetSwitcher* Switcher; 
	struct UNamedSlot* TalentMenuSlot; 
	struct UTextBlock* TalentPoints; 
	struct UUMG_ToggleButton_MenuHeader_C* Talents_Button; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Close; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Unclaim; 
	struct UUMG_CharacterInfo_C* UMG_CharacterInfo; 
	struct UUmg_GeneticsDisplay_C* Umg_GeneticsDisplay; 
	struct UUMG_InventoryStatusBox_C* UMG_InventoryStatusBox; 
	struct UUMG_MountCommands_C* UMG_MountCommands; 
	struct UUMG_MountInventory_C* UMG_MountInventory; 
	struct UUMG_MountInventory_C* UMG_MountInventory_Cargo; 
	struct UUMG_SaddleInventory_C* UMG_MountInventory_Saddle; 
	struct UUMG_SaddleInventory_C* UMG_MountInventory_Saddle_Attachment; 
	struct UUMG_MountInventoryWidgets_C* UMG_MountInventoryWidgets; 
	struct UUMG_NameMountPopup_C* UMG_NameMountPopup_Window; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_50; 
	struct UUMG_StatDisplayMount_C* UMG_StatDisplayMount; 
	struct UUMG_StatsWindow_C* UMG_StatsWindow; 
	struct UUMG_TameParent_C* UMG_TameParent; 
	struct UUMG_Titlebar_C* UMG_Titlebar; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 
	struct AIcarusMountCharacter* LinkedMount; 
	int32_t MaximumMountNameLength; 
	bool PromptForNameOnEntry; 
	bool DisableCreatureGenetics; 
	bool DisableMountCommands; 

	void MountTalentModelUpdated(struct UTalentModelInterface_Const* Model); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitMountWidgets(struct AActor* LinkedActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PopulateModifierList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_MountInterface_CreateCharacterName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_MountInterface_CreateCharacterName_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void OnMountModifiersUpdated(struct UModifierStateComponent* ModifiedComponent, bool Removed); // (BlueprintCallable|BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void SelectNewName(); // (BlueprintCallable|BlueprintEvent)
	void SetCharacterName(struct FString Name); // (BlueprintCallable|BlueprintEvent)
	void PromptForName(); // (BlueprintCallable|BlueprintEvent)
	void TryEnableOwnerFunctions(); // (BlueprintCallable|BlueprintEvent)
	void ToggleExtraStatsVisibility(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_MountInterface_V2_Inventory_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_MountInterface_V2_Talents_Button_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_MountInterface_V2_UMG_BasicButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ClosePopup(); // (BlueprintCallable|BlueprintEvent)
	void Unclaim(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MountInterface_V2(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

