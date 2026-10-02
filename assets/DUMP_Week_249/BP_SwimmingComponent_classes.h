// BlueprintGeneratedClass BP_SwimmingComponent.BP_SwimmingComponent_C
struct UBP_SwimmingComponent_C : UFloatableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsOverlappingWater; 
	bool CharacterIsDead?; 
	float SurfacingVelocity; 
	bool SwimUp; 
	bool SlowImpact; 
	int32_t SwimmingModifierUID; 
	float SwimHeight; 
	float WetHeight; 
	int32_t WetModifierUID; 
	bool WetActive; 
	int32_t LavaModifierUID; 
	struct TMap<struct FModifierStatesRowHandle, int32_t> WetModifiers; 
	int32_t ShallowModifierUID; 

	void TryRemoveModifier(int32_t& UIDRef); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TryAddModifier(int32_t& UIDRef, struct FModifierStatesRowHandle Modifier); // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddWetModifier(struct FModifierStatesRowHandle Modifier); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetOverlapSetup(struct FWaterSetupRowHandle& Setup); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TryRemoveWetModifiers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryAddWetModifiers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateSwimmingState(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_IsOverlappingWater(); // (BlueprintCallable|BlueprintEvent)
	void StopSwimming(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateState(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateOverlappedState(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void MovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SwimmingComponent(int32_t EntryPoint); // (Final|UbergraphFunction)
};

