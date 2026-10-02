// WidgetBlueprintGeneratedClass UMG_Medical_Scan.UMG_Medical_Scan_C
struct UUMG_Medical_Scan_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UImage* BodyHealthTint; 
	struct UUMG_SurvivalProgressQuest_C* Food; 
	struct UProgressBar* HealthBar; 
	struct UImage* HealthBarOutline; 
	struct UBorder* HealthFooter; 
	struct UVerticalBox* InventoryBox; 
	struct UBorder* MainBorder; 
	struct UUMG_SurvivalProgressQuest_C* Oxygen; 
	struct UTextBlock* StabilityText; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar; 
	struct UUMG_DeployableModifiers_C* UMG_DeployableModifiers; 
	struct UUMG_Inventory_C* UMG_Inventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UUMG_SurvivalProgressQuest_C* Water; 
	struct UTextBlock* WhatToDo; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 
	struct TArray<struct UUMG_ModifierState_C*> Modifier 1; 
	int32_t Index; 
	struct UCurveLinearColor* SurvivalColourCurve; 

	void GetMedicalValues(struct AActor* Actor, float& WaterPercent, float& FoodPercent, float& OxygenPercent, int32_t& Stability); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ToPercent(int32_t Current, int32_t Max, float& Percent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void TriggerUpdate(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Medical_Scan(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

