// BlueprintGeneratedClass BP_Modifier_Modify_Effectiveness.BP_Modifier_Modify_Effectiveness_C
struct UBP_Modifier_Modify_Effectiveness_C : UBP_Modifier_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void CalculateEffectiveness(int32_t& Effectiveness); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Modifier_Modify_Effectiveness(int32_t EntryPoint); // (Final|UbergraphFunction)
};

