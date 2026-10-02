// BlueprintGeneratedClass BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C
struct ABP_SkeletalItem_Fire_Arrow_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USphereComponent* Sphere; 
	struct UFMODAudioComponent* FMODFireLoop; 
	struct UPointLightComponent* PointLight; 
	struct UNiagaraComponent* Niagara; 
	float LightFade_Float_FB55DCB2435BEBA8D3B4CE898BF4891D; 
	enum class ETimelineDirection LightFade__Direction_FB55DCB2435BEBA8D3B4CE898BF4891D; 
	struct UTimelineComponent* LightFade; 
	bool IsPreviewActor; 
	enum class PreviewActorType PreviewType; 
	float Intensity; 
	struct FTimerHandle SFX_TimerHandle; 
	struct FVector LocLast; 

	void SFX_KnockedFireMovement(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_PreviewType(); // (BlueprintCallable|BlueprintEvent)
	void LightFade__FinishedFunc(); // (BlueprintEvent)
	void LightFade__UpdateFunc(); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void InitArrow(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__Niagara_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature(struct UActorComponent* Component); // (BlueprintEvent)
	void BndEvt__BP_SkeletalItem_Fire_Arrow_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Fire_Arrow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

