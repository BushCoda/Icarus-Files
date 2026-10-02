// BlueprintGeneratedClass BP_ApeGasCloud.BP_ApeGasCloud_C
struct ABP_ApeGasCloud_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USphereComponent* Sphere; 
	struct UNiagaraComponent* Niagara; 
	struct USceneComponent* DefaultSceneRoot; 
	float ParticleLifetime; 
	float ModifierLifetime; 
	float CurrentLifeDuration; 
	float STRANGE_TROOP_SCALAR; 
	float ModParticleLifetime; 
	float ModModifierLifetime; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void BndEvt__BP_ApeFartCloud_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_ApeGasCloud(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

