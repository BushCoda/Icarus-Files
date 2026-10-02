// WidgetBlueprintGeneratedClass UMG_Beehive.UMG_Beehive_C
struct UUMG_Beehive_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShelterWarning; 
	struct UWidgetAnimation* OpenMenu; 
	struct UWidgetAnimation* DeviceWarningPulse; 
	struct UTextBlock* BenchName; 
	struct UTextBlock* BenchName_2; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UUMG_BasicButton_2_C* EnergyActivationButton; 
	struct UTextBlock* ExtractorResourcesPerMin; 
	struct USizeBox* ExtractorUpgrade; 
	struct UImage* Image_106; 
	struct UTextBlock* InsufficientPowerWarning; 
	struct UTextBlock* ResourcesPerMin; 
	struct UUMG_BeehiveBreeding_C* UMG_BeehiveBreeding; 
	struct UUMG_BeehiveInventory_C* UMG_BeehiveInventory; 
	struct UUMG_BeehiveUpgradeLock_C* UMG_BeehiveUpgradeLock; 
	struct UUMG_BeehiveUpgrades_C* UMG_BeehiveUpgrades; 
	struct UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList_C_2; 
	struct UUMG_ExtractionElement_C* UMG_ExtractionElement; 
	struct UUMG_ExtractionElement_C* UMG_ExtractionElement_2; 
	struct UUMG_FuelInventory_C* UMG_FuelInventory; 
	struct UUMG_ItemDisplay_C* UMG_ItemDisplay; 
	struct UUMG_ItemDisplay_C* UMG_ItemDisplay_2; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	int32_t LastCachedBrownOutStrength; 
	float CachedExtractorMaxTime; 

	void UpdateExtractorSpeed(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateEnergyState(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateUpgrades(struct UInventory* Inventory); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void CloseUI(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnInventoryItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnDeviceResourceChanged(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Beehive(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

