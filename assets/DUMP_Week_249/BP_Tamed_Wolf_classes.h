// BlueprintGeneratedClass BP_Tamed_Wolf.BP_Tamed_Wolf_C
struct ABP_Tamed_Wolf_C : ABP_Tame_Base_C {
	struct USceneComponent* PetTarget; 
	bool IsSweepingChargeDamage; 
	struct FName ChargeAbortSection; 
	float SecondaryHitCooldown; 
	struct TMap<struct AActor*, float> SweepHitActors; 
	struct FVector LastAttackLocation; 

	bool TryAlternateAttack(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

