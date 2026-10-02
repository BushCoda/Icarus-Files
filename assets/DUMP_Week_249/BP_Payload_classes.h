// BlueprintGeneratedClass BP_Payload.BP_Payload_C
struct ABP_Payload_C : AIcarusPayload {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	float BaseDamage; 

	void TryPlayAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Payload(int32_t EntryPoint); // (Final|UbergraphFunction)
};

