// BlueprintGeneratedClass BP_StaticItem_TreePrimitive_Burnt.BP_StaticItem_TreePrimitive_Burnt_C
struct ABP_StaticItem_TreePrimitive_Burnt_C : ABP_StaticItem_TreePrimitive_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class ETreePrimitiveType OriginalPrimitiveType; 
	bool HasBegunRootCollision; 
	struct UFMODEvent* FMODEvent_Falling; 
	struct UFMODAudioComponent* FallingSound; 
	struct UFMODEvent* FMODEvent_Land; 
	float FallingSoundTimeoutTime; 
	float FallingSoundTimeoutLength; 
	bool HasLanded; 

	void PlayLandSound(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanLandOnTarget(struct AActor* HitActor, struct USceneComponent* HitComponent, bool& CanLand); // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsReadyToLand(bool& ReadyToLand); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateFallingSound(float Delta Seconds); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateRootCollision(struct FVector HitLocation); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialize(struct FItemRewardsRowHandle RewardsRowHandle, bool SubdivideImmediately, bool SubdivideCopyMeshTransform, struct FTreePrimitiveSubdivideMeshes SubdivideMeshes, struct UStaticMeshComponent* Instigator, bool EnableHitEvents, float AngularDampingZ, float MaxHealth, bool SubdivideRaycastPosition, struct UPhysicalMaterial* PhysicalMaterialOverride); // (Public|BlueprintCallable|BlueprintEvent)
	void TryPlayCollisionSound(struct FVector Impulse, struct FHitResult& Hit); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_StaticItem_TreePrimitive_Burnt(int32_t EntryPoint); // (Final|UbergraphFunction)
};

