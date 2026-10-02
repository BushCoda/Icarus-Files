// BlueprintGeneratedClass BP_SkeletalItem_Dropship_Grenade_Flare.BP_SkeletalItem_Dropship_Grenade_Flare_C
struct ABP_SkeletalItem_Dropship_Grenade_Flare_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMODAudio_FlareFire; 
	struct UNiagaraComponent* NS_FlareSmoke; 
	struct UNiagaraComponent* NS_Flare; 
	struct UPointLightComponent* PointLight_Small; 
	struct UPointLightComponent* PointLight_Large; 
	bool IsPreviewActor; 
	enum class PreviewActorType PreviewType; 

	void OnRep_PreviewType(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void InitArrow(); // (BlueprintCallable|BlueprintEvent)
	void OnProjectileFired(struct FVector Impulse, struct FVector InstigatorVelocity, struct FProjectileFireParams AdvancedParameters); // (BlueprintCallable|BlueprintEvent)
	void SetItemVisible(bool bVisible); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Multicast_HideFlareEffects(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Dropship_Grenade_Flare(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

