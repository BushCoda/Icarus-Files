// BlueprintGeneratedClass BTD_DistanceCheckRange.BTD_DistanceCheckRange_C
struct UBTD_DistanceCheckRange_C : UBTDecorator_BlueprintBase {
	float MinDistance; 
	float MaxDistance; 
	struct FBlackboardKeySelector TargetActorOrLocation; 
	struct FBlackboardKeySelector OptionalOriginKey; 
	struct FBlackboardKeySelector MinDistanceKey; 
	struct FBlackboardKeySelector MaxEngageDistanceKey; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

