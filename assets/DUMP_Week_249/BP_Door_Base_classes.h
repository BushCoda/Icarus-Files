// BlueprintGeneratedClass BP_Door_Base.BP_Door_Base_C
struct ABP_Door_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBoxComponent* PlacementBlockerBox; 
	struct UAudioOcclusionComponent* AudioOcclusion1; 
	enum class DoorState DoorState; 
	struct FMulticastInlineDelegate OpenStateChanged; 
	struct FTimerHandle DelayedDirtyTimer; 
	int32_t DoorStateSaved; 

	float GetOcclusionValue(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void ValidateAsset(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DirtyNavigation(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetOpenableStateOnFoundationActor(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_DoorState(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OpenCloseDoor(struct FHitResult HitResult); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ScheduleDelayedOpenableStateCheck(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void DisableForcedAnimUpdates(); // (BlueprintCallable|BlueprintEvent)
	void TemporarilyForceAnimUpdates(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Door_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OpenStateChanged__DelegateSignature(bool Open); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

