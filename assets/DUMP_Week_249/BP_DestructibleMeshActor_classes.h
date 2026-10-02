// BlueprintGeneratedClass BP_DestructibleMeshActor.BP_DestructibleMeshActor_C
struct ABP_DestructibleMeshActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UDestructibleComponent* Destructible; 
	struct USceneComponent* DefaultSceneRoot; 
	struct UDestructibleMesh* DestructibleMesh; 
	bool FaultFound; 
	float ImpulseMultiplier; 
	struct FVector ImpulseLocationOverride; 
	bool Replicates; 
	bool EnableCollision; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void CheckMaterials(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_DestructibleMeshActor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

