// BlueprintGeneratedClass BTD_ArePawnsNearby.BTD_ArePawnsNearby_C
struct UBTD_ArePawnsNearby_C : UBTDecorator_BlueprintBase {
	float NearbyDistance; 
	bool FilterByRelationship; 
	enum class ERelationshipType RelationshipFilter; 
	struct FBlackboardKeySelector DebugKey; 
	int32_t RequiredNumberNearby; 
	bool AlivePawnsOnly; 
	struct FStatsEnum NearbyDistanceStatOverride; 
	struct FName CharacterLocationSourceBone; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

