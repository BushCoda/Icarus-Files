// BlueprintGeneratedClass BP_Mission_NPC_IM_Researcher2.BP_Mission_NPC_IM_Researcher2_C
struct ABP_Mission_NPC_IM_Researcher2_C : ABP_Mission_NPC_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBPC_RecoveryBeacon_C* BPC_RecoveryBeacon; 
	struct USkeletalMeshComponent* Latern; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UDecalComponent* Decal_Blood; 

	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_NPC_IM_Researcher2(int32_t EntryPoint); // (Final|UbergraphFunction)
};

