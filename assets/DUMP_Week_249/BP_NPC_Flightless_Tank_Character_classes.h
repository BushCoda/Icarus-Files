// BlueprintGeneratedClass BP_NPC_Flightless_Tank_Character.BP_NPC_Flightless_Tank_Character_C
struct ABP_NPC_Flightless_Tank_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct USphereComponent* CriticalArea_4; 
	struct UCapsuleComponent* CriticalArea_3; 
	struct UCapsuleComponent* CriticalArea_2; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 

	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

