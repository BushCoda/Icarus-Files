// BlueprintGeneratedClass BP_SKItem_DrillArrow.BP_SKItem_DrillArrow_C
struct ABP_SKItem_DrillArrow_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* ChargedAudio; 
	struct UFMODAudioComponent* FMODAudio_ArrowFire; 
	bool IsPreviewActor; 
	enum class PreviewActorType PreviewType; 
	struct UBP_ActionableBehaviour_FireArm_FireController_Charge_C* ChargeActionable; 
	float ChargedAmount; 

	void OnRep_PreviewType(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void InitArrow(); // (BlueprintCallable|BlueprintEvent)
	void OnProjectileFired(struct FVector Impulse, struct FVector InstigatorVelocity, struct FProjectileFireParams AdvancedParameters); // (BlueprintCallable|BlueprintEvent)
	void SetItemVisible(bool bVisible); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_SKItem_DrillArrow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

