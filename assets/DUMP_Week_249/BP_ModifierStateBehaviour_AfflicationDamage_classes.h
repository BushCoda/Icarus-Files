// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflicationDamage.BP_ModifierStateBehaviour_AfflicationDamage_C
struct UBP_ModifierStateBehaviour_AfflicationDamage_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float Damage; 
	float DamagePercentage; 

	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflicationDamage(int32_t EntryPoint); // (Final|UbergraphFunction)
};

