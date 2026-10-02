// BlueprintGeneratedClass BP_Fireball.BP_Fireball_C
struct ABP_Fireball_C : ASkeletalProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UNiagaraComponent* NS_Projectile_Fireball; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Fireball(int32_t EntryPoint); // (Final|UbergraphFunction)
};

