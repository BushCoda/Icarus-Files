// WidgetBlueprintGeneratedClass UMG_FieldGuide.UMG_FieldGuide_C
struct UUMG_FieldGuide_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UUMG_ButtonIcon_C* BackButton; 
	struct UImage* Backglow; 
	struct UOverlay* BeastContainer; 
	struct UUMG_IcarusGrid_C* BeastGrid; 
	struct UTextBlock* BestiaryCategory; 
	struct UUMG_ToggleButton_MenuHeader_C* BestiaryToggle; 
	struct UBorder* BorderBeastContainer; 
	struct UBorder* BorderFishContainer; 
	struct UVerticalBox* ButtonBox; 
	struct UUMG_ButtonIcon_C* CategoryButton; 
	struct UUMG_BasicButton_2_C* CheatIncreaseFishCaught; 
	struct UUMG_BasicButton_2_C* CheatIncreaseKillsAI; 
	struct UUMG_BasicButton_2_C* CheatItemButton; 
	struct UUMG_BasicButton_2_C* CheatItemSet; 
	struct UUMG_BasicButton_2_C* CheatRecipeButton; 
	struct UVerticalBox* CheatsBox_Bestiary; 
	struct UVerticalBox* CheatsBox_Fish; 
	struct UVerticalBox* CheatsBox_Items; 
	struct UUMG_BasicButton_2_C* CheatSpawnAI; 
	struct UUMG_CloseButton_2_C* CloseButton; 
	struct UWidgetSwitcher* Content; 
	struct UBorder* EntryDisplay; 
	struct UTextBlock* FishCategory; 
	struct UOverlay* FishContainer; 
	struct UUMG_IcarusGrid_C* FishGrid; 
	struct UUMG_ToggleButton_MenuHeader_C* FishingToggle; 
	struct UUMG_ButtonIcon_C* HomeButton; 
	struct UOverlay* ItemsContainer; 
	struct UUMG_FieldGuideItemSearch_C* ItemSearch; 
	struct UUMG_ToggleButton_MenuHeader_C* ItemsToggle; 
	struct UOverlay* LeftPaneOverlay; 
	struct UBorder* MainBorder; 
	struct UVerticalBox* SearchButtonBox; 
	struct UWidgetSwitcher* SearchSwitcher; 
	struct UUMG_IcarusGrid_C* TitleButtons; 
	struct UOverlay* TitleContainer; 
	struct UInventory* Inventory; 
	bool TempFishUnlocked; 
	int32_t TempCreaturePercent; 
	struct UBestiaryManagerComponent* BestiaryManagerComponent; 
	struct FText BuiltString; 
	struct TArray<struct FFieldGuideBackButtonItem> BackList; 
	enum class EFieldGuideCategory LastFieldGuideCategory; 
	struct FItemsStaticRowHandle CurrentItem; 
	struct FItemsStaticRowHandle CheatItem; 
	struct TArray<struct FItemsStaticRowHandle> CheatItemArray; 
	struct FBestiaryDataRowHandle CurrentAI; 
	struct FFishDataRowHandle CurrentFish; 

	void ClearLeftSideBarSelection(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowBeastFromItem(struct FItemsStaticRowHandle ItemRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowFishFromItem(struct FItemsStaticRowHandle ItemRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowCurrentCategoryView(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DebugPrintBackList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PopBackListItem(struct FFieldGuideCategoriesRowHandle& CategoryRowOut, struct FItemsStaticRowHandle& ItemRowOut); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PeakLastBackListItem(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetCurrentItemsView(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PopViewFromBackList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConditionalAddToBackList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialize Back List(enum class EFieldGuideCategory Category); // (Public|BlueprintCallable|BlueprintEvent)
	void FilterItems(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void FilterBosses(struct FTerrainsRowHandle Map, struct FAtmospheresRowHandle Atmosphere); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FilterBestiary(struct FTerrainsRowHandle Map, struct FAtmospheresRowHandle Atmosphere); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FilterFish(enum class EFishRarity Rarity, enum class EFishType Type); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CreateFieldGuideItems(struct UVerticalBox* LeftSidebar); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CreateBestiary(struct UVerticalBox* LeftSidebar); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CreateFishingRecord(struct UVerticalBox* LeftSidebar); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Populate(); // (Public|BlueprintCallable|BlueprintEvent)
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetContent(enum class EFieldGuideCategory Category); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Bestiary_UMG_CloseButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void RemoveEntryDisplay(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ShowCreature(struct FBestiaryDataRowHandle Creature, int32_t Percent); // (BlueprintCallable|BlueprintEvent)
	void RemoveFishDisplay(); // (BlueprintCallable|BlueprintEvent)
	void ShowFish(struct FFishDataRowHandle Creature, bool Discovered); // (BlueprintCallable|BlueprintEvent)
	void ClickedTitleButton(enum class EFieldGuideCategory Category); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_FieldGuide_HomeButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ShowItem(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (BlueprintCallable|BlueprintEvent)
	void RemoveItemDisplay(); // (BlueprintCallable|BlueprintEvent)
	void ChildResourceClicked(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void FilterItemCategories(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (BlueprintCallable|BlueprintEvent)
	void PopulateTopLevel(); // (BlueprintCallable|BlueprintEvent)
	void HideSearchShowItem(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (BlueprintCallable|BlueprintEvent)
	void InitContentView(enum class EFieldGuideCategory Cateogry); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_FieldGuide_BackButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuide_CategoryButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // (BlueprintEvent)
	void FishLinkClicked(struct FItemsStaticRowHandle& FishRow); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BeastLinkClicked(struct FItemsStaticRowHandle& BeastRow); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_FieldGuide_CheatItemButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuide_CheatRecipeButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuide_CheatItemSet_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuide_CheatSpawnAI_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuide_BestiaryToggle_K2Node_ComponentBoundEvent_10_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void ToggleCategory(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_FieldGuide_FishingToggle_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuide_ItemsToggle_K2Node_ComponentBoundEvent_12_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuide_CheatIncreaseKillsAI_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuide_CheatIncreaseFishCaught_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

