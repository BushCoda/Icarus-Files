// BlueprintGeneratedClass BTD_CheckDroneState.BTD_CheckDroneState_C
struct UBTD_CheckDroneState_C : UBTDecorator_BlueprintBase {
	struct TArray<enum class DroneState> DesiredStates; 
	struct FBlackboardKeySelector CurrentStateKey; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

