// BlueprintGeneratedClass BP_Tesla_Coil.BP_Tesla_Coil_C
struct ABP_Tesla_Coil_C : ABP_Deployable_ManualToggle_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* AudioPoweredLoop; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Strike; 
	struct UNiagaraComponent* NE_Sparks_System1; 
	struct UNiagaraComponent* NE_Sparks_System; 
	struct UNiagaraComponent* NS_HeatHaze_Soft; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Stage6; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Stage5; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Stage4; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Stage3; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Stage2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Stage1; 
	struct USceneComponent* Scene_Lights; 
	struct UNiagaraComponent* NS_LightningBeam_TeslaCoil; 
	struct USceneComponent* Scene_Niagara; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct TArray<struct AIcarusCharacter*> IcarusCharacters; 
	float WarmupStageDelay; 
	enum class EDrawDebugTrace DebugMode; 
	struct FVector StartPoint; 
	struct TArray<struct AActor*> Actors to Ignore; 

	struct TArray<struct FCriticalHitLocation> GetCriticalHitBones(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FAIRelationshipsRowHandle GetRelationshipData(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t GetTargetAlertness(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetTargetLocation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsActorAlive(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsCriticalHitDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsHidden(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsStealthBonusDamageDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool ShouldOverrideTargetNeutrality(struct AActor* TargetActor, enum class ERelationshipType& OutRelationshipType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void CheckObstruction(struct AActor* SourceActor, struct FVector SourceOffset, struct AIcarusCharacter* TargetActor, struct FVector TargetOffset, bool& HitTarget); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShutdownVFX(); // (Public|BlueprintCallable|BlueprintEvent)
	void HitRandomTarget(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetTargets(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ActiveUpdated(bool bNewActive); // (Public|BlueprintCallable|BlueprintEvent)
	void SERVER_PlayWarmupVFX(); // (BlueprintCallable|BlueprintEvent)
	void MULTI_WarmupVFX(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void MULTI_FireEffects(struct FVector Location); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Tesla_Coil(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

