// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Pacificity.BP_IcarusGOAPMotivation_Pacificity_C
struct UBP_IcarusGOAPMotivation_Pacificity_C : UBP_IcarusGOAPMotivation_Base_C {
	int32_t Count; 
	float Delta; 
	float DecreasePerMinute; 
	bool bIsHungry; 
	bool bIsAngry; 
	int32_t UID; 

	bool UpdateCost(float Delta, struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

