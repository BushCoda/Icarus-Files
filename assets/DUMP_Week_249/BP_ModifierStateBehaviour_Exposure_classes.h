// BlueprintGeneratedClass BP_ModifierStateBehaviour_Exposure.BP_ModifierStateBehaviour_Exposure_C
struct UBP_ModifierStateBehaviour_Exposure_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EIcarusDamageType DamageType; 

	void GetModifierExponentialDamage(float& Scaled Effectiveness); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitComponent(); // (Event|Public|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_Exposure(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

