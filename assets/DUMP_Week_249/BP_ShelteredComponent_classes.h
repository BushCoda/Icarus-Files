// BlueprintGeneratedClass BP_ShelteredComponent.BP_ShelteredComponent_C
struct UBP_ShelteredComponent_C : UShelteredComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t PlanarZSteps; 
	int32_t FirstOffPlaneZResolutionDecrease; 
	float PlanarTraceDistance; 
	int32_t SecondBurstResolutionDivisor; 
	int32_t SecondBurstFails; 
	int32_t SecondBurstSuccess; 
	bool FirstBurstConsideredSuccess; 
	int32_t SecondOffPlaneZResolutionDecrease; 
	enum class ShelteredEnum ShelteredEnum; 
	int32_t FailedSecondariesRequiredToFailFirstBurst; 
	struct FVector TraceStartWorldOffset; 
	bool CalculateExposure; 
	float Exposure; 
	float CalculatedShelterCache; 
	float BaseSecondsToLoseExposure; 
	float BaseSecondsToRecoverExposure; 
	float CachedExposureMultiplier; 
	struct UCurveFloat* ExposureResistCurve; 
	float ExposureLoopTime; 
	struct AIcarusPlayerCharacter* OwningPlayer; 
	struct FMulticastInlineDelegate OnExposureUpdated; 
	struct FDateTime LastTraceResultTime; 
	bool SuppressIcarusActorWarnings; 

	float GetCurrentExposureValue(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsSheltered(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnRep_Exposure(); // (BlueprintCallable|BlueprintEvent)
	float GetExposureRecoveryMultiplier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetExposureResistanceMultiplier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsShelteredInteractable(bool& IsShelteredInteractable); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	int32_t GetShelteredTemperatureEffect(int32_t CurrentExternalTemperature); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LongCubeBurst(struct FVector Location, bool& Enclosed, struct TArray<struct ABuildingBase*>& HitActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessBurstResults(int32_t NumPrimaryTraceSuccesses, int32_t NumPrimaryTraceFailures, int32_t NumSecondaryTraceSuccesses, int32_t NumSecondaryTraceFailures); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PerformShelterTrace(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExposureTimer(); // (BlueprintCallable|BlueprintEvent)
	void ExposureTick(); // (BlueprintCallable|BlueprintEvent)
	void OnShelterTracesCompleted(int32_t NumPrimaryTraceSuccesses, int32_t NumPrimaryTraceFailures, int32_t NumSecondaryTraceSuccesses, int32_t NumSecondaryTraceFailures); // (Event|Public|BlueprintEvent)
	void DisableTraces(bool bDisable); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ShelteredComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnExposureUpdated__DelegateSignature(float NewExposure); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

