// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C
struct UBP_IcarusGOAPMotivation_Aggression_C : UBP_IcarusGOAPMotivation_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCurveFloat* DistanceCurve; 
	float TimeLastSafe; 
	struct AAITargetNode_C* TargetNodeRef; 
	struct AActor* LastHostileTarget; 
	float PerSecondAggressionDecrease; 
	float DecreaseDelta; 

	void SpawnTargetNode(struct AController* Controller, struct AAITargetNode_C*& TargetNode); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool UpdateCost(float Delta, struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnMotivationTriggerEvent(struct AIcarusNPCGOAPController* Controller, struct FGOAPMotivationTrigger& TriggeredEvent, bool bWasTriggered); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusGOAPMotivation_Aggression(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

