// BlueprintGeneratedClass BP_NPCTrailComponent.BP_NPCTrailComponent_C
struct UBP_NPCTrailComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USplineComponent* SplineComponent; 
	int32_t NewPointIndex; 
	float TerrainZOffset; 
	struct FVector LastPointPosition; 
	float MinDistanceBetweenSplinePoints; 
	struct UMaterialInterface* TrailMaterial; 
	float PointLifetime; 
	struct USplineMeshComponent* LastMeshComponent; 
	struct TArray<struct USplineMeshComponent*> SplineMeshComponentArray; 
	struct TArray<float> SplineMeshLifetimeArray; 
	struct FVector2D SplineScale; 
	bool EnablePlayerOverlaps; 
	struct TMap<struct AActor*, int32_t> ActiveOverlapCount; 
	struct FMulticastInlineDelegate ActorBeginSplineOverlap; 
	struct FMulticastInlineDelegate ActorEndSplineOverlap; 
	float DisableOverlapsAtLifetimeThreshold; 
	struct FName OptionalOriginSocket; 
	bool ReportTouchEventOnContact; 
	struct TArray<struct UStaticMesh*> TrailSplineMeshes; 
	struct UStaticMesh* EndCapMesh; 
	bool UseNiagraSystem; 
	struct UNiagaraSystem* NiagaraSystem; 
	struct UCurveFloat* FadeOutCurve; 
	bool UseFadeOutCurve; 
	struct TArray<struct UNiagaraComponent*> NiagaraSystemArray; 
	bool CastMeshShadows; 
	struct FMulticastInlineDelegate NiagaraSystemAdded; 
	float NewSplineTickTime; 
	float UpdateSplineTickTime; 

	struct UStaticMesh* GetNextSplineMesh(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void RemovePointAtIndex(int32_t IndexToRemove, bool UpdateEndCap); // (Public|BlueprintCallable|BlueprintEvent)
	void GetTrailOrigin(struct FVector& WorldLocation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void DisableOverlapsOnSegment(struct USplineMeshComponent* Component); // (Public|BlueprintCallable|BlueprintEvent)
	void OnActorEndSplineOverlap(struct AActor* Actor, struct USplineMeshComponent* LastSegmentOverlap); // (Public|BlueprintCallable|BlueprintEvent)
	void OnActorBeginSplineOverlap(struct AActor* Actor, struct USplineMeshComponent* FirstSegmentOverlap); // (Public|BlueprintCallable|BlueprintEvent)
	void RemoveSplineMeshComponent(struct USplineMeshComponent* Component); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnActorEndSegmentOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void OnActorBeginSegmentOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetRemainingTimeForPointIndex(int32_t Index, float& PercentageTimeRemaining); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetNewPointExpiryTime(float& TimeInSeconds); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void InitialiseSplineMeshTransform(struct USplineMeshComponent* Target, int32_t SplinePointIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePointMaterial(int32_t PointIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void TickPoints(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetNewPointLocation(bool& Success, struct FVector& Location, struct FVector& upDirection); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void GenerateNewPoint(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_NPCTrailComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void NiagaraSystemAdded__DelegateSignature(struct UNiagaraComponent* NewSystem); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ActorEndSplineOverlap__DelegateSignature(struct AActor* Actor, struct USplineMeshComponent* LastSegmentOverlap); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ActorBeginSplineOverlap__DelegateSignature(struct AActor* Actor, struct USplineMeshComponent* FirstSegmentOverlap); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

