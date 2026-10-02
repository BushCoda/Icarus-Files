// BlueprintGeneratedClass BP_IcarusGOAPAction_EatNearbyCarcasses_Protect_Sleep.BP_IcarusGOAPAction_EatNearbyCarcasses_Protect_Sleep_C
struct UBP_IcarusGOAPAction_EatNearbyCarcasses_Protect_Sleep_C : UBP_IcarusGOAPAction_EatNearbyCarcasses_C {
	struct FName ProtectedActorKey; 
	bool SLEEP_AFTER_EATING; 

	void ForceDormant(struct AIcarusNPCGOAPController* Controller); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConditionalBuffCorpseFood(struct AIcarusNPCGOAPController* Controller); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EatFromCorpse(struct AIcarusNPCGOAPController* Controller); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

