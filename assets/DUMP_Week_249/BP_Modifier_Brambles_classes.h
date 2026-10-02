// BlueprintGeneratedClass BP_Modifier_Brambles.BP_Modifier_Brambles_C
struct UBP_Modifier_Brambles_C : UBP_Modifier_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EIcarusDamageType DamageType; 
	struct TSet<struct AActor*> BramblesInRange; 
	float LastDistance; 

	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Modifier_Brambles(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

