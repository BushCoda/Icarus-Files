// BlueprintGeneratedClass BP_FX_TerrainDeformationCapture.BP_FX_TerrainDeformationCapture_C
struct ABP_FX_TerrainDeformationCapture_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneCaptureComponent2D* SceneCapture; 
	struct USceneComponent* DefaultSceneRoot; 
	struct UMaterialInstanceDynamic* DrawMaterial; 
	struct FVector2D MoveOffset; 
	bool SettingsEnabled; 

	void ResolveEnabledState(bool& Enabled); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void MoveCapture(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DrawToPersistent(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void SettingsChanged(bool Value); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_FX_TerrainDeformationCapture(int32_t EntryPoint); // (Final|UbergraphFunction)
};

