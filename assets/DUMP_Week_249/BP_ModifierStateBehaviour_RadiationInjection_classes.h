// BlueprintGeneratedClass BP_ModifierStateBehaviour_RadiationInjection.BP_ModifierStateBehaviour_RadiationInjection_C
struct UBP_ModifierStateBehaviour_RadiationInjection_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float BaseRadiationReduction; 

	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_RadiationInjection(int32_t EntryPoint); // (Final|UbergraphFunction)
};

