// WidgetBlueprintGeneratedClass UMG_InspectOnly.UMG_InspectOnly_C
struct UUMG_InspectOnly_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UBorder* MainBorder; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList_C_1; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 

	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_InspectOnly(int32_t EntryPoint); // (Final|UbergraphFunction)
};

