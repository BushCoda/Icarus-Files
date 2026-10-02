// BlueprintGeneratedClass BP_NPC_Snow_Striker_Character.BP_NPC_Snow_Striker_Character_C
struct ABP_NPC_Snow_Striker_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct UGFurComponent* GFur; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 

	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

