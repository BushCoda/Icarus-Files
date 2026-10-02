// WidgetBlueprintGeneratedClass UMG_Salting_Station.UMG_Salting_Station_C
struct UUMG_Salting_Station_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Error; 
	struct UUMG_InventoryItemSlow_C* FoodItem; 
	struct UImage* Image_73; 
	struct UImage* Image_AlterationEquipmentIcon; 
	struct UImage* Image_SaltIcon; 
	struct UVerticalBox* InventoryVertBox; 
	struct UBorder* MainBorder; 
	struct URichTextBlock* RequiredSalt; 
	struct UUMG_BasicButton_2_C* SaltButton; 
	struct UUMG_InventoryItemSlow_C* SaltItem; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_105; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 
	bool TriggerUpdate; 

	void RefreshState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Salting_Station_SaltButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnInventoryItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Salting_Station(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

