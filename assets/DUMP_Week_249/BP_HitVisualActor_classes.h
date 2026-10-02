// BlueprintGeneratedClass BP_HitVisualActor.BP_HitVisualActor_C
struct ABP_HitVisualActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NiagaraSystem; 
	struct UParticleSystemComponent* ParticleSystem; 
	struct USceneComponent* DefaultSceneRoot; 
	enum class EPhysicalSurface SourceSurfaceType; 
	enum class EPhysicalSurface HitSurfaceType; 
	struct AActor* HitActor; 

	void UpdateNiagaraShadows(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_49B5FA3C4DB143648AEFC3B09787C0D9(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_HitVisualActor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

