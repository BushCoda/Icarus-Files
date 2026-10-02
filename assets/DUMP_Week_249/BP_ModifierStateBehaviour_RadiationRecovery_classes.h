// BlueprintGeneratedClass BP_ModifierStateBehaviour_RadiationRecovery.BP_ModifierStateBehaviour_RadiationRecovery_C
struct UBP_ModifierStateBehaviour_RadiationRecovery_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float BaseRadiationReduction; 
	float Accumulation; 
	float Temp; 

	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_RadiationRecovery(int32_t EntryPoint); // (Final|UbergraphFunction)
};

