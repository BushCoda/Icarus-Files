// BlueprintGeneratedClass BP_Tame_Boar.BP_Tame_Boar_C
struct ABP_Tame_Boar_C : ABP_Tame_Base_C {
	struct UCapsuleComponent* CriticalArea_Tusk2; 
	struct UCapsuleComponent* CriticalArea_Tusk1; 
	struct USceneComponent* Alert; 

	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

