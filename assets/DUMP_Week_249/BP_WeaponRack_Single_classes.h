// BlueprintGeneratedClass BP_WeaponRack_Single.BP_WeaponRack_Single_C
struct ABP_WeaponRack_Single_C : ABP_WeaponRackBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCameraComponent* Camera; 
	struct USkeletalMeshComponent* WeaponSK1; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_WeaponRack_Single(int32_t EntryPoint); // (Final|UbergraphFunction)
};

