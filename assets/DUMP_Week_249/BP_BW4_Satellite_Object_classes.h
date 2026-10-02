// BlueprintGeneratedClass BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C
struct ABP_BW4_Satellite_Object_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct UInventoryComponent* Inventory; 
	struct UFMODAudioComponent* DefenceAudioComponent; 
	struct USphereComponent* EnterAudioTrigger; 
	struct UNiagaraComponent* NS_FactionSatellite_V2_FX1; 
	struct UNiagaraComponent* NS_FactionSatellite_V2_FX; 
	struct UNiagaraComponent* NS_FactionSatellite_FX; 
	struct UPointLightComponent* PointLight5; 
	struct UPointLightComponent* PointLight4; 
	struct UStaticMeshComponent* Cylinder1; 
	struct UStaticMeshComponent* Cylinder; 
	struct UIcarusNavigationDirtier* IcarusNavigationDirtier; 
	struct UBP_UIProjectionComponent_C* BP_UIProjectionComponent; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_012; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_011; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_010; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_09; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_06; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_02; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_01; 
	struct UStaticMeshComponent* SM_DPS_Satellite_INARIS_Crashed_CF_Chute2; 
	struct UStaticMeshComponent* SM_DPS_Satellite_INARIS_Crashed_CF_Chute; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_08; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_07; 
	struct UStaticMeshComponent* SM_ROCK_CF_Stone_01; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_04; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_03; 
	struct UStaticMeshComponent* SM_ROCK_CF_SML_05; 
	struct UPointLightComponent* PointLight3; 
	struct UPointLightComponent* PointLight2; 
	struct UPointLightComponent* PointLight; 
	struct UPointLightComponent* PointLight1; 
	struct USkeletalMeshComponent* SM_DPS_Satellite_INARIS_Crashed_CF_CoreInt; 
	struct UStaticMeshComponent* SM_DPS_Satellite_INARIS_Crashed_CF_Ground; 
	struct UStaticMeshComponent* StaticMesh; 
	float FlickerTimeline_NewTrack_0_5897F4764DDE427A04175AB479BDCF16; 
	enum class ETimelineDirection FlickerTimeline__Direction_5897F4764DDE427A04175AB479BDCF16; 
	struct UTimelineComponent* FlickerTimeline; 
	struct UMaterialInstanceDynamic* Core Material; 
	struct UMaterialInstanceDynamic* Material1; 
	struct UMaterialInstanceDynamic* Material2; 
	struct AIcarusPlayerCharacter* LastInteractedPlayer; 
	struct UFMODEvent* FMODEvent_ArmInteraction; 
	struct UFMODEvent* FMODEvent_DefenseTimerEnded; 
	struct UFMODEvent* FMODEvent_NeedleRemoved; 
	bool IsArmed; 
	bool DefendComplete; 
	int32_t StatUID; 

	void PlaySFX(struct UFMODEvent* FMODEvent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateState(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_DefendComplete(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_IsArmed(); // (BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ActivatedStateUpdated(bool Activated, bool Defending); // (Public|BlueprintCallable|BlueprintEvent)
	void IsFunctional(bool& bFunctional); // (HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FlickerTimeline__FinishedFunc(); // (BlueprintEvent)
	void FlickerTimeline__UpdateFunc(); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnInventoryItemRemoved(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void MULTI_PlayWarheadRemovedFX(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_BW4_Satellite_Object(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

