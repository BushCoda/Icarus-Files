// BlueprintGeneratedClass BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C
struct UBP_Actionable_FlameThrower_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 
	struct AActor* OwningActor; 
	struct ABP_SkeletalItem_FlameThrower_Small_C* SKItem; 
	bool DoFire; 
	struct UFMODAudioComponent* FMOD_Audio_Component; 
	int32_t DamageRange; 
	struct UFMODEvent* FlamethrowerAudio; 
	int32_t FillablePerTick; 

	void GetCurrentAmmoInfo(struct TSoftObjectPtr<UTexture2D>& AmmoIcon, struct FText& CurrentAmmo, struct FText& TotalAmmo, struct FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, struct FIcarusResourcesRowHandle& Resource, float& Percent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessDamage(); // (Public|BlueprintCallable|BlueprintEvent)
	void ProcessFuel(); // (Public|BlueprintCallable|BlueprintEvent)
	void CanFire(bool& CanFire); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TickTimer(); // (Public|BlueprintCallable|BlueprintEvent)
	void SphereTrace(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void Multi_SpawnFX(struct FVector ImpactPoint, struct FVector ImpactNormal); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void StopFire(); // (BlueprintCallable|BlueprintEvent)
	void PlayCameraShake(bool Initial); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Actionable_FlameThrower(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

