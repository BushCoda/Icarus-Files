// BlueprintGeneratedClass BP_SlugLauncher_Ammo.BP_SlugLauncher_Ammo_C
struct ABP_SlugLauncher_Ammo_C : ASkeletalProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_SlugLauncher_FX; 
	struct UMaterialInstanceDynamic* DynamicMaterial; 
	struct TArray<struct FLinearColor> Colors; 
	struct TArray<struct UMaterialInterface*> ProjectileMaterials; 
	struct TArray<struct UMaterialInterface*> RibbonMaterials; 
	struct TArray<struct FLinearColor> ColorsOverwrite; 

	void FindAmmoType(struct UObject* Object, enum class ESlugLauncherAmmoType& SlugAmmoType); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnProjectileDeactivated(); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SlugLauncher_Ammo(int32_t EntryPoint); // (Final|UbergraphFunction)
};

