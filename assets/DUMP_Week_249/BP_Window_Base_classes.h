// BlueprintGeneratedClass BP_Window_Base.BP_Window_Base_C
struct ABP_Window_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UAudioOcclusionComponent* AudioOcclusion1; 
	struct UBP_WeatherAudioComponent_WindowShutter_C* BP_WeatherAudioComponent_WindowShutter; 
	bool Open; 
	bool CanChangeState; 
	struct FMulticastInlineDelegate OpenStateChanged; 
	struct FTimerHandle DelayedDirtyTimer; 

	float GetOcclusionValue(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void ValidateAsset(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetOpenableStateOnFoundationActor(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Open(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void Open Close Window(struct FHitResult Interaction, bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void DirtyShelter(); // (BlueprintCallable|BlueprintEvent)
	void ScheduleDelayedOpenableStateCheck(); // (BlueprintCallable|BlueprintEvent)
	void DisableForcedAnimUpdates(); // (BlueprintCallable|BlueprintEvent)
	void TemporarilyForceAnimUpdates(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Window_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OpenStateChanged__DelegateSignature(bool Open); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

