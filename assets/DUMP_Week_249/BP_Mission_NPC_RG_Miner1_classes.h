// BlueprintGeneratedClass BP_Mission_NPC_RG_Miner1.BP_Mission_NPC_RG_Miner1_C
struct ABP_Mission_NPC_RG_Miner1_C : ABP_Mission_NPC_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct USkeletalMeshComponent* Latern; 
	struct UDecalComponent* Decal_Blood; 

	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_NPC_RG_Miner1(int32_t EntryPoint); // (Final|UbergraphFunction)
};

