// BlueprintGeneratedClass BP_NPC_Boar_Character.BP_NPC_Boar_Character_C
struct ABP_NPC_Boar_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct UCapsuleComponent* CriticalArea_Tusk2; 
	struct UCapsuleComponent* CriticalArea_Tusk1; 
	struct UGFurComponent* GFur; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 

	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

