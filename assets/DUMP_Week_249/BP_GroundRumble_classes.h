// BlueprintGeneratedClass BP_GroundRumble.BP_GroundRumble_C
struct ABP_GroundRumble_C : ABP_BossAction_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* CurrentSystem; 
	int32_t NumEruptions; 
	struct TArray<struct FVector> EruptionPoints; 
	float EruptionDelay; 
	float EruptionDelayDeviation; 
	struct TArray<struct FTimerHandle> DelayedEruptionHandles; 
	int32_t CurrentEruptionIndex; 
	struct TArray<struct UNiagaraComponent*> PreEruptionParticles; 
	struct TArray<float> EruptionTimes; 
	struct FRandomStream RandomStream; 

	void DoEruption(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnPreEruptionFX(struct TArray<struct FVector>& Array); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupEruptions(int32_t EruptionCount); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateEruptionTargets(struct TArray<struct FVector>& EruptionPoints); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void EruptAtLocations(struct TArray<struct FVector_NetQuantize>& Locations); // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_GroundRumble(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

