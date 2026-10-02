// BlueprintGeneratedClass BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C
struct ABP_IcarusPlayerCharacterSpace_C : AIcarusPlayerCharacterSpace {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_ItemManipulationComponent_C* BP_ItemManipulationComponent; 
	struct UPhysicsConstraintComponent* PhysicsConstraintR; 
	struct UPhysicsConstraintComponent* PhysicsConstraintL; 
	struct UPostProcessComponent* HighlightablePostProcess; 
	struct UWidgetComponent* PlayerNameWidget; 
	struct UCameraComponent* Camera; 
	struct UParticleSystemComponent* ParticleSystem; 
	struct UPhysicalAnimationComponent* PhysicalAnimation; 
	bool DebuggingMovement; 
	float RotationSpeed; 
	bool SprintPressed; 
	struct FVector ReplicatedLocation; 
	struct FVector ReplicatedVelocity; 
	struct UPrimitiveComponent* Current Hit Component; 
	bool NearSurface; 
	struct FTimerHandle InteractionTimer; 
	struct FItemData RightHandItem_Data; 
	struct AIcarusItem* FocusedItem; 
	struct U3RD_CHA_RIG_Space_AnimBP_C* AnimInstanceBP; 
	float ControllerRoll; 
	float RollAccelerationWhenGripped; 
	float RollAccelerationWhenFloating; 
	float RollDecelerationWhenFloating; 
	int32_t TouchCheckCount; 
	float TouchTurnRatio; 
	float TouchForwardConeRatio; 
	float TouchTraceLength; 
	float SquareArmRange; 
	float GripMagnetismStrength; 
	float ThrowTime; 
	float ThrowSpeed; 
	float GrippingMoveSpeed; 
	float GrippingSprintSpeed; 
	struct UCurveFloat* GripOrientationStrengthCurve; 
	bool LookLocked; 
	float Acceleration; 
	float FloatingAcceleration; 
	float Deceleration; 
	float FloatingDeceleration; 
	float FloatingSpeed; 
	float Use6DOFMovement; 
	struct FVector OffsetVelocity; 
	bool Grounded; 
	float GroundedMoveSpeed; 
	float GroundedSprintSpeed; 
	struct FVector GroundUpAxis; 
	float GroundUpStrength; 
	struct FRotator TargetRotation; 
	bool DebuggingPrediction; 
	struct FItemData InventoryItem; 

