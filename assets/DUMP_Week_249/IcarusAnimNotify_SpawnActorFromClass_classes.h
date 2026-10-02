// BlueprintGeneratedClass IcarusAnimNotify_SpawnActorFromClass.IcarusAnimNotify_SpawnActorFromClass_C
struct UIcarusAnimNotify_SpawnActorFromClass_C : UAnimNotify {
	struct AActor* ActorClassToSpawn; 
	struct FName SocketToSpawnAt; 
	bool SpawnOnServerOnly; 
	enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride; 

	struct FString GetNotifyName(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
};

