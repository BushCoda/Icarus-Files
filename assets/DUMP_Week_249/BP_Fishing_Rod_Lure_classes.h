// BlueprintGeneratedClass BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C
struct ABP_Fishing_Rod_Lure_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* CaughtFish; 
	struct USkeletalMeshComponent* LureSkeletalMesh; 
	struct UStaticMeshComponent* Mesh; 
	struct USmoothSync* SmoothSync; 
	struct UBP_UIProjectionComponent_Fishing_C* BP_UIProjectionComponent_Fishing; 
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; 
	bool Casted; 
	struct FVector LaunchVelocity; 
	float OverlapRange; 
	struct UStaticMesh* DefaultLure; 
	struct ABP_SkeletalItem_Fishing_Rod_C* Rod; 
	bool IsSmoothSyncActive; 
	struct FItemData CurrentLure; 
	struct FItemData CurrentFish; 
	struct UFMODEvent* FMODEvent_Fly; 
	struct UFMODEvent* FMODEvent_Fish_Interested; 
	struct UFMODEvent* FMODEvent_Land; 
	bool ForceDisableSmoothSync; 
	struct UFMODEvent* FMODEvent_Fish; 
	struct UFMODAudioComponent* FlyAudio; 
	struct UFMODAudioComponent* FishAudio; 
	struct USkeletalMesh* DefaultLureSkeletalMesh; 
	float WaterPlaneZ; 
	bool IsBlinky; 

	void PlayLandSplashVFX(); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayFishInterestedAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateFishAudioParams(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShouldFishAudioPlay(bool& ShouldPlay); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateFishAudioState(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFloatingChanged(bool Floating); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayLandAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StopFlyAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayFlyAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void BindToMeshUpdates(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_CurrentLure(); // (BlueprintCallable|BlueprintEvent)
	void On Lure Updated(struct UInventory* Inventory, int32_t Location); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Casted(); // (BlueprintCallable|BlueprintEvent)
	void Is Floating(bool& IsFloating); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetSmoothSync(bool enable); // (Public|BlueprintCallable|BlueprintEvent)
	void SetFish(struct FItemData Fish); // (Public|BlueprintCallable|BlueprintEvent)
	void GetFishingRod(struct ABP_SkeletalItem_Fishing_Rod_C*& FishingRod); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetProjectionComponent(struct UBP_UIProjectionComponent_Fishing_C*& BP_UIProjectionComponent_Fishing); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetOwningPlayer(struct AIcarusPlayerCharacter*& AsIcarus Player Character); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnLoaded_DE554079490083A2D4196685C51B4028(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_80A951DB46CB0CDFB8757C8FB6BF2ED9(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // (HasOutParms|BlueprintEvent)
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void UpdateLure(); // (BlueprintCallable|BlueprintEvent)
	void UpdateFish(); // (BlueprintCallable|BlueprintEvent)
	void ResetLandEffects(); // (BlueprintCallable|BlueprintEvent)
	void TryPlayLandEffects(); // (BlueprintCallable|BlueprintEvent)
	void CustomAnim(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Fishing_Rod_Lure(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

