// BlueprintGeneratedClass BP_InteractableLake.BP_InteractableLake_C
struct ABP_InteractableLake_C : ALake {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USpringArmComponent* SpringArm; 
	struct UTextRenderComponent* TextRender; 
	struct UNavBlockingStaticMeshComponent* NavBlockingStaticMesh; 
	struct UBoxComponent* WaterPhysics; 
	struct UStaticMeshComponent* UnderwaterMesh; 
	struct UStaticMeshComponent* LakeEdge; 
	struct UBP_LakeAudioComponent_C* BP_LakeAudioComponent; 
	struct UStaticMeshComponent* SurfaceMesh; 
	struct UHighlightableComponent* Highlightable; 
	struct UNavModifierComponent* NavModifier; 
	struct UInteractableComponent* Interactable; 
	bool ManualPlacement; 
	struct TArray<struct URuntimeVirtualTexture*> VirtualTexture; 
	bool Water Edges; 
	bool Edit Water Edge; 
	enum class ESplineLoopDirection EdgeSplineDirection; 
	struct TArray<struct FTransform> EdgeSplinePoints; 
	struct ULakeSplineComponent* LakeSpline; 
	float LakeDepth; 
	struct UMaterialInterface* OverrideMaterial; 
	bool PermitNavigable; 
	int32_t CullDistOverride; 

	void SetHighlightable(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTextRenderer(struct UTextRenderComponent* TextRenderer, float ZoneQuality); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetInteractableType(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitialiseAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	struct TArray<struct UPrimitiveComponent*> GetNavAffectingComponents(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void SetUpEdgeSpline(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupGOAPWaterNodes(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_B607BE074B40775DC6E9828DC398DAE2(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void BndEvt__BP_InteractableLake_WaterPhysics_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (BlueprintEvent)
	void ExecuteUbergraph_BP_InteractableLake(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

