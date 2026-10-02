// BlueprintGeneratedClass BP_Building_BuildableDoor_Base.BP_Building_BuildableDoor_Base_C
struct ABP_Building_BuildableDoor_Base_C : ABP_Building_Wall_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	struct UItemableComponent* Itemable; 
	struct UInteractableComponent* Interactable; 
	struct UHighlightableComponent* Highlightable; 
	enum class DoorState DoorState; 
	struct FMulticastInlineDelegate OpenStateChanged; 
	int32_t DoorStateSaved; 

	void TransitionToMainDestructibleMesh(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetOpenableStateOnFoundationActor(); // (Public|BlueprintCallable|BlueprintEvent)
	void ValidateAsset(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DirtyNavigation(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_DoorState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OpenCloseDoor(struct FHitResult HitResult); // (Public|BlueprintCallable|BlueprintEvent)
	void TemporarilyForceAnimUpdates(); // (BlueprintCallable|BlueprintEvent)
	void DisableForcedAnimUpdates(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ScheduleDelayedOpenableStateCheck(); // (BlueprintCallable|BlueprintEvent)
	void MultiOnPlaced(struct AIcarusPlayerCharacter* Instigator); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Building_BuildableDoor_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OpenStateChanged__DelegateSignature(bool Open); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

