// BlueprintGeneratedClass BP_LakeAudioComponent.BP_LakeAudioComponent_C
struct UBP_LakeAudioComponent_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerController* PlayerController; 
	struct UFMODAudioComponent* FMODAudioComponent; 
	float InterpSpeed; 
	struct UEdgeSplineComponent* EdgeSpline; 
	struct UFMODEvent* FMODEvent; 
	struct UCurveFloat* UpdateDistanceCurve; 
	enum class ESplineLoopDirection SplineDirection; 
	struct FVector LakeLocation; 
	struct TArray<struct UEdgeSplineComponent*> IslandSplines; 
	struct FVector BoundingSphereOrigin; 
	float BoundingSphereRadius; 
	float MaxUpdateRadiusSquared; 
	float MaxUpdateRadiusBuffer; 
	float MaxUpdateFrequency; 

	void CacheMaxUpdateRadius(struct UEdgeSplineComponent* EdgeSpline); // (Public|BlueprintCallable|BlueprintEvent)
	void IsWithinUpdateBounds(struct FVector ListenerLocation, bool& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetDistanceWithinIslands(struct FVector PlayerLocation, float& Distance); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RegisterIslands(struct TArray<struct UEdgeSplineComponent*>& IslandSplines); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitialiseInternal(struct FVector Location, struct FWaterSetupRowHandle WaterSetup, struct UEdgeSplineComponent* EdgeSpline, bool& WasSuccessful); // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(struct FVector Location, struct FWaterSetupRowHandle WaterSetup, struct UEdgeSplineComponent* EdgeSpline); // (Public|BlueprintCallable|BlueprintEvent)
	void SetAudioActive(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void GetTimeToNextUpdate(struct FVector ListenerLocation, float& Time); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateAudio(bool Smooth, float& TimeToNextUpdate); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AudioTick(); // (BlueprintCallable|BlueprintEvent)
	void StartAudioTick(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_LakeAudioComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

