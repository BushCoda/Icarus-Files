// BlueprintGeneratedClass BP_SQ_Private_Firing.BP_SQ_Private_Firing_C
struct ABP_SQ_Private_Firing_C : ABP_Mission_NPC_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* GunStowed; 
	struct UStaticMeshComponent* StaticMesh8; 
	struct UStaticMeshComponent* StaticMesh7; 
	struct UStaticMeshComponent* StaticMesh6; 
	struct UStaticMeshComponent* StaticMesh5; 
	struct USceneComponent* Scene; 
	struct UStaticMeshComponent* StaticMesh4; 
	struct USkeletalMeshComponent* Gun_Firing; 
	struct UStaticMeshComponent* StaticMesh3; 
	struct UStaticMeshComponent* StaticMesh2; 
	struct UStaticMeshComponent* StaticMesh1; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USkeletalMeshComponent* Armour_Head; 
	struct USkeletalMeshComponent* Armour_Legs; 
	struct USkeletalMeshComponent* Armour_Arms; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	struct USkeletalMeshComponent* Armour_Feet; 
	struct USkeletalMeshComponent* Armour_Chest; 
	bool bFiring; 
	bool bShot ; 
	bool bReady; 

	void UpdatingFiringState(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_bFiring(); // (BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnFlare(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void FireShot(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Multi_Fire(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SQ_Private_Firing(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

