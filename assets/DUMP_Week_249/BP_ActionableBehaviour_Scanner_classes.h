// BlueprintGeneratedClass BP_ActionableBehaviour_Scanner.BP_ActionableBehaviour_Scanner_C
struct UBP_ActionableBehaviour_Scanner_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacterSurvival* BehaviourOwner; 
	struct AIcarusItem* IcarusItem; 
	float ScanningIntensity; 
	struct TArray<struct AActor*> NearbyActors; 
	float MaxScanningRange; 
	bool UseDistance; 
	struct UCurveFloat* ProximityItensityCurve; 
	bool UseDirection; 
	struct UCurveFloat* DirectionIntensityCurve; 
	struct FTimerHandle NearbyActorsHandle; 
	float NearbyActorsFrequency; 
	struct AActor* ClassToScan; 
	float MaxDirectionAngle; 
	bool ShowClosestAngle; 
	struct UCurveFloat* ClosestAngleOffsetCurve; 
	float ClosestAngle; 
	float MaxExtraNoiseMultiplier; 
	float ClosestAngleNoise; 
	float MaxAngleOffset; 
	struct FVector2D AngleOffsetDelayFrequency; 
	struct UCurveFloat* BeepingCurve; 
	float BeepingIntensity; 

	void GetTrackedActor(struct AActor*& Item); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetActors(struct TArray<struct AActor*>& OutActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FilterActors(struct TArray<struct AActor*>& Actors, struct TArray<struct AActor*>& Filtered); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct TArray<struct AActor*> ExtraNearbyFilter(struct TArray<struct AActor*>& InNearbyActors); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void LocalOrServer(bool& Local, bool& Server); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateScanningIntensity(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateNearbyActors(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Scanner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

