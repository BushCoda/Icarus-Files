// BlueprintGeneratedClass BP_NPC_DeerDesertLarge_Character.BP_NPC_DeerDesertLarge_Character_C
struct ABP_NPC_DeerDesertLarge_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct UCapsuleComponent* CritArea_Antler2; 
	struct UCapsuleComponent* CritArea_Antler1; 
	struct UGFurComponent* GFur; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 
	struct UMaterialInstanceDynamic* InMaterial; 

	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Get Stance Transition Montage(enum class EGOAPCharacterStance NewStance, struct UAnimMontage*& OutMontage); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

