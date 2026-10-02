// BlueprintGeneratedClass BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C
struct UBP_UIProjectionComponent_Player_C : UBP_UIProjectionComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsAlive; 
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; 
	bool SettingsEnable; 
	bool StatAbilityEnable; 
	float LongDistanceDotProductLimit; 
	float LongDistanceVisibilityRange; 
	float ShortDistanceVisibilityRange; 
	bool LongDistanceVisible; 
	bool ShortDistanceVisible; 
	bool PlayerDownedVisible; 
	float RangeToSeeDowned; 

	void UpdateWidget(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateEnabled(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_IsAlive(); // (BlueprintCallable|BlueprintEvent)
	void GetWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnHealthUpdate(struct UActorState* ActorState, float NewHealth); // (BlueprintCallable|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void PlayerUIMarkerApplied(bool Value); // (BlueprintCallable|BlueprintEvent)
	void StatsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void Ticking update(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_UIProjectionComponent_Player(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

