// BlueprintGeneratedClass BP_DeployableBehaviour_LargeDeployable.BP_DeployableBehaviour_LargeDeployable_C
struct UBP_DeployableBehaviour_LargeDeployable_C : UDeployableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusItem* OriginalDeployable; 
	struct AIcarusItem* SpawnedDeployable; 
	float DeployableRadius; 

	void OnDeploy(struct ADeployable* SpawnedDeployable); // (Public|BlueprintCallable|BlueprintEvent)
	void OnOriginalDeployableDestroy(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void OnHeldDeployableDestroy(struct AActor* HeldDeployable); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseHeldDeployment(struct ADeployable* OriginalDeployable); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_DeployableBehaviour_LargeDeployable(int32_t EntryPoint); // (Final|UbergraphFunction)
};

