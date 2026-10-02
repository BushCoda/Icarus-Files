// WidgetBlueprintGeneratedClass UMG_MountInventory.UMG_MountInventory_C
struct UUMG_MountInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UUMG_Inventory_C* Inventory_Cargo; 
	struct UUMG_Inventory_C* Inventory_HeavyCargo; 
	struct UOverlay* InventoryOverlay_Cargo; 
	struct UBorder* NoSaddleBorder; 
	struct USizeBox* SizeBox_Cargo; 
	struct USizeBox* SizeBox_HeavyCargo; 
	struct USizeBox* SizeBox_NoSaddle; 
	struct UUMG_IconTextButton_C* TakeAllButtonInput; 
	struct UUMG_Titlebar_C* UMG_DarkTitlebar_Cargo; 
	struct UUMG_EncumbranceBarActor_C* UMG_EncumbranceBarActor; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_103; 
	struct UUMG_Sort_C* UMG_Sort; 
	struct UVerticalBox* VerticalBox_Cargo; 
	struct AActor* LinkedActor; 
	struct FInventoryIDEnum Inventory ID; 
	bool HideTakeAllButton; 
	bool bNoTitle; 

	void TakeAllInventoryItems(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnHeavyCargoInventorySlotCountUpdated(struct UInventory* Inventory); // (Public|BlueprintCallable|BlueprintEvent)
	void OnInventorySlotCountUpdated(struct UInventory* Inventory); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(struct AActor* LinkedActor); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__TakeAllButtonInput_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateSaddleBorder(); // (BlueprintCallable|BlueprintEvent)
	void LootAllKey(); // (BlueprintCallable|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_MountInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

