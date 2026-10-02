// BlueprintGeneratedClass BP_FishVolume.BP_FishVolume_C
struct ABP_FishVolume_C : ALake {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	struct UBP_LakePointComponent_C* BP_LakePointComponent; 
	struct USplineComponent* NewEdgeSpline; 
	float PointDensity; 
	struct TArray<struct FVector>  ; 
	bool VisualiseWaterPoints; 
	struct UBillboardComponent* Billboard; 
	struct UBoxComponent* WaterVolume; 
	struct FVector VolumeExtent; 

	void GenerateWaterPoints(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SanitiseScale(); // (Public|BlueprintCallable|BlueprintEvent)
	void VisualisePoints(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FishVolume(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

