// BlueprintGeneratedClass BP_LakeAudio.BP_LakeAudio_C
struct ABP_LakeAudio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBoxComponent* Box; 
	struct USceneComponent* SplineGenerationExclusionZones; 
	struct UBillboardComponent* Billboard; 
	struct USceneComponent* SplineGenerationTracePoints; 
	struct UBoxComponent* SplineGenerationBounds; 
	struct USceneComponent* Islands; 
	struct UBP_LakeAudioComponent_C* BP_LakeAudioComponent; 
	struct ULakeSplineComponent* LakeSpline; 
	struct USceneComponent* DefaultSceneRoot; 
	float EdgeSplineDensity; 
	int32_t EdgeSplineSimplificationFactor; 
	struct TArray<struct FVector> CameraTracePoints; 
	struct FWaterSetupRowHandle WaterSetup; 

	void SimplifyEdgeSpline(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsPointInBounds(struct FVector Location, struct UBoxComponent* Box, bool& IsInBounds); // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveEdgePointsFromExclusionZones(struct TArray<struct FVector>& Points, struct TArray<struct FVector>& UpdatedPoints); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddCameraTracePoint(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetTracePointLocations(struct TArray<struct FVector>& Points); // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GenerateSpline(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ValidateSplines(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetIslandSplines(struct TArray<struct UEdgeSplineComponent*>& IslandSplines); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SnapToWaterPlane(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_LakeAudio(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

