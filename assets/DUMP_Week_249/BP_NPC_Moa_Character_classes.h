// BlueprintGeneratedClass BP_NPC_Moa_Character.BP_NPC_Moa_Character_C
struct ABP_NPC_Moa_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct USceneComponent* Alert; 
	struct UGFurComponent* GFur; 

	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

