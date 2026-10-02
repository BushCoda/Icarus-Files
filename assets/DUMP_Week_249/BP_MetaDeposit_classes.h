// BlueprintGeneratedClass BP_MetaDeposit.BP_MetaDeposit_C
struct ABP_MetaDeposit_C : ABP_OreDeposit_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UHighlightableComponent* Highlightable; 
	struct USphereComponent* MusicCueTrigger; 
	bool IsEmptied; 
	struct FTimerHandle MusicCueCheckTimer; 
	float MusicCueCheckTimerFrequency; 
	float MusicCueCheckPlayerIsLookingThreshold; 
	bool MusicCueHasPlayed; 
	struct FTimerHandle ResourceRemainingTimer; 
	struct FVector MeteorDirection; 
	bool UseCustomHighlightable; 

	void UpdateHighlightable(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsDepleted(bool& Depleted); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DebugDeplete(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DisableMusicCueChecks(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckInPlayerView(bool& InPlayerView); // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayMusicCue(); // (Private|BlueprintCallable|BlueprintEvent)
	void MusicCueCheck(); // (Private|BlueprintCallable|BlueprintEvent)
	void StopMusicCueChecks(); // (Private|BlueprintCallable|BlueprintEvent)
	void StartMusicCueChecks(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_IsEmptied(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResourceEmptied(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__MusicCueTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void BndEvt__MusicCueTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void CheckResourceRemaining(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_MetaDeposit(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

