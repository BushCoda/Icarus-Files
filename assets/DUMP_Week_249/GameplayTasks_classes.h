// Class GameplayTasks.GameplayTask
struct UGameplayTask : UObject {
	struct FName InstanceName; 
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy; 
	struct UGameplayTask* ChildTask; 

	void ReadyForActivation(); // (Final|Native|Public|BlueprintCallable)
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	void EndTask(); // (Final|Native|Public|BlueprintCallable)
};

// Class GameplayTasks.GameplayTask_ClaimResource
struct UGameplayTask_ClaimResource : UGameplayTask {

	struct UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<struct UGameplayTaskResource*> ResourceClasses, char Priority, struct FName TaskInstanceName); // (Final|Native|Static|Public|BlueprintCallable)
	struct UGameplayTask_ClaimResource* ClaimResource(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct UGameplayTaskResource* ResourceClass, char Priority, struct FName TaskInstanceName); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class GameplayTasks.GameplayTask_SpawnActor
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastInlineDelegate Success; 
	struct FMulticastInlineDelegate DidNotSpawn; 
	struct AActor* ClassToSpawn; 

	struct UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct AActor* Class, bool bSpawnOnlyOnAuthority); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // (Native|Public|BlueprintCallable)
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct AActor*& SpawnedActor); // (Native|Public|HasOutParms|BlueprintCallable)
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastInlineDelegate OnFinished; 
	struct FMulticastInlineDelegate OnTimeExpired; 
};

// Class GameplayTasks.GameplayTask_WaitDelay
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastInlineDelegate OnFinish; 

	struct UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority); // (Final|Native|Static|Public|BlueprintCallable)
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) 
};

// Class GameplayTasks.GameplayTaskOwnerInterface
struct UGameplayTaskOwnerInterface : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; 
	int8_t AutoResourceID; 
	char bManuallySetID : 1; 
};

// Class GameplayTasks.GameplayTasksComponent
struct UGameplayTasksComponent : UActorComponent {
	char bIsNetDirty : 1; 
	struct TArray<struct UGameplayTask*> SimulatedTasks; 
	struct TArray<struct UGameplayTask*> TaskPriorityQueue; 
	struct TArray<struct UGameplayTask*> TickingTasks; 
	struct TArray<struct UGameplayTask*> KnownTasks; 
	struct FMulticastInlineDelegate OnClaimedResourcesChange; 

	void OnRep_SimulatedTasks(); // (Final|Native|Public)
	enum class EGameplayTaskRunResult K2_RunGameplayTask(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask* Task, char Priority, struct TArray<struct UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<struct UGameplayTaskResource*> AdditionalClaimedResources); // (Final|Native|Static|Public|BlueprintCallable)
};

