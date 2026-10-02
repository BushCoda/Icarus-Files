// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
struct UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	struct UNiagaraSystem* Template; 
	struct FVector LocationOffset; 
	struct FRotator RotationOffset; 
	struct FVector Scale; 
	bool bAbsoluteScale; 
	char Attached : 1; 
	struct FName SocketName; 

	struct UFXSystemComponent* GetSpawnedEffect(); // (Final|Native|Public|BlueprintCallable|Const)
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	struct UNiagaraSystem* Template; 
	struct FName SocketName; 
	struct FVector LocationOffset; 
	struct FRotator RotationOffset; 
	bool bDestroyAtEnd; 

	struct UFXSystemComponent* GetSpawnedEffect(struct UMeshComponent* MeshComp); // (Final|Native|Public|BlueprintCallable|Const)
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
struct UAnimNotifyState_TimedNiagaraEffectAdvanced : UAnimNotifyState_TimedNiagaraEffect {

	float GetNotifyProgress(struct UMeshComponent* MeshComp); // (Final|Native|Public|BlueprintCallable|Const)
};

