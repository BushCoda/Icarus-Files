// BlueprintGeneratedClass BP_Part_MID_MK1.BP_Part_MID_MK1_C
struct ABP_Part_MID_MK1_C : ABP_PartBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_CrashLandingEnd_Smoke; 
	struct UNiagaraComponent* NS_FlyingObjects; 
	struct UNiagaraComponent* NS_Dropship_BurstFire; 
	struct UNiagaraComponent* NS_Electrical_Sparks_03; 
	struct UNiagaraComponent* NS_Electrical_Sparks_02; 
	struct UNiagaraComponent* NS_Electrical_Sparks_01; 
	struct UFMODAudioComponent* DropshipCrash; 
	struct UNiagaraComponent* NS_OutsideFire; 
	struct UStaticMeshComponent* WeatherCullCube; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLightWarning; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight2; 
	struct UFMODAudioComponent* WarningLight_Alarm; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight1; 
	struct UBoxComponent* NavBlocker_Door; 
	struct UFMODAudioComponent* DropshipSequenceInternal; 
	struct UFMODAudioComponent* DropshipSequenceExternal; 
	struct UFMODAudioComponent* SFX_Cooling; 
	struct UNiagaraComponent* NS_DropshipHeatStreamer1; 
	struct UNiagaraComponent* NS_DropshipHeatStreamer7; 
	struct UNiagaraComponent* NS_DropshipHeatStreamer6; 
	struct UNiagaraComponent* NS_DropshipHeatStreamer5; 
	struct UNiagaraComponent* NS_DropshipHeatStreamer4; 
	struct UNiagaraComponent* NS_DropshipHeatStreamer3; 
	struct UNiagaraComponent* NS_DropshipHeatStreamer2; 
	struct USceneComponent* FxDropshipHeatCooldown; 
	struct UNiagaraComponent* NS_DropshipMoisture; 
	struct UStaticMeshComponent* SM_SmokeCone; 
	struct UFMODAudioComponent* ComputerSFX; 
	struct URectLightComponent* FireLight1; 
	struct URectLightComponent* FireLight; 
	struct UStaticMeshComponent* SM_ShuttleReEntryCone; 
	struct USceneComponent* ConeFX; 
	struct USkeletalMeshComponent* FirstPerson; 
	struct UPointLightComponent* LampLight; 
	struct USkeletalMeshComponent* Interior; 
	struct UPointLightComponent* ComputerLightLeft; 
	struct UPointLightComponent* Fill; 
	struct UPointLightComponent* ComputerLightRight; 
	struct USceneComponent* LandingFx; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	enum class ETimelineDirection LightSpin__Direction_F164B8A940B727A826171380AA2B0330; 
	struct UTimelineComponent* LightSpin; 
	float FadeOnSmoke_Track_3CAB9504429B86912BB372932AEB654C; 
	enum class ETimelineDirection FadeOnSmoke__Direction_3CAB9504429B86912BB372932AEB654C; 
	struct UTimelineComponent* FadeOnSmoke; 
	float FadeSmokeCone_Fade_27A25F714815FB34D673F6B74DD0024F; 
	enum class ETimelineDirection FadeSmokeCone__Direction_27A25F714815FB34D673F6B74DD0024F; 
	struct UTimelineComponent* FadeSmokeCone; 
	float Fade_Fade_D32F93AC459FA6EBAA58F4A775A5F3A2; 
	enum class ETimelineDirection Fade__Direction_D32F93AC459FA6EBAA58F4A775A5F3A2; 
	struct UTimelineComponent* Fade; 
	bool Open; 
	bool StartEngine; 
	bool StopEngine; 
	bool PlayShake; 
	bool Shake; 
	bool ShakeStopped; 
	struct UFMODAudioComponent* DropShip_Reverb; 
	struct FTimerHandle CameraShakeTimerRef; 
	bool ConeActive; 
	int32_t CameraShakeType; 
	bool SonicBoomFX; 
	bool SmokeConeFX; 
	bool GroundDustFX; 
	bool HeatCooldownFX; 
	bool HasBeenInDescendingState; 
	bool CameraShake_TouchDown; 
	bool SeatUnlocked; 
	bool CrashLandingStartFX; 
	bool CrashLandingEndFX; 

	void OnRep_CrashLandingStartFX(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_CrashLandingEndFX(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_SeatUnlocked(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_CameraShake_TouchDown(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_HeatCooldownFX(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_GroundDustFX(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_SmokeConeFX(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_SonicBoomFX(); // (BlueprintCallable|BlueprintEvent)
	void Update Fmod Dropship State(enum class EDropshipDescentStateFMODParam DropshipSequenceState); // (Public|BlueprintCallable|BlueprintEvent)
	void ToggleFlightSFX(enum class ERocketState DropShipState, bool IsLocalPlayer); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_ConeActive(); // (BlueprintCallable|BlueprintEvent)
	void AssembledByDatabase(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Shake(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_StopEngine(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_StartEngine(); // (BlueprintCallable|BlueprintEvent)
	void TriggerEvent(struct FDropShipActionsEnum Actions); // (Public|BlueprintCallable|BlueprintEvent)
	void GetMesh(struct UPrimitiveComponent*& Mesh); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Fade__FinishedFunc(); // (BlueprintEvent)
	void Fade__UpdateFunc(); // (BlueprintEvent)
	void FadeSmokeCone__FinishedFunc(); // (BlueprintEvent)
	void FadeSmokeCone__UpdateFunc(); // (BlueprintEvent)
	void FadeOnSmoke__FinishedFunc(); // (BlueprintEvent)
	void FadeOnSmoke__UpdateFunc(); // (BlueprintEvent)
	void LightSpin__FinishedFunc(); // (BlueprintEvent)
	void LightSpin__UpdateFunc(); // (BlueprintEvent)
	void Show_Lights(); // (BlueprintCallable|BlueprintEvent)
	void Hide_Lights(); // (BlueprintCallable|BlueprintEvent)
	void Fade_Cone_FX(); // (BlueprintCallable|BlueprintEvent)
	void StartCameraShake(); // (BlueprintCallable|BlueprintEvent)
	void CameraShake(); // (BlueprintCallable|BlueprintEvent)
	void StopCameraShake(); // (BlueprintCallable|BlueprintEvent)
	void Show_Cone_FX(); // (BlueprintCallable|BlueprintEvent)
	void Hide_Cone_FX(); // (BlueprintCallable|BlueprintEvent)
	void TouchDownCameraShake(); // (BlueprintCallable|BlueprintEvent)
	void Ground_Dust_FX(); // (BlueprintCallable|BlueprintEvent)
	void FadeSmokeOn(); // (BlueprintCallable|BlueprintEvent)
	void Heat_Cooldown_FX(); // (BlueprintCallable|BlueprintEvent)
	void DisableDoorCollision(); // (BlueprintCallable|BlueprintEvent)
	void EnableDoorCollision(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void WeatherCullingSetup(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Part_MID_MK1(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

