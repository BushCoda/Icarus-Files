// BlueprintGeneratedClass BP_Modifier_Aura_Base.BP_Modifier_Aura_Base_C
struct UBP_Modifier_Aura_Base_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool DebugRender; 

	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Modifier_Aura_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
};

