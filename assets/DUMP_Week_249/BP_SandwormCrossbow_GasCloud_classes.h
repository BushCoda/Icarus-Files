// BlueprintGeneratedClass BP_SandwormCrossbow_GasCloud.BP_SandwormCrossbow_GasCloud_C
struct ABP_SandwormCrossbow_GasCloud_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USphereComponent* Sphere; 
	struct UNiagaraComponent* Niagara; 
	struct USceneComponent* DefaultSceneRoot; 
	float ParticleLifetime; 
	float ModifierLifetime; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void BndEvt__BP_ApeFartCloud_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void CheckForOverlaps(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SandwormCrossbow_GasCloud(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

