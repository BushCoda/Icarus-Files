// BlueprintGeneratedClass BP_InteractableRiver.BP_InteractableRiver_C
struct ABP_InteractableRiver_C : ARiver {
	struct UTextRenderComponent* TextRender; 
	struct USpringArmComponent* SpringArm; 
	struct UNavModifierComponent* NavModifier; 
	struct UHighlightableComponent* Highlightable; 
	struct UBP_RiverAudioComponent_C* RiverAudio; 
	struct UInteractableComponent* Interactable; 
	struct USplineComponent* Spline; 
	struct USceneComponent* Scene; 
	struct TArray<struct FFRiverSplineSetup> List; 
	bool ReverseFlow; 
	struct TArray<struct FFBasicSplinePoint> LeftSplinePoints; 
	struct TArray<struct FFBasicSplinePoint> RightSplinePoints; 
	struct USplineComponent* LeftEdgeSpline; 
	struct USplineComponent* RightEdgeSpline; 
	struct UMaterialInterface* OverrideMaterial; 
	struct FRiverAudioDataRowHandle AudioSetup; 
	bool LavaLights; 
	float LavaLightGap; 

	void UpdateTextRenderer(struct UTextRenderComponent* TextRenderer, float ZoneQuality); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetInteractableType(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddLavaLights(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UStaticMesh* GetRiverMesh(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct TArray<struct UPrimitiveComponent*> GetNavAffectingComponents(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void EdgeSplinesAreValid(bool& Valid); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void AddEdgeSplinePoint(struct USplineComponent* Spline, struct FVector Location, struct FRotator Rotation, enum class ESplinePointType Type); // (Public|BlueprintCallable|BlueprintEvent)
	void FinaliseEdgeSplines(); // (Public|BlueprintCallable|BlueprintEvent)
	void CreateEdgeSplines(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void OverlapStart(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

