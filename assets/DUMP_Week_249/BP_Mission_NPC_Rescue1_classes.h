// BlueprintGeneratedClass BP_Mission_NPC_Rescue1.BP_Mission_NPC_Rescue1_C
struct ABP_Mission_NPC_Rescue1_C : ABP_Mission_NPC_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_NPC_Rescue1(int32_t EntryPoint); // (Final|UbergraphFunction)
};

