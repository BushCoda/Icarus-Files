// BlueprintGeneratedClass BP_RiverAudioComponent.BP_RiverAudioComponent_C
struct UBP_RiverAudioComponent_C : URiverAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMODAudioComponent; 
	struct ABP_InteractableRiver_C* River; 
	float InterpSpeed; 
	float InfrequentCheckDistanceThreshold; 
	float InfrequentCheckFrequency; 
	float FrequentCheckDistanceThreshold; 
	float FrequentCheckFrequency; 
	float ActivelyUpdatingCheckFrequency; 
	float EstimatedVisibleProportion; 
	struct FVector LeftSplineStart; 
	struct FVector LeftSplineEnd; 
	struct FVector RightSplineStart; 
	struct FVector RightSplineEnd; 
	float SplineEndDistanceThreshold; 
	struct UFMODEvent* FMODEvent; 
	bool PlayerInRiver; 
	struct FVector2D ProximityInfluenceRange; 
	struct UAudioContextComponent* AudioContextComponent; 
	bool UsingLavaFlowPoints; 

	void InitAudioContext(); // (Public|BlueprintCallable|BlueprintEvent)
	void CacheSplineLocations(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FVector2D GetDistanceRange(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetAudioActive(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void SetState(float DistToListener); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetUpdateTime(float& Time); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateLocation(float& DistToListener); // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void RiverAudioTick(); // (BlueprintCallable|BlueprintEvent)
	void UpdateDensity(float Density); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_RiverAudioComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

