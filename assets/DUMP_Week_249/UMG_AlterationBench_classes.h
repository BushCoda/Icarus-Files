// WidgetBlueprintGeneratedClass UMG_AlterationBench.UMG_AlterationBench_C
struct UUMG_AlterationBench_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OnSlottingAttachmentItem; 
	struct UWidgetAnimation* OpenMenu; 
	struct UProgressBar* AlterationProgress; 
	struct UUMG_BasicButton_2_C* AlterButton; 
	struct UImage* AlterImage; 
	struct UHorizontalBox* AlterInventories; 
	struct UUMG_InventoryItemSlow_C* AlterItem; 
	struct UVerticalBox* BenchVertBox; 
	struct UImage* Image_AlterationAttachment; 
	struct UImage* Image_AlterationEquipmentIcon; 
	struct UImage* Image_AlterationIcon; 
	struct UBorder* InfoBorder; 
	struct UVerticalBox* InventoryVertBox; 
	struct UVerticalBox* ItemAttachmentInventory; 
	struct UImage* RemoveImage; 
	struct URichTextBlock* RichText; 
	struct UUMG_InventoryItemSlow_C* ToAttach; 
	struct UUMG_AlterationDescriptionLarge_C* UMG_AlterationDescriptionLarge; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton; 
	struct UUMG_DeviceInventory_C* UMG_DeviceInventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_105; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 
	bool Retry; 
	bool In Use; 
	bool TriggerUpdateState; 
	bool Current_State; 
	bool State_To_Set; 
	struct UInventory* AlterationInventory; 

	void GetItemAttachmentQuery(struct FTagQueriesRowHandle& Query); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetAttachedAttachment(struct FItemData& Attachment); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CanAlterItem(bool& Alterable); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateActionText(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAlterButton(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_AlterationBench_UMG_BasicButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnInventoryItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_AlterationBench(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

