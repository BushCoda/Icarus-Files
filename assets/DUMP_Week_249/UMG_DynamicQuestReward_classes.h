// WidgetBlueprintGeneratedClass UMG_DynamicQuestReward.UMG_DynamicQuestReward_C
struct UUMG_DynamicQuestReward_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Backglow; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UImage* Image_70; 
	struct UHorizontalBox* Inventories; 
	struct UVerticalBox* InventoryVertBox; 
	struct UBorder* MainBorder; 
	struct UHorizontalBox* Selection; 
	struct UUMG_DeviceInventory_C* UMG_DeviceInventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 

	void SelectedReward(struct FDynamicQuestRewardsRowHandle QuestReward); // (Public|BlueprintCallable|BlueprintEvent)
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateState(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_DynamicQuestReward(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

