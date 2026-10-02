// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C
struct UBP_ModifierStateBehaviour_AfflictionHeat_C : UBP_Modifier_TemperatureClear_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float Damage; 
	float DamagePercentage; 
	struct FAfflictionChanceRowHandle Affliction; 

	float GetPostProcessBlendWeights(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateBlend(); // (BlueprintCallable|BlueprintEvent)
	void DealDamage(); // (BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void StartHeatstrokeTimer(); // (BlueprintCallable|BlueprintEvent)
	void HeatstrokeTimer(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionHeat(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

