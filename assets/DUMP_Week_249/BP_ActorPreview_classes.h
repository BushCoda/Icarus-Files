// BlueprintGeneratedClass BP_ActorPreview.BP_ActorPreview_C
struct ABP_ActorPreview_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; 
	struct UCameraComponent* Camera; 
	struct USceneComponent* CameraRoot; 
	struct USceneComponent* DefaultSceneRoot; 
	bool PreviewVisible; 
	bool RenderTargetSet; 
	bool UseSceneCapture; 
	bool UseCameraComponent; 

	void GetLightComponents(struct TArray<struct ULightComponent*>& SceneCaptureLights, struct TArray<struct ULightComponent*>& CameraComponentLights); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateCaptureMode(bool UseSceneCapture, bool UseCameraComponent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetShowOnlyComponents(struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CreateRenderTarget(int32_t Width, int32_t Height, struct UTextureRenderTarget2D*& RenderTarget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ResolveVisibility(bool& Visible); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdatePreviewVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetPreviewVisibility(bool NewPreviewVisibility); // (Public|BlueprintCallable|BlueprintEvent)
	void ClearCurrentMeshes(); // (Public|BlueprintCallable|BlueprintEvent)
	void ConstructPreviewMeshArray(struct TArray<struct USkeletalMesh*>& MeshArray); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void UpdateActorPreview(bool Visible); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActorPreview(int32_t EntryPoint); // (Final|UbergraphFunction)
};

