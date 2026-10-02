// BlueprintGeneratedClass BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C
struct UBP_ActionableBehaviour_SimplePlace_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float TraceDistance; 
	bool TickTraceOnClients; 
	bool DoSecondaryDownwardTrace; 
	struct FHitResult OnActionTraceHit; 
	enum class EActionableEventType ActionTypeCache; 
	enum class EActionableTrigger ActionTriggerCache; 
	enum class ETraceTypeQuery TraceChannel; 
	bool WasLastTraceValid; 
	struct FHitResult LastCameraTrace; 
	struct FVector ReplicatedTraceOrigin; 
	struct FRotator ReplicatedTraceRotation; 
	struct FVector LastInterpolatedHitLocation; 
	struct FRotator LastInterpolatedHitRotation; 
	float TraceInterpolationSpeed; 

	bool CanPerformAction(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetInterpolatedTraceData(struct FVector& TraceLocation, struct FRotator& TraceRotation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetTraceIgnoreActors(struct TArray<struct AActor*>& OutIgnoreActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool PerformLineTrace(struct FVector TraceStart, struct FVector TraceEnd, bool TraceComplex, struct TArray<struct AActor*>& IgnoreActors, struct FHitResult& OutHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool DoTrace(struct FHitResult& OutHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShouldActionCameraTrace(enum class EActionableEventType ActionableType, enum class EActionableTrigger ActionableTrigger, bool& ShouldTrace); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetTraceDistance(float& TraceDistance); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TickCameraTraceHit(struct FHitResult Hit, bool DidHit); // (Public|BlueprintCallable|BlueprintEvent)
	void OnActionCameraTraceHit(struct FHitResult Hit); // (Public|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void Server_OnActionCameraTraceHit(struct FHitResult HitTrace); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void UpdatePositionOnServer(); // (BlueprintCallable|BlueprintEvent)
	void Server_UpdatePositionFromClient(struct FVector DeployTraceOrigin, struct FRotator DeployTraceRotation); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_SimplePlace(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

