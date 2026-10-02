// BlueprintGeneratedClass BP_RadBoss_Spit.BP_RadBoss_Spit_C
struct ABP_RadBoss_Spit_C : ASkeletalProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_RadBoss_SpitProjectile_FX; 

	void OnProjectileDeactivated(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_RadBoss_Spit(int32_t EntryPoint); // (Final|UbergraphFunction)
};

