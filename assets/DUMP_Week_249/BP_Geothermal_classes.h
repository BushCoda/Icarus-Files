// BlueprintGeneratedClass BP_Geothermal.BP_Geothermal_C
struct ABP_Geothermal_C : AWaterBody {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_GeoSteam; 
	struct UStaticMeshComponent* RVTPlaneMid; 
	struct UStaticMeshComponent* RVTPlaneTop; 
	struct UInteractableComponent* Interactable; 
	struct UHighlightableComponent* Highlightable; 
	struct UOverlapAudioComponent* OverlapAudio; 
	struct UStaticMeshComponent* WaterPlane; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* DefaultSceneRoot; 
	struct TArray<struct UStaticMesh*> Meshes; 
	int32_t Type; 
	struct TArray<struct FVector> WaterScale; 
	float EdgeTaper; 
	float Clearness; 
	float NormalFlatness; 
	float FlowSpeed; 
	float RapidsIntensity; 
	float EdgeNoise; 
	struct TArray<struct FVector> RVTScaleTop; 
	struct TArray<struct FVector> RVTScaleMid; 
	float WaterPlaneMeshSize; 
	float MinToMaxDistScale; 
	bool Write To RVT; 

	void Initialize(); // (Public|BlueprintCallable|BlueprintEvent)
	void InitializeAudio(); // (Protected|BlueprintCallable|BlueprintEvent)
	void SetProperties(struct UPrimitiveComponent* NewParam, float Clearness); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Geothermal(int32_t EntryPoint); // (Final|UbergraphFunction)
};

