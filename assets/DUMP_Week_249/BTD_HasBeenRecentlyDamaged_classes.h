// BlueprintGeneratedClass BTD_HasBeenRecentlyDamaged.BTD_HasBeenRecentlyDamaged_C
struct UBTD_HasBeenRecentlyDamaged_C : UBTDecorator_BlueprintBase {
	int32_t MinimumDamageAmount; 
	float RecentSeconds; 
	struct FBlackboardKeySelector DamageCauserFilter; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

