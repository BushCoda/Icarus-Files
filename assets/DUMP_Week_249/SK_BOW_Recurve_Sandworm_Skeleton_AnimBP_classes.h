// AnimBlueprintGeneratedClass SK_BOW_Recurve_Sandworm_Skeleton_AnimBP.SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_C
struct USK_BOW_Recurve_Sandworm_Skeleton_AnimBP_C : UIcarusBowAnimInstance {
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
	struct FVector __CustomProperty_ArrowPlacment_CBF8F8EF4BEB74386EB6ACA94F356F3C; 
	struct FTransform __CustomProperty_String_Global_Position_CBF8F8EF4BEB74386EB6ACA94F356F3C; 
	struct FVector __CustomProperty_ArrowPlacment_4C4BCC8942975016EC07D680B25CE1CF; 
	struct FTransform __CustomProperty_AttachArrowToHand_4C4BCC8942975016EC07D680B25CE1CF; 
	struct UBP_ActionableBehaviour_Firearm_C* FirearmActionable; 
	struct UBP_FocusableBehaviour_C* FocusableRef; 
	struct UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire Controller; 
	struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo Controller; 
	struct UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim Controller; 
	struct AIcarusPlayerCharacter* Player; 
	bool Focusing; 
	struct FTransform StringWorldPosition; 
	struct FVector HandArrowPlacment; 
	bool IsArrowDetached; 
	struct FTransform AttachOffset; 
	bool Is3RDCha; 
	struct AIcarusPlayerCharacterSurvival* Owning Player; 
	bool ThirdPerson; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsHandConnectedToString(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CacheHandArrowPlacement(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CacheStringPosition(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CacheThirdPerson(); // (Public|BlueprintCallable|BlueprintEvent)
	void CacheFocusing(); // (Public|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_523F55D64AA4735B4437C1A96C51B4EC(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_SequencePlayer_95B1DA8C469BE84BE2FB62B66F466039(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_E92FB9D7447CBDC43E7E1180FA904DC8(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_SequenceEvaluator_04EFE18147B71418128A7B97F0494F02(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_SequenceEvaluator_3F3021A94EE473410BFBB7B60E219331(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void AnimNotify_Bow_AttachArrow(); // (BlueprintCallable|BlueprintEvent)
	void AnimNotify_Bow_DetachArrow(); // (BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_SequencePlayer_027BD3E946F928B992A76FBFA01F1E91(); // (BlueprintEvent)
	void BlueprintBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

