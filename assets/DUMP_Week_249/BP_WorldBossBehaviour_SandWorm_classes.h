// BlueprintGeneratedClass BP_WorldBossBehaviour_SandWorm.BP_WorldBossBehaviour_SandWorm_C
struct UBP_WorldBossBehaviour_SandWorm_C : UBP_WorldBossBehaviour_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float MinutesBetweenTravelling; 
	float MinutesBetweenTravellingRandomDeviation; 
	float MinimumSecondsAfterCombatBeforeTravelling; 
	bool WantsToTravel; 
	float TimeSinceLastCombat; 
	struct ABP_WorldBoss_SandWorm_MovementProxy_C* TravelProxyActor; 
	struct FVector TravelDestination; 
	float UnitsPerSecondTravelSpeed; 
	float LandscapeProjectionHeight; 
	float MaxTravelDistance; 
	bool UseMaxTravelDistance; 

	void IsTravelling(bool& Travelling); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetSpawnedSandWorm(struct ABP_FactionBoss_SandWorm_C*& Sandworm); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsDestinationValid(struct FVector TargetDestination, bool& Valid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FinishTravel(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickTravel(float DeltaSeconds); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BeginTravel(bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnAIBecomeRelevant(); // (Event|Public|BlueprintEvent)
	void OnAIBecomeIrrelevant(); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void StartTravelCountdown(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void UpdateSpawnerTransform(struct FTransform NewTransform); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_WorldBossBehaviour_SandWorm(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

