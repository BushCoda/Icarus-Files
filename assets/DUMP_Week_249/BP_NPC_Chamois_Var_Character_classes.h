// BlueprintGeneratedClass BP_NPC_Chamois_Var_Character.BP_NPC_Chamois_Var_Character_C
struct ABP_NPC_Chamois_Var_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct UCapsuleComponent* CriticalArea_HornL3; 
	struct UCapsuleComponent* CriticalArea_Horns; 
	struct UCapsuleComponent* CriticalArea_HornL2; 
	struct UGFurComponent* GFur; 
	struct UCapsuleComponent* CriticalArea_HornL1; 
	struct UCapsuleComponent* CriticalArea_HornR1; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 

	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

