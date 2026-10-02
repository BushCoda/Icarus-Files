// BlueprintGeneratedClass ProtectedActorProxy.ProtectedActorProxy_C
struct AProtectedActorProxy_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	struct ABP_IcarusNPCGOAPCharacter_C* Protector; 
	struct AActor* Protectee; 
	struct UActorState* ProtecteeActorState; 
	struct TArray<struct AController*> RecentAttackers; 
	struct TArray<float> RecentAttackTimes; 
	float RecentAttackLifetime; 

	void ProtectedActorProxy_ActorDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ProtectedActorProxy_ActorDied(struct UActorState* ActorState); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_ProtectedActorProxy(int32_t EntryPoint); // (Final|UbergraphFunction)
};

