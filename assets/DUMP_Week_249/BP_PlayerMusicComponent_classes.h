// BlueprintGeneratedClass BP_PlayerMusicComponent.BP_PlayerMusicComponent_C
struct UBP_PlayerMusicComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; 
	struct ABP_WeatherController_C* WeatherController; 
	struct FMusicSubsystemConfig Config; 
	float TimeCondition_UpdateFrequency; 
	float TimeCondition_DawnTime; 
	float TimeCondition_DayTime; 
	float TimeCondition_DuskTime; 
	float TimeCondition_NightTime; 
	float DropTimeCondition_UpdateFrequency; 
	float DropTimeCondition_TimeRunningOutTime; 
	float DisasterCondition_UpdateFrequency; 
	struct FName FMODParam_FireIntensity; 
	float DisasterCondition_FireIntensityThreshold; 
	float PlayerStateCondition_LowHealthThreshold; 
	struct AActor* CaveOverride; 
	struct FTimerHandle WeatherMusicUpdateTimerHandle; 
	enum class EMusicConditionCombatState CombatMusicState; 
	float CombatStateCondition_UpdateFrequency; 
	int32_t CombatStateCondition_CombatStartThreshold; 
	int32_t CombatStateCondition_CombatStopThreshold; 
	enum class EMusicConditionCombatState ReplicatedMusicStateOverride; 
	int32_t ReplicatedThreatLevel; 
	struct FMusicQuestConditionsRowHandle ReplicatedQuestCondition; 
	float SmoothedThreatLevel; 
	float ThreatLevelUpdateFrequency; 
	bool PlayerIsOutOfBounds; 
	bool WantsQuestUpdate; 

	void GetBestQuestCondition(struct FMusicQuestConditionsRowHandle& QuestCondition); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_ReplicatedQuestCondition(); // (BlueprintCallable|BlueprintEvent)
	void GetConditionFromTimeOfDay(float Time, enum class EMusicConditionTimeOfDay& MusicCondition); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateOutOfBounds(struct AIcarusPlayerCharacter* Player, bool OutOfBounds); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Combat Music State(); // (Private|BlueprintCallable|BlueprintEvent)
	void ApplySmoothing(float Value, int32_t Target, float& SmoothedValue); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_ReplicatedThreatLevel(); // (BlueprintCallable|BlueprintEvent)
	void SetCombatMusicState(enum class EMusicConditionCombatState State); // (Private|BlueprintCallable|BlueprintEvent)
	void UpdateThreatLevel(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayRevivedEvent(); // (Private|BlueprintCallable|BlueprintEvent)
	void UpdateDisasterCondition(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Drop Time Condition(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Location Condition(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update Weather Condition(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update Time Condition(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Player State Condition(struct UActorState* ActorState, float NewHealth); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void OnEnteredCave(struct AActor* Cave); // (BlueprintCallable|BlueprintEvent)
	void OnExitedCave(); // (BlueprintCallable|BlueprintEvent)
	void Server_ReadyForReplication(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void HandleQuestUpdated(struct AQuest* Quest); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_PlayerMusicComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

