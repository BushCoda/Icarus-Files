// BlueprintGeneratedClass BP_Meteor.BP_Meteor_C
struct ABP_Meteor_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UPostProcessComponent* PostProcessExplode; 
	struct UPostProcessComponent* PostProcessInFlight; 
	struct USphereComponent* SphereCollider; 
	struct UFMODAudioComponent* MeteorTravelAudio; 
	struct UPointLightComponent* PointLight; 
	struct UStaticMeshComponent* Meteor_Mesh_Layer; 
	struct UStaticMeshComponent* Meteor_Mesh; 
	struct USceneComponent* DefaultSceneRoot; 
	float Timeline_ImpactPostProcess_FlashWeight_F83D4CAF4752A4E37BFA2BA54C8C4722; 
	float Timeline_ImpactPostProcess_BlendWeight_F83D4CAF4752A4E37BFA2BA54C8C4722; 
	enum class ETimelineDirection Timeline_ImpactPostProcess__Direction_F83D4CAF4752A4E37BFA2BA54C8C4722; 
	struct UTimelineComponent* Timeline_ImpactPostProcess; 
	float Timeline_MeteorVfx_PP_Blendweight_DFEA73F04AA3426CA0E841A5056E70A1; 
	float Timeline_MeteorVfx_LightIntensity_DFEA73F04AA3426CA0E841A5056E70A1; 
	float Timeline_MeteorVfx_EntryMeshOpacity_DFEA73F04AA3426CA0E841A5056E70A1; 
	float Timeline_MeteorVfx_EntryMeshIntensity_DFEA73F04AA3426CA0E841A5056E70A1; 
	float Timeline_MeteorVfx_EntryMeshHeat_DFEA73F04AA3426CA0E841A5056E70A1; 
	enum class ETimelineDirection Timeline_MeteorVfx__Direction_DFEA73F04AA3426CA0E841A5056E70A1; 
	struct UTimelineComponent* Timeline_MeteorVfx; 
	float METEOR_SPEED_SCALAR; 
	float TimeElapsed; 
	float TimeOfFlight; 
	struct FVector DestPos; 
	struct FVector StartPos; 
	struct FVector MeteorSpin; 
	struct FRotator DepositRotation; 
	int32_t MetaResouceAmount; 
	struct FMetaResourceNodesRowHandle MetaResourceRow; 
	struct FVector MeteorDirection; 
	struct UMaterialInstanceDynamic* MeteorDynamicMaterial; 
	struct UCurveFloat* Curve_TimeOfDayMultiplier; 
	float CurrentTimeOfDay; 
	struct UMaterialInstanceDynamic* PostProcessDynamicMaterial; 
	bool IsExploding; 
	bool DelayDone; 
	struct FVector LastCheckedPos; 

	void CheckForPlayersThatCanSeeMeteor(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetInitialMeteorPosDir(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoMove(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoInit(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoExplode(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Timeline_MeteorVfx__FinishedFunc(); // (BlueprintEvent)
	void Timeline_MeteorVfx__UpdateFunc(); // (BlueprintEvent)
	void Timeline_ImpactPostProcess__FinishedFunc(); // (BlueprintEvent)
	void Timeline_ImpactPostProcess__UpdateFunc(); // (BlueprintEvent)
	void OnLoaded_72A10B284232D82F40CBF5981917AE35(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void SpawnMetaDeposit(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void Multi_MeteorTravelVFX(float ServerTimeOfFlight); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Multi_PlayMeteorHitVFX(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Meteor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

