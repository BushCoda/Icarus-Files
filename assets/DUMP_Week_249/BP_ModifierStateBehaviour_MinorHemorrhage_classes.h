// BlueprintGeneratedClass BP_ModifierStateBehaviour_MinorHemorrhage.BP_ModifierStateBehaviour_MinorHemorrhage_C
struct UBP_ModifierStateBehaviour_MinorHemorrhage_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_MinorHemorrhage(int32_t EntryPoint); // (Final|UbergraphFunction)
};

