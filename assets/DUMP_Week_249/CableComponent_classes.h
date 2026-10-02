// Class CableComponent.CableActor
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; 
};

// Class CableComponent.CableComponent
struct UCableComponent : UMeshComponent {
	bool bAttachStart; 
	bool bAttachEnd; 
	struct FComponentReference AttachEndTo; 
	struct FName AttachEndToSocketName; 
	struct FVector EndLocation; 
	float CableLength; 
	int32_t NumSegments; 
	int32_t NumSubsections; 
	float SubstepTime; 
	int32_t SolverIterations; 
	bool bEnableStiffness; 
	bool bUseSubstepping; 
	bool bSkipCableUpdateWhenNotVisible; 
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; 
	bool bEnableCollision; 
	float CollisionFriction; 
	struct FVector CableForce; 
	float CableGravityScale; 
	float CableWidth; 
	int32_t NumSides; 
	float TileMaterial; 

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // (Final|Native|Public|BlueprintCallable)
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // (Final|Native|Public|BlueprintCallable)
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct USceneComponent* GetAttachedComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct AActor* GetAttachedActor(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

