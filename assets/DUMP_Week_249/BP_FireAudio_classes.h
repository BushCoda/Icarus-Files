// BlueprintGeneratedClass BP_FireAudio.BP_FireAudio_C
struct ABP_FireAudio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UAudioContextComponent* AudioContext; 
	struct UMultiPointAudioEmitter* MultiPointAudioEmitter; 
	struct UFMODEvent* FMODEvent; 
	bool Debug; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void AddFlammableInstance(struct UFlammableInstance* Instance); // (BlueprintCallable|BlueprintEvent)
	void AddNode(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void OnFireInstanceDestroyed(); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableTransferredAway(struct UFlammableInstance* Instance); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableExtinguished(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void RemoveNode(struct UFlammableInstance* Instance); // (BlueprintCallable|BlueprintEvent)
	void DelayedDestroy(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FireAudio(int32_t EntryPoint); // (Final|UbergraphFunction)
};

