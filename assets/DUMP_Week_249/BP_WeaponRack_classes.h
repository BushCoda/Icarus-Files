// BlueprintGeneratedClass BP_WeaponRack.BP_WeaponRack_C
struct ABP_WeaponRack_C : ABP_WeaponRackBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCameraComponent* Camera; 
	struct USkeletalMeshComponent* WeaponSK1; 
	struct USkeletalMeshComponent* WeaponSK0; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_WeaponRack(int32_t EntryPoint); // (Final|UbergraphFunction)
};

