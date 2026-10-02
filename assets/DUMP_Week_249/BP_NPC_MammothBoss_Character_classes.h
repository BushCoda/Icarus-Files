// BlueprintGeneratedClass BP_NPC_MammothBoss_Character.BP_NPC_MammothBoss_Character_C
struct ABP_NPC_MammothBoss_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct USphereComponent* CritArea_Tusk2; 
	struct USphereComponent* CritArea_Tusk1; 
	struct USceneComponent* StompLoc; 
	struct UGFurComponent* GFurShort; 
	struct UGFurComponent* GFurLong; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 

	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FName GetNextAttackMontageSection(struct AActor* AttackTarget); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnActionMontageNotify(struct FName NotifyName); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