	struct UItemManipulationComponent* GetItemManipulationComponent(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct UCameraComponent* GetFirstPersonCamera(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsHabCharacter(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct USkeletalMeshComponent* GetFirstPersonMesh(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateCharacterVisuals(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool OnUnFocusItem(int32_t ItemLocation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool OnFocusItem(struct FItemData& InventoryItem); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateMeshVisibility(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnEquipmentUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FHabMovementStateStruct MakeMovementStateFromCurrentData(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PredictMovementForFrames(int32_t FramesToPredict, struct FHabMovementStateStruct InitialState, struct TArray<struct FHabMovementStateStruct>& OutMovementStateArray, struct TArray<struct FHabHandStateStruct>& OutLeftHandArray, struct TArray<struct FHabHandStateStruct>& OutRightHandArray); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CheckIfTouchingSurface(struct FHabHandStateStruct& LeftHandState, struct FHabHandStateStruct& RightHandState, float Use6DOFMovement); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void MoveCharacterWithPhysics(bool IgnoreLocalUp); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PredictMovementState(struct FHabMovementStateStruct LastMovementState, struct FHabHandStateStruct LastLeftHand, struct FHabHandStateStruct LastRightHand, struct FHabMovementStateStruct& NewMovementState, struct FHabHandStateStruct& NewLeftHand, struct FHabHandStateStruct& NewRightHand); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateHeadRotation(float DeltaSeconds); // (Public|BlueprintCallable|BlueprintEvent)
	void IsHandReaching(bool ForLeftHand, bool& Return Value); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	enum class ESpaceHandGripMode GetHandMode(bool ForLeftHand); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FHabHandStateStruct GetHandState(bool ForLeftHand); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateCapsuleRotation(float DeltaTime); // (Public|BlueprintCallable|BlueprintEvent)
	void IsUsing6DOFMovement(bool& Use6DOFMovement); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Get6DOFMovement(float& Use6DOFMovement); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Set6DOFMovementRatio(float Use6DOFMovement); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool TraceGround(struct FHitResult& OutHit, struct FVector& Location); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AutoOrientUsingConstraint(bool ForLeftHand); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ConsumeFocusedItem(int32_t Amount); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetMaxSpeed(struct FHabMovementStateStruct MovementState); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void AddReactionImpulseToGrippedComponent(bool ForLeftHand, struct FVector Impulse); // (Public|BlueprintCallable|BlueprintEvent)
	void SetConstraintActive(bool ForLeftHand, bool NewActive); // (Public|BlueprintCallable|BlueprintEvent)
	bool IsAnyRotationInput(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsAnyMovementInput(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void CalculatePhysics(bool IgnoreLocalUp, struct FHabMovementStateStruct LastMovementState, struct FVector& OutDeltaVelocity); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateGripAutoOrientLocation(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateGripAutoOrientRoll(); // (Public|BlueprintCallable|BlueprintEvent)
	bool FindGripTargets(float SearchRadius, struct FVector ActorLocation, bool debugging, struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddGripTargetMagnetism(bool ForLeftHand, bool StillHasValidGripTargets, struct FVector& MagnetismVector, bool& MagnetismActive); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FVector MakeTargetLocation(bool ForLeftHand, struct FTransform ActorTransform, struct FVector Velocity); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetBestHandStateFromGripTargets(struct TArray<struct UPrimitiveComponent*>& Array, bool ForLeftHand, struct FTransform ActorTransform, struct FVector Velocity, bool& FoundHandState, struct FHabHandStateStruct& HandState); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CheckArmAngle(bool ForLeftHand, struct FVector& Location, struct FTransform& ActorTransform); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetBestHandStateGromTouch(struct TArray<struct FHabHandStateStruct>& Array, bool ForLeftHand, struct FTransform ActorTransform, struct FVector Velocity, bool& FoundHandState, struct FHabHandStateStruct& HandState); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	float PerformRollSmoothing(float TargetRollValue); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateHandDistance(bool Index); // (Public|BlueprintCallable|BlueprintEvent)
	void FindSurfaceTouches(struct FTransform ActorTransform, bool debugging, int32_t CheckCount, struct TArray<struct FHabHandStateStruct>& HandStates); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FilterGripTargets(struct TArray<struct AActor*>& Array, struct TArray<struct UPrimitiveComponent*>& FilteredArray); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct USkeletalMeshComponent* GetVisibleCharacterMesh(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetMeshMontagePlayRate(struct USkeletalMeshComponent* Mesh, float PlayRate); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_FocusedItem(); // (BlueprintCallable|BlueprintEvent)
	bool DropItem(struct FItemData& InventoryItem); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool PickupItem(struct AIcarusItem* Item); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool OnInteractableLineTraceHit(struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsHandStateValid(bool ForLeftHand, struct FHabHandStateStruct& HandState, struct FTransform ActorTransform); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsTouchingSurface(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetBestHandMode(struct FHabHandStateStruct& LeftHandState, struct FHabHandStateStruct& RightHandState, enum class ESpaceHandGripMode& HandMode, bool& Reaching); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void SetAnimHandMode(bool ForLeftHand, enum class ESpaceHandGripMode NewHandMode, bool Reaching); // (Public|BlueprintCallable|BlueprintEvent)
	void SetAnimHandHit(bool ForLeftHand, struct FHabHandStateStruct NewHandState); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckHandGrip(bool ForLeftHand, struct FHabHandStateStruct CurrentHandState, struct TArray<struct UPrimitiveComponent*>& GripTargets, struct TArray<struct FHabHandStateStruct>& TouchHandStates, struct FTransform ActorTransform, struct FVector Velocity, float CurrentTime, struct FHabHandStateStruct& OutHandState); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitialiseInventories(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void InpActEvt_Interact_K2Node_InputActionEvent_9(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Interact_K2Node_InputActionEvent_8(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Fire_K2Node_InputActionEvent_7(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Fire_K2Node_InputActionEvent_6(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_AltFire_K2Node_InputActionEvent_5(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_AltFire_K2Node_InputActionEvent_4(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Sprint_K2Node_InputActionEvent_3(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Sprint_K2Node_InputActionEvent_2(struct FKey Key); // (BlueprintEvent)
	void OnNotifyEnd_A0EE5E9E4EEAC509BB86ABBACC336206(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_A0EE5E9E4EEAC509BB86ABBACC336206(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_A0EE5E9E4EEAC509BB86ABBACC336206(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_A0EE5E9E4EEAC509BB86ABBACC336206(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_A0EE5E9E4EEAC509BB86ABBACC336206(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void InpActEvt_Jump_K2Node_InputActionEvent_1(struct FKey Key); // (BlueprintEvent)
	void MovementPrediction(); // (BlueprintCallable|BlueprintEvent)
	void InteractHeld(); // (BlueprintCallable|BlueprintEvent)
	void ServerPlayerAction(enum class EActionableEventType ActionType, enum class EActionableTrigger Trigger); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void StartThrow(); // (Net|NetServer|BlueprintCallable|BlueprintEvent)
	void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_3(float AxisValue); // (BlueprintEvent)
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_5(float AxisValue); // (BlueprintEvent)
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_6(float AxisValue); // (BlueprintEvent)
	void InpAxisEvt_RollRight_K2Node_InputAxisEvent_7(float AxisValue); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void NotifyLocationUpdated(struct FVector CurrentLocation); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void NotifyRotationUpdated(struct FRotator NewRotation); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void NotifyVelocityUpdated(struct FVector CurrentLocation); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void MovementReplicationTick(float Delta); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void MovementPhysicsTick(float DeltaSeconds); // (BlueprintCallable|BlueprintEvent)
	void PlayMontage(struct UAnimMontage* Montage, struct UAnimMontage* FP_Montage, bool LockMotion, struct FName StartingSection, struct FName FP_StartingSection, float PlaySpeed); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetMontagePlayRate(float PlayRate); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue); // (BlueprintEvent)
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue); // (BlueprintEvent)
	void PreCharacterDestruction(); // (BlueprintEvent)
	void FOVApplied(float Value); // (BlueprintCallable|BlueprintEvent)
	void EquipmentItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void EquipmentUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ReceivePossessed(struct AController* NewController); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusPlayerCharacterSpace(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

