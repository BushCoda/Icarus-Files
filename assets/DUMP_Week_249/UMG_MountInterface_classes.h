// WidgetBlueprintGeneratedClass UMG_MountInterface.UMG_MountInterface_C
struct UUMG_MountInterface_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenExtraStats; 
	struct UWidgetAnimation* OpenMenu; 
	struct UImage* Backglow; 
	struct UEditableTextBox* CreateCharacterName; 
	struct UImage* Dropshadow; 
	struct UTextBlock* FoodBuffs; 
	struct UVerticalBox* InventoryVertBox; 
	struct UBorder* MainBorder; 
	struct UOverlay* StatsWindow; 
	struct UImage* SuitImage; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_CharacterInfo_C* UMG_CharacterInfo; 
	struct UUMG_InventoryStatusBox_C* UMG_InventoryStatusBox; 
	struct UUMG_MountCommands_C* UMG_MountCommands; 
	struct UUMG_MountInventory_C* UMG_MountInventory_Cargo; 
	struct UUMG_SaddleInventory_C* UMG_MountInventory_Saddle; 
	struct UUMG_SaddleInventory_C* UMG_MountInventory_Saddle_Attachment; 
	struct UUMG_MountInventoryWidgets_C* UMG_MountInventoryWidgets; 
	struct UUMG_NameMountPopup_C* UMG_NameMountPopup_Window; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UUMG_StatDisplay_C* UMG_StatDisplay; 
	struct UUMG_StatsWindow_C* UMG_StatsWindow; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 
	struct AIcarusMountCharacter* LinkedMount; 
	int32_t MaximumMountNameLength; 
	bool PromptForNameOnEntry; 

	void PopulateModifierList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_MountInterface_CreateCharacterName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_MountInterface_CreateCharacterName_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void OnMountModifiersUpdated(struct UModifierStateComponent* ModifiedComponent, bool Removed); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void SelectNewName(); // (BlueprintCallable|BlueprintEvent)
	void SetCharacterName(struct FString Name); // (BlueprintCallable|BlueprintEvent)
	void PromptForName(); // (BlueprintCallable|BlueprintEvent)
	void TryEnableOwnerFunctions(); // (BlueprintCallable|BlueprintEvent)
	void ToggleExtraStatsVisibility(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MountInterface(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

