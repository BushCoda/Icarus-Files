// BlueprintGeneratedClass BP_ModifierStateBehaviour_TickDamage_DifficultyScaled.BP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C
struct UBP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EIcarusDamageType DamageType; 

	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage_DifficultyScaled(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

