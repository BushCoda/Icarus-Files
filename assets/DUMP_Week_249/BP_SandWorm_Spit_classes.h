// BlueprintGeneratedClass BP_SandWorm_Spit.BP_SandWorm_Spit_C
struct ABP_SandWorm_Spit_C : ASkeletalProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_Sandworm_SpitProjectile_FX; 

	void OnProjectileDeactivated(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_SandWorm_Spit(int32_t EntryPoint); // (Final|UbergraphFunction)
};

