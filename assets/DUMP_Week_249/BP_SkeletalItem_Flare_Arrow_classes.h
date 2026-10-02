// BlueprintGeneratedClass BP_SkeletalItem_Flare_Arrow.BP_SkeletalItem_Flare_Arrow_C
struct ABP_SkeletalItem_Flare_Arrow_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Sphere; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Large; 
	struct UFMODAudioComponent* FMODAudio_FlareFire; 
	struct UNiagaraComponent* NS_FlareSmoke; 
	struct UNiagaraComponent* NS_Flare; 
	struct UPointLightComponent* PointLight_Small; 
	float FadeOutAlpha_Alpha_50615BAF46C331FB886E4E9DFD4FB757; 
	enum class ETimelineDirection FadeOutAlpha__Direction_50615BAF46C331FB886E4E9DFD4FB757; 
	struct UTimelineComponent* FadeOutAlpha; 
	bool IsPreviewActor; 
	enum class PreviewActorType PreviewType; 
	struct FTimerHandle ParticleLifetimeTimer; 
	float LightLargeIntensity; 
	float LightSmallIntensity; 

	void OnRep_PreviewType(); // (BlueprintCallable|BlueprintEvent)
	void FadeOutAlpha__FinishedFunc(); // (BlueprintEvent)
	void FadeOutAlpha__UpdateFunc(); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void InitArrow(); // (BlueprintCallable|BlueprintEvent)
	void OnProjectileFired(struct FVector Impulse, struct FVector InstigatorVelocity, struct FProjectileFireParams AdvancedParameters); // (BlueprintCallable|BlueprintEvent)
	void SetItemVisible(bool bVisible); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void FadeOutParticleEffects(); // (BlueprintCallable|BlueprintEvent)
	void OnPayloadDeploy(); // (BlueprintCallable|BlueprintEvent)
	void MULTI_BeginDelayedCleanup(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Flare_Arrow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

