// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Safety.BP_IcarusGOAPMotivation_Safety_C
struct UBP_IcarusGOAPMotivation_Safety_C : UBP_IcarusGOAPMotivation_Base_C {
	struct TArray<struct AActor*> KnownSeenActors; 
	struct TArray<struct AActor*> KnownHeardActors; 
	struct UCurveFloat* DistanceCurve; 
	int32_t CallCount; 
	float TimeLastSafe; 
	float DeltaSafety; 

	bool UpdateCost(float Delta, struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

