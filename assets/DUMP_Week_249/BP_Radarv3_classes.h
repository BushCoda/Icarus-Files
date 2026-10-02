// BlueprintGeneratedClass BP_Radarv3.BP_Radarv3_C
struct ABP_Radarv3_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBPQC_AnimalSwarm_Local_C* BPQC_AnimalSwarm_Local; 
	struct UGenericAITargetComponent* GenericAITarget; 
	struct UAudioOcclusionComponent* AudioOcclusion1; 
	struct UWidgetComponent* Widget_RadarInterface; 
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; 
	struct UFMODAudioComponent* FMOD_Radar_Audio; 
	bool IsOn; 
	float Progress; 
	float SecondsToScan; 
	struct AMapManager_C* MapManager; 
	bool Completed; 
	float RadarScanDiameterInKm; 
	float RadarScanIntensity; 
	float MinimumDistanceFromOtherScan; 
	bool CantScan; 
	struct APawn* LastInstigator; 
	struct FMulticastInlineDelegate RadarActivated; 
	float RadarMaxEffectiveRange; 
	float RadarScanMinArcAngle; 
	float RadarScanMaxArcAngle; 
	struct UAnimSequence* RadarDeployAnimation; 
	struct UAnimSequence* RadarActiveAnimation; 
	bool RenderWidgetAfterInitialAnimation; 
	bool DeployAnimFinished; 
	struct FMulticastInlineDelegate RadarScanComplete; 

	void UpdateAnimalSpawning(); // (Public|BlueprintCallable|BlueprintEvent)
	void CalculateScanResultForDeposit(struct ABP_MetaDeposit_C* Deposit, struct FRadarV3ScanData& ScanData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRadarStateUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RadarV3ArcCalcs(struct TArray<struct FRadarV3ScanData>& Scans); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_Progress(); // (BlueprintCallable|BlueprintEvent)
	void ConfigureScreenText(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Completed(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_CantScan(); // (BlueprintCallable|BlueprintEvent)
	void PreviousScanProximityCheck(bool& bLocked); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRep_IsOn(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Activate(struct AActor* Instigator); // (BlueprintCallable|BlueprintEvent)
	void Deactivate(); // (BlueprintCallable|BlueprintEvent)
	void DeployableTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void InitAfterExoticStorm(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Radarv3(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void RadarScanComplete__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void RadarActivated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

