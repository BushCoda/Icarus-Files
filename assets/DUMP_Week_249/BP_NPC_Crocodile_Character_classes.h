// BlueprintGeneratedClass BP_NPC_Crocodile_Character.BP_NPC_Crocodile_Character_C
struct ABP_NPC_Crocodile_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct USceneComponent* Alert; 
	struct UCapsuleComponent* CritArea_Eyes; 
	struct UCapsuleComponent* CritArea_Neck1; 
	struct UCapsuleComponent* CritArea_Spine5; 
	struct UCapsuleComponent* CritArea_Tail1; 
	struct UCapsuleComponent* CritArea_Tail2; 
	struct UCapsuleComponent* CritArea_Tail6; 
	struct UCapsuleComponent* CritArea_MouthBot; 
	struct UCapsuleComponent* CritArea_MouthTop; 
	struct UCapsuleComponent* CritArea_Spine4; 
	struct UCapsuleComponent* CritArea_Tail8; 
	struct UCapsuleComponent* CritArea_Tail4; 
	struct UCapsuleComponent* CritArea_Spine1; 

	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FName GetNextAttackMontageSection(struct AActor* AttackTarget); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

