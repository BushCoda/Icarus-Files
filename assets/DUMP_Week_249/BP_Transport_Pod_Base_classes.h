// BlueprintGeneratedClass BP_Transport_Pod_Base.BP_Transport_Pod_Base_C
struct ABP_Transport_Pod_Base_C : ABP_ContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Thruster; 
	struct UNiagaraComponent* NS_FreeFallTrail; 
	struct USceneComponent* AudioLocationAlarm; 
	struct UStaticMeshComponent* FakeLight4; 
	struct UStaticMeshComponent* FakeLight3; 
	struct UStaticMeshComponent* FakeLight2; 
	struct USpotLightComponent* SpotLight4; 
	struct USpotLightComponent* SpotLight3; 
	struct USpotLightComponent* SpotLight2; 
	struct USceneComponent* Lighting; 
	struct UStaticMeshComponent* FakeLight1; 
	struct USpotLightComponent* SpotLight1; 
	struct UCameraComponent* Camera; 
	struct UStaticMeshComponent* SM_DPS_Mission_Stockpile_Ship; 
	struct UNiagaraComponent* NS_DropshipSonicBoom; 
	struct UNiagaraComponent* NS_ShuttleLand; 
	struct USceneComponent* NiagaraTakeOffScene; 
	struct USceneComponent* NiagaraLandingScene; 
	struct UNiagaraComponent* NS_dropshipThruster; 
	struct UNiagaraComponent* NS_DropshipThrusterTakeOff; 
	struct USceneComponent* MoveDropshipRoot; 
	float Timeline_QuickTakeOff_DropshipHeight_80F18FEC4D560AC5EB30D4BA773ED02B; 
	enum class ETimelineDirection Timeline_QuickTakeOff__Direction_80F18FEC4D560AC5EB30D4BA773ED02B; 
	struct UTimelineComponent* Timeline_QuickTakeOff; 
	float Timeline_TakeOff_DropshipHeight_35BC7AA049D29F4A0D64E2A967BED091; 
	enum class ETimelineDirection Timeline_TakeOff__Direction_35BC7AA049D29F4A0D64E2A967BED091; 
	struct UTimelineComponent* Timeline_TakeOff; 
	float Timeline_2_TakeOffLighting_A9C43A5142C2E8873BB8668637303973; 
	float Timeline_2_IdleLighting_A9C43A5142C2E8873BB8668637303973; 
	enum class ETimelineDirection Timeline_2__Direction_A9C43A5142C2E8873BB8668637303973; 
	struct UTimelineComponent* Timeline_3; 
	float Timeline_0_DropshipHeight_32E3C03B41EFBF1ED672FA9CEC0001C0; 
	enum class ETimelineDirection Timeline_0__Direction_32E3C03B41EFBF1ED672FA9CEC0001C0; 
	struct UTimelineComponent* Timeline_1; 
	bool bDecending; 
	bool bAscending; 
	bool bInitialised; 
	bool bLanded; 
	struct FMulticastInlineDelegate SpawnLocationFound; 
	int32_t Minimum Distance; 
	int32_t Maximum Distance; 
	bool SpawnFound; 
	struct FMulticastInlineDelegate Landed; 
	struct UFMODEvent* AscendSound; 
	struct UFMODEvent* DescendSound; 
	struct UMaterialInstanceDynamic* LightSource; 
	struct UMaterialInstanceDynamic* LightDynamicMaterial1; 
	struct UMaterialInstanceDynamic* LightDynamicMaterial2; 
	struct UMaterialInstanceDynamic* LightDynamicMaterial3; 
	struct UMaterialInstanceDynamic* LightDynamicMaterial4; 
	bool EndRecordingOnTakeOff; 
	bool HasAssignedLandingPad; 
	struct AActor* KnockbackActorTarget; 
	struct TArray<struct AActor*> KnockbackTargets; 
	int32_t MaxKnockbackTargets; 
	struct UFMODEvent* ItemAddedSound; 

	void PodLandedEvent(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_bLanded(); // (BlueprintCallable|BlueprintEvent)
	void CleanupLingeringEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void TryToFindLandingPad(int32_t MaxDistance, struct AActor* Querier, struct UEnvQuery* Query, bool& FoundPad, struct FVector& OutLocation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void LightingController(float IdleLightIntensity, float TakeOffIntensity); // (Public|BlueprintCallable|BlueprintEvent)
	void FallBackFindSpawnLocation(int32_t MinimumDistance, int32_t MaximumDistance); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_bAscending(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_bDecending(); // (BlueprintCallable|BlueprintEvent)
	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void Timeline_0__GroundDebrisOff__EventFunc(); // (BlueprintEvent)
	void Timeline_0__GroundDebrisOn__EventFunc(); // (BlueprintEvent)
	void Timeline_0__SonicBoom__EventFunc(); // (BlueprintEvent)
	void Timeline_0__ThrusterOff__EventFunc(); // (BlueprintEvent)
	void Timeline_0__ThrusterOn__EventFunc(); // (BlueprintEvent)
	void Timeline_TakeOff__FinishedFunc(); // (BlueprintEvent)
	void Timeline_TakeOff__UpdateFunc(); // (BlueprintEvent)
	void Timeline_TakeOff__TriggerWarningAudio__EventFunc(); // (BlueprintEvent)
	void Timeline_TakeOff__CreateImpulse__EventFunc(); // (BlueprintEvent)
	void Timeline_TakeOff__GroundDebrisOff__EventFunc(); // (BlueprintEvent)
	void Timeline_TakeOff__GroundDebrisOn__EventFunc(); // (BlueprintEvent)
	void Timeline_TakeOff__ThrusterOn__EventFunc(); // (BlueprintEvent)
	void Timeline_2__FinishedFunc(); // (BlueprintEvent)
	void Timeline_2__UpdateFunc(); // (BlueprintEvent)
	void Timeline_QuickTakeOff__FinishedFunc(); // (BlueprintEvent)
	void Timeline_QuickTakeOff__UpdateFunc(); // (BlueprintEvent)
	void Timeline_QuickTakeOff__CreateImpulse__EventFunc(); // (BlueprintEvent)
	void Timeline_QuickTakeOff__GroundDebrisOff__EventFunc(); // (BlueprintEvent)
	void Timeline_QuickTakeOff__GroundDebrisOn__EventFunc(); // (BlueprintEvent)
	void Timeline_QuickTakeOff__ThrusterOn__EventFunc(); // (BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void FX_ThrusterLand(bool Active); // (BlueprintCallable|BlueprintEvent)
	void FX_ShuttleGroundDebris(bool Active); // (BlueprintCallable|BlueprintEvent)
	void FX_SonicBoom(bool Active); // (BlueprintCallable|BlueprintEvent)
	void FX_ThrusterTakeOff(bool Active); // (BlueprintCallable|BlueprintEvent)
	void Play_Audio_Descend(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Play_Audio_Ascend(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void TakeOff(); // (BlueprintCallable|BlueprintEvent)
	void LandShip(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void GenerateSpawnLocation(int32_t MinimumDistance, int32_t MaximumDistance, struct AActor* Querier, struct UEnvQuery* QueryType); // (BlueprintCallable|BlueprintEvent)
	void OnGenerateSpawnPoint(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void SpawnPointFound(struct FVector Location); // (BlueprintCallable|BlueprintEvent)
	void OnPodLanded(); // (BlueprintCallable|BlueprintEvent)
	void OnPodAscended(); // (BlueprintCallable|BlueprintEvent)
	void OnTakeOff(); // (BlueprintCallable|BlueprintEvent)
	void LightingStateChange(); // (BlueprintCallable|BlueprintEvent)
	void FX_FreefallTrail(bool Active); // (BlueprintCallable|BlueprintEvent)
	void InitDynamicMaterials(); // (BlueprintCallable|BlueprintEvent)
	void KnockBackEvent(float KnockbackForce, float KnockbackRadius, int32_t KnockbackDamage); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BP_Transport_Pod_Base_Inventory_K2Node_ComponentBoundEvent_0_InventoryItemAdded__DelegateSignature(struct UInventory* Inventory, int32_t Location); // (BlueprintEvent)
	void SetManualLandingPoint(struct FVector Location); // (BlueprintCallable|BlueprintEvent)
	void QuickTakeOff(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Transport_Pod_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Landed__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void SpawnLocationFound__DelegateSignature(struct FVector Location); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

