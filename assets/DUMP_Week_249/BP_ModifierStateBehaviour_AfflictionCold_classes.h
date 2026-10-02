// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C
struct UBP_ModifierStateBehaviour_AfflictionCold_C : UBP_Modifier_TemperatureClear_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAfflictionChanceRowHandle Affliction; 

	float GetPostProcessBlendWeights(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateBlend(); // (BlueprintCallable|BlueprintEvent)
	void StartFrostnipTimer(); // (BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void FrostnipTimer(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionCold(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

