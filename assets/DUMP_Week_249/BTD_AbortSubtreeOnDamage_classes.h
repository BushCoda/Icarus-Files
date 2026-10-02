// BlueprintGeneratedClass BTD_AbortSubtreeOnDamage.BTD_AbortSubtreeOnDamage_C
struct UBTD_AbortSubtreeOnDamage_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UActorState* OwnerActorState; 
	int32_t TotalDamageTaken; 
	int32_t DamageThreshold; 
	struct FGameplayTag TagToApplyOnAbort; 
	float TagDuration; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnOwnerDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult NodeResult); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTD_AbortSubtreeOnDamage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

