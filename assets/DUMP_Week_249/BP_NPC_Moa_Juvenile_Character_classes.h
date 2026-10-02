// BlueprintGeneratedClass BP_NPC_Moa_Juvenile_Character.BP_NPC_Moa_Juvenile_Character_C
struct ABP_NPC_Moa_Juvenile_Character_C : ABP_IcarusNPCGOAPCharacter_Juvenile_C {
	struct UGFurComponent* GFur; 
	struct AActor* ViewTargetActor_1; 

	bool IsPointWithinFOV_1(struct FVector TargetLocation, float DotLimit); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct AActor* GetCurrentAnimationTarget_1(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

