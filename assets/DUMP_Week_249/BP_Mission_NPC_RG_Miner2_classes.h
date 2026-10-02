// BlueprintGeneratedClass BP_Mission_NPC_RG_Miner2.BP_Mission_NPC_RG_Miner2_C
struct ABP_Mission_NPC_RG_Miner2_C : ABP_Mission_NPC_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* Latern; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UDecalComponent* Decal_Blood; 
	struct UBPC_RecoveryBeacon_C* BPC_RecoveryBeacon; 

	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_NPC_RG_Miner2(int32_t EntryPoint); // (Final|UbergraphFunction)
};

