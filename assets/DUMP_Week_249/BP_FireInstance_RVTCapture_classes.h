// BlueprintGeneratedClass BP_FireInstance_RVTCapture.BP_FireInstance_RVTCapture_C
struct ABP_FireInstance_RVTCapture_C : AActor {
	struct UStaticMeshComponent* SceneCaptureTarget; 
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; 
	struct UProceduralMeshComponent* ProceduralMesh; 
	int32_t test; 

	void Capture(struct UConcaveHullMesh* ConcaveHull); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
};

