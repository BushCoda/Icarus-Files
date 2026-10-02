// BlueprintGeneratedClass BP_Modifier_Aura_Radioactive.BP_Modifier_Aura_Radioactive_C
struct UBP_Modifier_Aura_Radioactive_C : UBP_Modifier_Aura_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_Radiation_Sphere_01_C* RadiationEffect; 
	int32_t EffectSize; 

	void UpdateRadiationSphere(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_EffectSize(); // (BlueprintCallable|BlueprintEvent)
	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Modifier_Aura_Radioactive(int32_t EntryPoint); // (Final|UbergraphFunction)
};

