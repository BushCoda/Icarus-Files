// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C
struct UBP_ModifierStateBehaviour_AfflictionFreezing_C : UBP_ModifierStateBehaviour_AfflictionCold_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float Damage; 
	struct FTimerHandle FrostbiteTimer; 

	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void UpdateBlend(); // (BlueprintCallable|BlueprintEvent)
	void DealDamage(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionFreezing(int32_t EntryPoint); // (Final|UbergraphFunction)
};

