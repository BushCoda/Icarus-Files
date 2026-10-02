// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C
struct UBP_ActionableBehaviour_Firearm_Base_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusActor* OwningActor; 
	struct AIcarusPlayerCharacterSurvival* OwningPlayer; 
	struct FFirearmData FirearmData; 
	struct FTimerHandle LateSetupTimer; 
	struct UBP_FirearmCosmeticController_C* CosmeticController; 
	bool WeaponIsReady; 
	bool ComponentInitComplete; 
	int32_t ElectricAmmoInfusionModifier; 
	struct UBP_FirearmCosmeticController_C* CosmeticControllerClass; 

	void RemoveInfusions(); // (Public|BlueprintCallable|BlueprintEvent)
	void ApplyInfusions(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ApplyInfusionCosts(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetTimeStamp(float& Timestamp); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	int32_t GetAdjustedDurabilityDamage(int32_t DurabilityLost); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetupCosmeticController(); // (Public|BlueprintCallable|BlueprintEvent)
	void StopAllAnimations(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickCameraEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void RollBoolStat(struct FStatsEnum Stat, bool& RollResult); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DamageItemDurability(int32_t Amount); // (Public|BlueprintCallable|BlueprintEvent)
	void GetOwnerMeshComponent(struct USkeletalMeshComponent*& AsSkeletal Mesh Component, bool& Valid); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayFirearmSound(struct FFirearmSoundData& FirearmSoundData); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetStat(struct FStatsEnum Stat, bool ErrorIfZero, int32_t& Value); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetAimController(struct UBP_ActionableBehaviour_Firearm_AimController_Base_C*& AimController); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetFireController(struct UBP_ActionableBehaviour_FireArm_FireController_Base_C*& FireController); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetAmmoController(struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*& AmmoController); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LocalOrServer(bool& Local, bool& Server); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetupFirearmData(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupPlayer(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupOwner(struct AIcarusActor* Owner); // (Public|BlueprintCallable|BlueprintEvent)
	void Setup(struct AIcarusActor* ForOwner); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void PreloadAssets(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void LateSetup(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void OnStatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

