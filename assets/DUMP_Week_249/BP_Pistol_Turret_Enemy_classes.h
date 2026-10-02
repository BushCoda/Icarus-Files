// BlueprintGeneratedClass BP_Pistol_Turret_Enemy.BP_Pistol_Turret_Enemy_C
struct ABP_Pistol_Turret_Enemy_C : ABP_Basic_Turret_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void ApplyTurretStats(struct FItemsStaticRowHandle Ammo, struct FItemData& ItemData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FAIRelationshipsRowHandle GetRelationshipData(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Pistol_Turret_Enemy(int32_t EntryPoint); // (Final|UbergraphFunction)
};

