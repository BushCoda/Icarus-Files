// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Protective.BP_IcarusGOAPMotivation_Protective_C
struct UBP_IcarusGOAPMotivation_Protective_C : UBP_IcarusGOAPMotivation_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AAITargetNode_C* TargetNodeRef; 
	float DeltaThreat; 
	struct UCurveFloat* ThreatCurve; 
	struct AActor* LastTargetActor; 

	void SpawnTargetNode(struct AController* Controller, struct AAITargetNode_C*& TargetNodeRef); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool UpdateCost(float Delta, struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnMotivationTriggerEvent(struct AIcarusNPCGOAPController* Controller, struct FGOAPMotivationTrigger& TriggeredEvent, bool bWasTriggered); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusGOAPMotivation_Protective(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

