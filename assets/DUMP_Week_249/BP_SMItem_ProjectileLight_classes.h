// BlueprintGeneratedClass BP_SMItem_ProjectileLight.BP_SMItem_ProjectileLight_C
struct ABP_SMItem_ProjectileLight_C : AStaticItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMODAudio_FlareFire; 
	struct UNiagaraComponent* NS_Flare; 
	struct UPointLightComponent* PointLight_Small; 
	struct UPointLightComponent* PointLight_Large; 
	float FadeOutAlpha_Alpha_93637D8B455D4A6DBC6BFCB2E10D9CEE; 
	enum class ETimelineDirection FadeOutAlpha__Direction_93637D8B455D4A6DBC6BFCB2E10D9CEE; 
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
	void ExecuteUbergraph_BP_SMItem_ProjectileLight(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

