// AnimBlueprintGeneratedClass 3RD_CHA_RIG_Space_AnimBP.3RD_CHA_RIG_Space_AnimBP_C
struct U3RD_CHA_RIG_Space_AnimBP_C : UIcarusCharacterAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; 
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; 
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; 
	struct FAnimNode_LegIK AnimGraphNode_LegIK_2; 
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; 
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; 
	struct FAnimNode_LegIK AnimGraphNode_LegIK; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; 
	struct FAnimNode_Inertialization AnimGraphNode_Inertialization; 
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; 
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; 
	struct FAnimNode_ExtensionLimit AnimGraphNode_ExtensionLimit; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; 
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; 
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; 
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; 
	struct FAnimNode_SpeedWarping3D AnimGraphNode_SpeedWarping3D; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FVector EffectorLocationRight; 
	struct FVector JointTargetLocationRight; 
	struct FVector EffectorLocationLeft; 
	struct FVector JointTargetLocationLeft; 
	struct FTransform EffectorTransformLeft; 
	struct FTransform EffectorTransformRight; 
	struct FHabHandStateStruct HandStateLeft; 
	struct FHabHandStateStruct HandStateRight; 
	struct TSoftObjectPtr<UBlendSpaceBase> LocomotionBS; 
	enum class EAnimOverlayState OverlayState; 
	float ArmNormalisedTimeRight; 
	float ArmNormalisedTimeLeft; 
	float ArmInterpSpeed; 
	float 6DOFMovement; 
	float Speed; 
	float LocalDirection; 
	struct FVector FootEffectorLocationRight; 
	struct FVector FootEffectorLocationLeft; 
	struct FRotator HeadRotation; 
	float LegIKRatioRight; 
	float LegIKRatioLeft; 
	float LegIKDistance; 
	float HorizontalAngle; 
	float VerticalAngle; 
	struct FFocusableData CurrentFocusableData; 
	float EnableIKLeft; 
	struct FHabHandStateStruct FutureHandStateLeft; 
	struct FHabHandStateStruct FutureHandStateRight; 
	struct FVector PredictedLocalAcceleration; 
	struct FVector MovementMarker; 
	struct FVector HandRelativeMarkerOrigin; 
	struct FVector CSMovementDirection; 
	struct FRotator MovementOrientationOffset; 
	int32_t MovementDirState; 
	float MovementDirStateBlendTime; 
	float VerticalMovementBlend; 
	float SpeedTransition; 
	float SpeedScaling; 
	enum class EHandedness Handedness; 
	struct FRotator EffectorRotationRight; 
	struct FRotator EffectorRotationLeft; 
	struct FVector MSMovementDirection; 
	struct FRotator InvertedMovementOrientationOffset; 
	float EnableIKRight; 
	bool TouchOrGripLeft; 
	bool TouchOrGripRight; 
	float TempGripTransition; 
	float GripMovementLeft; 
	float GripMovementRight; 
	float GripLerpLeft; 
	float GripLerpRight; 
	struct FVector LastGripPosLeft; 
	struct FVector LastGripPosRight; 
	bool GrippingGripTarget; 
	float MarkerPlacementTime; 
	float MarkerSpeedAverage; 
	struct TArray<struct UObject*> CachedAnims; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	float CalculateDistanceFromMarker(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateLegIK(bool ForLeftLeg); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateHandDistance(bool ForLeftHand); // (Public|BlueprintCallable|BlueprintEvent)
	void IsHandReaching(bool ForLeftHand, bool& Return Value); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FTransform GetHandTransform(bool ForLeftHand, enum class ERelativeTransformSpace TransformSpace); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateFocusedItemState(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FHabHandStateStruct GetHandState(bool ForLeftHand); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	enum class ESpaceHandGripMode GetHandMode(bool ForLeftHand); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateHandIK(bool ForLeftHand); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_CHA_RIG_Space_AnimBP_AnimGraphNode_TransitionResult_97C53E4E4D99883350EF4FA024CBE2ED(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_CHA_RIG_Space_AnimBP_AnimGraphNode_TransitionResult_EC390B23494B30572AB6088B93623AB9(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_CHA_RIG_Space_AnimBP_AnimGraphNode_TransitionResult_C96CAF9F4D5BBC88BBFCAB92A2D2D612(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_CHA_RIG_Space_AnimBP_AnimGraphNode_TransitionResult_530185734784C9A1320330BC59F6F08D(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_CHA_RIG_Space_AnimBP_AnimGraphNode_TransitionResult_F58A755B4146E0ED69BBD599302F2AE0(); // (BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B7BDDA3108(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void BlueprintBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnFocusedItemUpdated(struct AIcarusItem* Item); // (Event|Public|BlueprintEvent)
	void PlaceMovementMarker(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_3RD_CHA_RIG_Space_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

