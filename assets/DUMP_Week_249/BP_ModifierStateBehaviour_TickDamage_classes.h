// BlueprintGeneratedClass BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C
struct UBP_ModifierStateBehaviour_TickDamage_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EIcarusDamageType DamageType; 
	struct FStatsEnum DamageModifierStat; 
	float CachedDamageModifier; 

	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

