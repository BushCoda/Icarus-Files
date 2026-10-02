// BlueprintGeneratedClass WT_LavaFlowPoint.WT_LavaFlowPoint_C
struct AWT_LavaFlowPoint_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UArrowComponent* Arrow; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* DefaultSceneRoot; 
	float FlowSpeed; 
	float Base to Flowing; 
	float Dryness; 
	float EdgeTaper; 
	float EdgeNoise; 
	float Base to Patchy; 
	struct FVector2D Scale; 
	float RotateRapids; 
	bool Show Arrow; 
	struct UMaterialInterface* Material; 

	void SetMaterial(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetProperties(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_WT_LavaFlowPoint(int32_t EntryPoint); // (Final|UbergraphFunction)
};

