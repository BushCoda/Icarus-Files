// BlueprintGeneratedClass BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C
struct ABP_SkeletalItem_Wood_Flare_C : ABP_SkeletalItem_LightBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UCapsuleComponent* FireSettingCapsule; 
	struct UStaticMeshComponent* SM_TorchFire; 
	struct UPointLightComponent* PointLight_Fill; 
	struct UFMODAudioComponent* FMOD Fire Loop; 
	struct UCapsuleComponent* Hit; 
	struct FTimerHandle AudioParamUpdateHandle; 
	struct FVector LocLast; 
	struct FRotator FxFireLastCamRot; 
	float DurabilityDelay; 
	bool Use Flamey; 
	struct UFMODEvent* FMODEvent_Ignite; 
	struct UFMODEvent* FMODEvent_Douse; 
	float MinMovement; 
	float MaxMovement; 

	void GetAttachmentOffset(struct FTransform& ThirdPersonActorOffset, struct FTransform& FirstPersonActorOffset, struct FVector& ThirdPersonComponentOffset); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetThirdPersonOnlyComponents(struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetComponentToOffset(struct USceneComponent*& Component); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetStateChangeAudioOneshot(bool IsLit, struct UFMODEvent*& OneshotEvent); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent)
	void StopAudioParameterUpdates(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetLightAudioState(bool IsLit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AudioUpdateIntensity(); // (Public|BlueprintCallable|BlueprintEvent)
	void LightUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void DurabilityDamage(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Wood_Flare(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

