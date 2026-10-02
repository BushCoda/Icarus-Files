// BlueprintGeneratedClass BP_CaveWorm_Spit.BP_CaveWorm_Spit_C
struct ABP_CaveWorm_Spit_C : ABP_SandWorm_Spit_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 

	void OnProjectileDeactivated(); // (Event|Public|BlueprintEvent)
	void OnProjectileActivated(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_CaveWorm_Spit(int32_t EntryPoint); // (Final|UbergraphFunction)
};

