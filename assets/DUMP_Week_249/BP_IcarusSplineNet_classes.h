// BlueprintGeneratedClass BP_IcarusSplineNet.BP_IcarusSplineNet_C
struct ABP_IcarusSplineNet_C : ASplineResourceNetworkBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	struct TArray<struct ABP_IcarusSplineActor_C*> LinkedSplines; 
	bool Debug; 
	struct FTimerHandle SlowTickTimer; 

	void DEBUG_DrawDebugInfo(); // (Public|BlueprintCallable|BlueprintEvent)
	void CreateNewNetworkAtSpline(struct ABP_IcarusSplineActor_C* Spline); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void MergeNetwork(struct ABP_IcarusSplineNet_C* NetworkToMerge); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AreTwoSplinesConnected(struct ABP_IcarusSplineActor_C* SplineA, struct ABP_IcarusSplineActor_C* Spline B, bool& Connected); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveSpline(struct ABP_IcarusSplineActor_C* SplineToRemove); // (Public|BlueprintCallable|BlueprintEvent)
	void AddSpline(struct ABP_IcarusSplineActor_C* Added Spline); // (Public|BlueprintCallable|BlueprintEvent)
	void DelayedCleanupCheck(); // (BlueprintCallable|BlueprintEvent)
	void Cleanup(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SlowTick(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusSplineNet(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

