// BlueprintGeneratedClass BP_NPC_Tusker_Character.BP_NPC_Tusker_Character_C
struct ABP_NPC_Tusker_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct UCapsuleComponent* CritArea_Tusk3; 
	struct UCapsuleComponent* CritArea_Tusk2B; 
	struct UCapsuleComponent* CritArea_Tusk1B; 
	struct UCapsuleComponent* CritArea_Tusk2; 
	struct UCapsuleComponent* CritArea_Tusk1; 
	struct UGFurComponent* GFur; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 

	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Get Stance Transition Montage(enum class EGOAPCharacterStance NewStance, struct UAnimMontage*& OutMontage); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

