// BlueprintGeneratedClass BP_Crop_Plot_Base.BP_Crop_Plot_Base_C
struct ABP_Crop_Plot_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* FoilageCulling; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct USceneComponent* CropSnappingPoint; 
	struct UStaticMeshComponent* Crop; 
	struct UFMODEvent* FMODEvent_Watering; 
	struct TMap<struct UCultivation*, struct UStaticMeshComponent*> Cultivations; 
	int32_t GlasshousePieceThreshold; 
	int32_t OutsideModifierID; 
	int32_t GlassHouseModifierID; 
	int32_t WateredModifierUID; 
	bool SoilWet; 
	int32_t EnergyModifierUID; 
	struct UMaterialInterface* SoilMatDry; 
	struct UMaterialInterface* SoilMatWet; 
	int32_t SoilMatID; 
	bool bHasGlasshouseModifier; 
	bool bHasSunlightModifier; 
	bool bHasNoSunModifier; 
	int32_t NoSunModifierID; 
	int32_t CurrentGlasshousePieces; 
	int32_t GlasshousePiecesRequiredForSunBonus; 
	bool bHasBiomeExposureModifier; 
	int32_t BiomeExposureModifierUID; 
	struct FAtmospheresEnum CurrentBiomeEnum; 
	bool SeedIsCorrectBiome; 
	struct FBiomesRowHandle CurrentBiome; 
	int32_t CurrentWaterModifierEffectiveness; 
	bool bHasWaterConnectionModifier; 
	float WaterDisconnectedModifierStayTime; 
	int32_t CultivationsHealth; 
	int32_t CultivationsMaxHealth; 
	bool CurrentlyGrowingOutside; 

	void GetTooltipRenderLocation(struct FHitResult InteractableHit, struct FVector& WorldLocation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void GetTooltipClassOverride(struct TSoftClassPtr<UObject>& ClassOverride); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetCropPlotValues(struct TArray<struct FCultivationSaveData>& SaveData); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HasAliveCrops(bool& CropsAlive); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ScaleBasedOnQuality(struct FItemData Input, struct FItemData& Output); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateQuality(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckWantsFlow(bool& WantsFlow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateWantsFlow(); // (Public|BlueprintCallable|BlueprintEvent)
	void RemoveBiomeExposureModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void ApplyBiomeExposureModifier(struct FModifierStatesRowHandle Modifier, int32_t Effectiveness); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CacheBiomeType(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFertilizerModifier(struct UModifierStateComponent*& Modifier); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsFertilized(bool& Fertilized); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetSoilState(bool bWet); // (Public|BlueprintCallable|BlueprintEvent)
	void CanHarvestAny(bool& CanHarvest); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void HasAnySeeds(bool& IsSeeded); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ClearCultivation(int32_t Cultivation); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateEnergyConnectionModifier(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateWaterConnectionModifier(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FertilizePlot(struct FItemData FertilizerItem, bool& Fertalized); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanFertilize(bool& CanBeFertilized); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlaySound(struct UFMODEvent* FMODEvent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAudioData(struct FFarmingSeedAudioData& Data); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_SoilWet(); // (BlueprintCallable|BlueprintEvent)
	void UpdateGlasshouseAndOutsideModifiers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanHarvest(struct UStaticMeshComponent* StaticMeshComponent, bool& CanHarvest); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void GetCultivationFromMesh(struct UStaticMeshComponent* StaticMesh, struct UCultivation*& Cultivation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void SetupCultivations(struct TMap<struct UCultivation*, struct UStaticMeshComponent*>& Cultivations); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HasSeed(int32_t Cultivation, bool& IsSeeded); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void CanPlantSeed(struct FItemData& ItemData, int32_t Cultivation, bool& CanPlant); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlantSeed(struct FItemData NewSeed, int32_t Cultivation, struct AIcarusPlayerCharacter* Player, bool& Planted); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HarvestResource(struct AActor* HarvestingActor, struct UStaticMeshComponent*& StaticMeshComponent, bool bUsingSickle, struct UInventory* NonPlayerInventoryX, bool& Harvested); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnLoaded_002CDE2F457F54BDFC92D7AEFED0E4AA(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Snow(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Sand(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Ash(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnSeedUpdated(struct UCultivation* Cultivation, struct FFarmingSeedsRowHandle FarmingSeed); // (BlueprintCallable|BlueprintEvent)
	void OnGrowthStateUpdated(struct UCultivation* Cultivation, enum class EPlantGrowthStates GrowthState); // (BlueprintCallable|BlueprintEvent)
	void UpdateCultivationMesh(struct UCultivation* Cultivation); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void Rain(int32_t Millilitres); // (Public|BlueprintCallable|BlueprintEvent)
	void OnModifierUpdated(struct UModifierStateComponent* Component, bool bRemoved); // (BlueprintCallable|BlueprintEvent)
	void ManuallyWater(); // (BlueprintCallable|BlueprintEvent)
	void PlaySeedPlantedFX(); // (BlueprintCallable|BlueprintEvent)
	void PlayHarvestFX(); // (BlueprintCallable|BlueprintEvent)
	void PlayClearPlotFX(); // (BlueprintCallable|BlueprintEvent)
	void MULTI_PlaySound(struct UFMODEvent* FMODEvent); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI_PlayItemAddedAudio(struct FItemsStaticRowHandle Item); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void PlayFertilizerFX(struct FItemsStaticRowHandle Item); // (BlueprintCallable|BlueprintEvent)
	void PlayWateringFX(); // (BlueprintCallable|BlueprintEvent)
	void SetCropPlotValues(struct TArray<struct FCultivationSaveData>& SaveData); // (Event|Public|HasOutParms|BlueprintEvent)
	void DEBUG_PrintInfoLoop(); // (BlueprintCallable|BlueprintEvent)
	void DelayedUpdateWaterModifier(); // (BlueprintCallable|BlueprintEvent)
	void Multi_CropStormDamage(bool Destroyed); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ResourceChanged(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Crop_Plot_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

