// BlueprintGeneratedClass BP_ModifierStateBehaviour_Hemorrhage.BP_ModifierStateBehaviour_Hemorrhage_C
struct UBP_ModifierStateBehaviour_Hemorrhage_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_Hemorrhage(int32_t EntryPoint); // (Final|UbergraphFunction)
};

