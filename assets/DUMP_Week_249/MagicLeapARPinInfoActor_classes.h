// BlueprintGeneratedClass MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
struct AMagicLeapARPinInfoActor_C : AMagicLeapARPinInfoActorBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Right; 
	struct UStaticMeshComponent* Forward; 
	struct UStaticMeshComponent* Up; 
	struct USphereComponent* ValidRadiusVisualizer; 
	struct USceneComponent* AxisRoot; 
	struct USceneComponent* VisualizerRoot; 
	struct UTextRenderComponent* TypeValue; 
	struct UTextRenderComponent* TransErrValue; 
	struct UTextRenderComponent* RotErrValue; 
	struct UTextRenderComponent* ConfidenceValue; 
	struct UTextRenderComponent* TransErrLabel; 
	struct UTextRenderComponent* RotErrLabel; 
	struct UTextRenderComponent* ConfidenceLabel; 
	struct UTextRenderComponent* PinIDValue; 
	struct USceneComponent* InfoRoot; 
	struct USceneComponent* Root; 
	float RotationSmoothSpeed; 

	void UpdatePinState(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnUpdateARPinState(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

