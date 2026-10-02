// BlueprintGeneratedClass BP_AI_DPSTest.BP_AI_DPSTest_C
struct UBP_AI_DPSTest_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool DPSTestEnabled; 
	float FirstHit; 
	int32_t NumShots; 
	float DamageTotal; 

	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnActorDamaged(struct FIcarusDamagePacket DamagePacket); // (BlueprintCallable|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AI_DPSTest(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

