// BlueprintGeneratedClass BP_Modifier_Recharge.BP_Modifier_Recharge_C
struct UBP_Modifier_Recharge_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Modifier_Recharge(int32_t EntryPoint); // (Final|UbergraphFunction)
};

