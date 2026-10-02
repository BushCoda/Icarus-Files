// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Enraged.BP_IcarusGOAPMotivation_Enraged_C
struct UBP_IcarusGOAPMotivation_Enraged_C : UBP_IcarusGOAPMotivation_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t CombatSecondsUntilMaximum; 
	float DeltaChange; 
	bool BlockScoreIncrease; 
	int32_t DefaultCooldownTime; 

	bool UpdateCost(float Delta, struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnMotivationTriggerEvent(struct AIcarusNPCGOAPController* Controller, struct FGOAPMotivationTrigger& TriggeredEvent, bool bWasTriggered); // (Event|Public|HasOutParms|BlueprintEvent)
	void UnblockIncrease(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusGOAPMotivation_Enraged(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

