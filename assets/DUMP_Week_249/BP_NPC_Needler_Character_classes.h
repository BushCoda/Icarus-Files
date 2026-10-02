// BlueprintGeneratedClass BP_NPC_Needler_Character.BP_NPC_Needler_Character_C
struct ABP_NPC_Needler_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct USceneComponent* Alert; 
	struct USkeletalMeshComponent* SK_CRE_Needler_Spikes; 
	struct FTimerHandle SpikesCooldownTimer; 

	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TryCosmeticResetNeedles(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CosmeticResetNeedles(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FName GetNextAttackMontageSection(struct AActor* AttackTarget); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

