// BlueprintGeneratedClass BTD_DistanceCheck.BTD_DistanceCheck_C
struct UBTD_DistanceCheck_C : UBTDecorator_BlueprintBase {
	float Distance; 
	struct FStatsRowHandle DistanceStat; 
	float OptionalMinDistance; 
	struct FBlackboardKeySelector TargetActorOrLocation; 
	struct FBlackboardKeySelector OptionalOriginKey; 
	struct FName OptionalMinDistanceKeyName; 
	struct FName AlternateOptionalDistanceKeyName; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

