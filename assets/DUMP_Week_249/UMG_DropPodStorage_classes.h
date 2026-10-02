// WidgetBlueprintGeneratedClass UMG_DropPodStorage.UMG_DropPodStorage_C
struct UUMG_DropPodStorage_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_Inventory_C* Backpack; 
	struct UUMG_Inventory_C* Equipment; 
	struct UUMG_Inventory_C* MetaStorage; 
	struct UUMG_CloseButton_2_C* UMG_CloseButton_3; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_2; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton_87; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_173; 
	struct UUMG_Titlebar_C* UMG_Titlebar; 
	struct UInventory* Inventory; 

	void InventoryQuickShiftHandler(int32_t Location, struct UInventory* Inventory); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_IconTextButton_86_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_DropPodStorage(int32_t EntryPoint); // (Final|UbergraphFunction)
};

