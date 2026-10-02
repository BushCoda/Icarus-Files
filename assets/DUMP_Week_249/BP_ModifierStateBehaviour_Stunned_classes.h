// BlueprintGeneratedClass BP_ModifierStateBehaviour_Stunned.BP_ModifierStateBehaviour_Stunned_C
struct UBP_ModifierStateBehaviour_Stunned_C : UBP_Modifier_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_Stunned(int32_t EntryPoint); // (Final|UbergraphFunction)
};

