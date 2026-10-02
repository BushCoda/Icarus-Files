// BlueprintGeneratedClass BP_Extractor.BP_Extractor_C
struct ABP_Extractor_C : ABP_Drill_Base_C {
	struct UGenericAITargetComponent* GenericAITarget; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UNiagaraComponent* NS_Extractor_ventFX1; 
	struct UNiagaraComponent* NS_Extractor_ventFX; 
	struct UNiagaraComponent* NS_Extractor_engineFX; 
	struct UNiagaraComponent* NS_Extractor_baseFX; 
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; 

	bool IsStealthBonusDamageDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool ShouldOverrideTargetNeutrality(struct AActor* TargetActor, enum class ERelationshipType& OutRelationshipType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsCriticalHitDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct FCriticalHitLocation> GetCriticalHitBones(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FAIRelationshipsRowHandle GetRelationshipData(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t GetTargetAlertness(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetTargetLocation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsActorAlive(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsHidden(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ActiveStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
};

