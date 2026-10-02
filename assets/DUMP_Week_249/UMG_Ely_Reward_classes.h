// WidgetBlueprintGeneratedClass UMG_Ely_Reward.UMG_Ely_Reward_C
struct UUMG_Ely_Reward_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Backglow; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UImage* Image_70; 
	struct UHorizontalBox* Inventories; 
	struct UVerticalBox* InventoryVertBox; 
	struct UBorder* MainBorder; 
	struct UTextBlock* Name; 
	struct UHorizontalBox* Selection; 
	struct UUMG_DeviceInventory_C* UMG_DeviceInventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 
	struct FSessionFlagsRowHandle Session Flag; 

	void SelectedReward(struct FDynamicQuestRewardsRowHandle QuestReward); // (Public|BlueprintCallable|BlueprintEvent)
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateState(); // (BlueprintCallable|BlueprintEvent)
	void SwapToInventory(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Ely_Reward(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

