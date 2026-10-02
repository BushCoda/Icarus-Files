// BlueprintGeneratedClass WT_WaterFlowPoint.WT_WaterFlowPoint_C
struct AWT_WaterFlowPoint_C : AActor {
	struct UArrowComponent* Arrow; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* DefaultSceneRoot; 
	float FlowSpeed; 
	float NormalFlatness; 
	float Clearness; 
	float EdgeTaper; 
	float EdgeNoise; 
	float RapidsIntensity; 
	struct FVector2D Scale; 
	float RotateRapids; 

	void SetProperties(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
};

