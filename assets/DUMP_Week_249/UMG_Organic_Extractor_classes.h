// WidgetBlueprintGeneratedClass UMG_Organic_Extractor.UMG_Organic_Extractor_C
struct UUMG_Organic_Extractor_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UOverlay* InventoryOverlay; 
	struct UUMG_Inventory_C* InventoryProcessor; 
	struct UVerticalBox* InventoryVertBox; 
	struct UBorder* MainBorder; 
	struct UOverlay* Overlay_Sort; 
	struct UUMG_IconTextButton_C* TakeAllButtonInput; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar; 
	struct UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList; 
	struct UUMG_ExtractionElement_Resource_C* UMG_ExtractionElement_Resource; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 

	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Food_Trough_T4_TakeAllButtonInput_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void LootAllKeyPress(); // (BlueprintCallable|BlueprintEvent)
	void CloseInventory(); // (BlueprintCallable|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Organic_Extractor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

