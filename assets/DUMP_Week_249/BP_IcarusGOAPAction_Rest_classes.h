// BlueprintGeneratedClass BP_IcarusGOAPAction_Rest.BP_IcarusGOAPAction_Rest_C
struct UBP_IcarusGOAPAction_Rest_C : UBP_IcarusGOAPAction_Base_C {
	bool HaveDisabledSight; 
	struct AIcarusNPCGOAPController* CachedControllerRef; 

	bool ActionReset(bool Interrupted); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ResetSightPerception(struct AAIController* Target); // (Public|BlueprintCallable|BlueprintEvent)
	bool GOAPAnimNotify(struct FString NotifyName, struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

