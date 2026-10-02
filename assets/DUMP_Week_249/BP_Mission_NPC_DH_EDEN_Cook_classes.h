// BlueprintGeneratedClass BP_Mission_NPC_DH_EDEN_Cook.BP_Mission_NPC_DH_EDEN_Cook_C
struct ABP_Mission_NPC_DH_EDEN_Cook_C : ABP_Mission_NPC_Reward_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* StaticMesh2; 
	struct UStaticMeshComponent* StaticMesh1; 
	struct UStaticMeshComponent* StaticMesh; 
	struct FTimerHandle Timer; 
	struct ABP_NPC_Chef_C* Shop; 

	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void FindShop(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_NPC_DH_EDEN_Cook(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

