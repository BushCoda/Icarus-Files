// BlueprintGeneratedClass BP_ModifierStateBehaviour_TickDamage_Bleed.BP_ModifierStateBehaviour_TickDamage_Bleed_C
struct UBP_ModifierStateBehaviour_TickDamage_Bleed_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EIcarusDamageType DamageType; 
	int32_t StatUID; 

	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage_Bleed(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

