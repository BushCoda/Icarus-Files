// BlueprintGeneratedClass BP_NPC_WolfDesert_Character.BP_NPC_WolfDesert_Character_C
struct ABP_NPC_WolfDesert_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct UGFurComponent* GFur; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 

	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

