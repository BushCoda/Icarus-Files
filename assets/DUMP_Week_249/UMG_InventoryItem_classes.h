// WidgetBlueprintGeneratedClass UMG_InventoryItem.UMG_InventoryItem_C
struct UUMG_InventoryItem_C : UInventoryItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Aleration; 
	struct UImage* AssociatedItem; 
	struct UBorder* AssociatedItemContainer; 
	struct UImage* Attachment; 
	struct UBorder* AttachmentIndicator; 
	struct UImage* backdetails; 
	struct UImage* backdetails_2; 
	struct UOverlay* BackpackDetails; 
	struct UBorder* BaseBorder; 
	struct UBorder* BrokenIconContainer; 
	struct UImage* BrokenIconImage; 
	struct UImage* ClassificationImage; 
	struct UBorder* CountContainer; 
	struct UProgressBar* DurabilityBar; 
	struct UImage* HighlightSlot; 
	struct UImage* HoveredHandles; 
	struct UOverlay* HoverImage; 
	struct UBorder* InteractableFrame; 
	struct UBorder* InteractableFrameLarge; 
	struct UImage* ItemIconDynamic; 
	struct UOverlay* ItemSlot; 
	struct UBorder* LastItem; 
	struct UImage* LastItemIcon; 
	struct UOverlay* LightSlot; 
	struct UBorder* LockedState; 
	struct UOverlay* MasterOverlay; 
	struct UImage* RankImage; 
	struct UImage* SlotImage; 
	struct UBorder* SpoilContainerDebug; 
	struct UProgressBar* SpoilPercentage; 
	struct UTextBlock* SpoilTime; 
	struct UTextBlock* Stack; 
	struct UImage* StackedModifierImage; 
	struct UInvalidationBox* TopLevelInvalidationBox; 
	struct UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon; 
	struct UUMG_FillableProgressBar_C* UMG_FillableProgressBar; 
	int32_t Hotkey_Number; 
	enum class E_SlotState State; 
	bool HiddenForDrag; 
	bool RightClick; 
	struct FMulticastInlineDelegate QuickShift; 
	bool Locked; 
	bool BeingMoved; 
	int32_t MovingCount; 
	bool ShowLastItem; 
	struct UCurveLinearColor* SpoiltColourCurve; 
	bool LockOverride; 
	struct UFMODEvent* SFX_SocketItem; 
	struct UUMG_ItemPopup_C* Tooltip; 
	struct FName ContextMenuUseItemId; 
	struct FItemData CachedItem; 
	struct UFMODEvent* SFX_SocketItemFail; 
	struct UFMODEvent* SFX_DestroyItemDefault; 
	struct UFMODEvent* SFX_HoverItem; 
	struct UFMODEvent* SFX_HoverEmpty; 
	struct UFMODEvent* SFX_HoverDragItemValid; 
	struct UFMODEvent* SFX_HoverDragItemInvalid; 
	struct UFMODEvent* SFX_DragItem; 
	struct UFMODEvent* SFX_QuickMoveItem; 
	struct UUserWidget* HighlightWidget; 
	struct FSlateBrush BackpackFrame; 
	struct FSlateBrush RegularFrame; 
	int32_t CachedItemMaximumHealth; 
	struct FSlateBrush LightFrame; 
	bool BlockHighlight; 
	struct FName Item Identifier; 
	int32_t Item Payload; 
	bool AllowContextMenuWhileLocked; 
	struct UMaterialInterface* ItemSlot_Normal; 
	struct UMaterialInterface* ItemSlot_Hovered; 
	struct UMaterialInterface* ItemSlot_Pressed; 
	struct UMaterialInterface* ItemSlot_Valid; 
	struct UMaterialInterface* ItemSlot_Invalid; 
	struct UMaterialInterface* ItemSlot_Exotic; 
	struct UMaterialInterface* ItemSlot_Exotic_Hovered; 
	struct UMaterialInterface* ItemSlot_Quest; 
	struct UMaterialInterface* ItemSlot_Quest_Hovered; 
	bool DisableContextMenu; 
	struct FLinearColor StackColour_Normal; 
	struct FLinearColor StackColour_Bag; 
	bool Visual_LightSlot; 
	bool Visual_BulkySlot; 
	struct UMaterialInterface* ItemSlot_Legendary; 
	struct UMaterialInterface* ItemSlot_Legendary_Hovered; 
	bool AllowSwapOnly; 
	bool ItemHovered; 
	struct UInventory* CachedInventory; 
	int32_t CachedLocation; 

	void OnContextMenuDropAllClicked(struct FName ID, int32_t Payload); // (Public|BlueprintCallable|BlueprintEvent)
	void HotbarClicked(int32_t Slots); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnContextMenuPourClicked(struct FName ID, int32_t Payload); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsLivingWeapon(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetItemAndCategoryFromCurrentSlot(struct FFieldGuideCategoriesRowHandle& Category, struct FItemsStaticRowHandle& Item); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateHotbarBulkySlot(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateHotbarLightSlot(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateEquippableModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetEquippableModifierComponent(struct UEquippableModifier*& EquippableModifier); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void OnSpaceRepairOptionClicked(struct FName Option, int32_t Payload); // (Public|BlueprintCallable|BlueprintEvent)
	bool IsQuestItem(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetItemStyle(bool IsExotic, bool IsQuest, bool IsLegendary); // (Public|BlueprintCallable|BlueprintEvent)
	bool IsExoticItem(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LightSlotStyle(bool IsEquipped); // (Public|BlueprintCallable|BlueprintEvent)
	void SetForceLocked(bool IsLocked); // (Public|BlueprintCallable|BlueprintEvent)
	bool IsBackpackSlot(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetCraftingBenchRequired(struct FItemData& ItemData, bool& RequiresCraftingBench, struct TArray<struct FRecipeSetsRowHandle>& CraftingBenchType); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetUseWidgets(struct FItemData Item, struct FUsesEnum Use, struct TArray<struct UWidget*>& Array); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ShouldShowHighlight(struct UInventory* Inventory, bool& Show); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnCursorCleared(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnCursorUpdated(struct FItemData Item); // (Public|BlueprintCallable|BlueprintEvent)
	void GetDestroyItemSound(struct FItemData& ItemData, struct UFMODEvent*& Sound); // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DestroyItemConfirmed(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DestroyItemCancelled(); // (Public|BlueprintCallable|BlueprintEvent)
	void CanDestroyItem(struct FItemData Item, bool& CanDestroy); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HasStackContextMenuItems(struct FItemData Item, struct FItemableData& ItemableData, bool& HasStackActions, bool& SplitStackEnabled); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HasUseContextMenuItems(struct FItemData& Item, bool& HasUseItems); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnContextMenuFieldGuideClicked(struct FName ID, int32_t Payload); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnContextMenuDropClicked(struct FName ID, int32_t Payload); // (Public|BlueprintCallable|BlueprintEvent)
	void OnContextMenuItemClicked(struct FName ID, int32_t Payload); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnContextMenuSplitStackClicked(struct FName ID, int32_t Payload); // (Public|BlueprintCallable|BlueprintEvent)
	void OnContextMenuDestroyItemClicked(struct FName ID, int32_t Payload); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryShowContextMenu(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Get Meta Inventory ID(struct UInventory* Inventory, enum class EMetaInventoryID& Meta ID); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateSpoilColour(float SpoilPercent); // (Public|BlueprintCallable|BlueprintEvent)
	void SetDropShipMode(); // (Public|BlueprintCallable|BlueprintEvent)
	void Set Being Moved(int32_t MovingCount); // (Public|BlueprintCallable|BlueprintEvent)
	void SetCursorInfo(struct UInventory* CurrentInventory, int32_t Location); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateState(enum class E_SlotState NewState); // (Public|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetCursorInfo(struct UInventory*& Inventory, int32_t& Location, bool& Success, int32_t& Count); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Unfocus(); // (Public|BlueprintCallable|BlueprintEvent)
	void Focus(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update(struct FItemData Item Reference, struct FItemsStaticRowHandle Last Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise (struct UInventory* BoundInventory, int32_t Location); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void DragOff(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Trigger Hover(); // (BlueprintCallable|BlueprintEvent)
	void TryUpdate(); // (BlueprintCallable|BlueprintEvent)
	void SpaceRepairClicked(struct FName Identifier, int32_t Payload); // (BlueprintCallable|BlueprintEvent)
	void RepairConfirmed(); // (BlueprintCallable|BlueprintEvent)
	void Close(); // (BlueprintCallable|BlueprintEvent)
	void ClearDragValues(); // (BlueprintCallable|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_InventoryItem(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void QuickShift__DelegateSignature(int32_t CurrentLocation, struct UInventory* Inventory); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

