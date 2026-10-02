// AnimBlueprintGeneratedClass SK_bow_shengong_Skeleton_AnimBlueprint.SK_bow_shengong_Skeleton_AnimBlueprint_C
struct USK_bow_shengong_Skeleton_AnimBlueprint_C : UIcarusBowAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_Inertialization AnimGraphNode_Inertialization; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_Slot AnimGraphNode_Slot_2; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	bool __CustomProperty_isGlobal_5B74CA51454847B82219A1A49797DED6; 
	struct FTransform __CustomProperty_String_Global_Position_5B74CA51454847B82219A1A49797DED6; 
	struct FVector __CustomProperty_ArrowPlacment_5B74CA51454847B82219A1A49797DED6; 
	struct FVector __CustomProperty_ArrowPlacment_06897A514FA8436F80812F918B05CF73; 
	struct FTransform __CustomProperty_AttachArrowToHand_06897A514FA8436F80812F918B05CF73; 
	bool Focusing; 
	struct FTransform StringWorldPosition; 
	struct FVector HandArrowPlacment; 
	bool IsArrowDetached; 
	struct FTransform AttachOffset; 
	bool Is3RDCha; 
	struct AIcarusPlayerCharacterSurvival* Owning Player; 
	bool ThirdPerson; 
	struct AIcarusPlayerCharacter* Player; 
	struct UBP_ActionableBehaviour_Firearm_C* FirearmActionable; 
	struct UBP_FocusableBehaviour_C* FocusableRef; 
	struct UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire Controller; 
	struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo Controller; 
	struct UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim Controller; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsHandConnectedToString(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CacheHandArrowPlacement(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CacheStringPosition(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CacheThirdPerson(); // (Public|BlueprintCallable|BlueprintEvent)
	void CacheFocusing(); // (Public|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_476CBC634E2A301922C9199E742A3D5E(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_E260FAD04030F706707B36883C600625(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_6904242543F0A35D218E5087B95B0AC6(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_SequenceEvaluator_ACEB6FBD42C018B55C391FA1BA382EC6(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_SequenceEvaluator_F17106794D80E5565FE1C7BF96E3C549(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void AnimNotify_Bow_AttachArrow(); // (BlueprintCallable|BlueprintEvent)
	void AnimNotify_Bow_DetachArrow(); // (BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_D4B5B3BE431B9543F3B5A6B3EB3355BF(); // (BlueprintEvent)
	void ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint(int32_t EntryPoint); // (Final|UbergraphFunction)
};

