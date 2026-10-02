// WidgetBlueprintGeneratedClass UMG_MainInventory.UMG_MainInventory_C
struct UUMG_MainInventory_C : UMainInventoryWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenStats; 
	struct UWidgetAnimation* AnimatePointers; 
	struct UUMG_Titlebar_C* Character_Titlebar; 
	struct UImage* Dropshadow; 
	struct UTextBlock* FoodBuffs; 
	struct UUMG_Titlebar_C* Inventory_Titlebar; 
	struct UHorizontalBox* KeyPrompts; 
	struct UTextBlock* ProspectTimeElapsed; 
	struct UButton* ShowMoreButton; 
	struct UTextBlock* ShowMoreText; 
	struct UOverlay* StatsWindow; 
	struct UImage* SuitImage; 
	struct UTextBlock* Text_CurrentHealth; 
	struct UUMG_EncumbranceBarLight_C* UMG_EncumbranceBarLight; 
	struct UUMG_EnvirosuitSlots_C* UMG_EnvirosuitSlots; 
	struct UUMG_Inventory_C* UMG_Inventory; 
	struct UUMG_InventoryAuxilarySlots_C* UMG_InventoryAuxilarySlots; 
	struct UUMG_InventoryDropZone_C* UMG_InventoryDropZone; 
	struct UUMG_InventoryEnvirosuit_C* UMG_InventoryEnvirosuit; 
	struct UUMG_InventoryPaperDoll_C* UMG_InventoryPaperDoll; 
	struct UUMG_InventoryStatusBox_C* UMG_InventoryStatusBox; 
	struct UUMG_Sort_C* UMG_Sort; 
	struct UUMG_StatDisplay_C* UMG_StatDisplay; 
	struct UInventory* Inventory; 
	struct UUMG_UserInterface_C* UserInterface; 
	struct ABP_PlayerPreview_Survival_C* PlayerPreview; 
	enum class UDLSSMode Old DLSS Mode; 
	struct FTimerHandle TimerHandle; 
	enum class EBPLogVerbosity DebugVerbosity; 
	float TickAccumulation; 
	struct UUMG_StatsWindow_C* StatWindowWidget; 

	bool IsInventoryVisible(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void QuickShiftInventoryHandler(int32_t Location, struct UInventory* Inventory); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(struct UInventory* BoundInventory, struct UInventory* EnvirosuitInventory, struct UInventory* EquipmentInventory, struct UInventory* UpgradeInventory, struct UInventory* VisionInventory, struct UUMG_UserInterface_C* Parent); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void VisibilityChanged(enum class ESlateVisibility NewVisbility); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_MainInventory_Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void CleanupStatsWindow(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MainInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

