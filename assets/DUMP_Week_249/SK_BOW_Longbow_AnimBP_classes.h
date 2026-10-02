// AnimBlueprintGeneratedClass SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C
struct USK_BOW_Longbow_AnimBP_C : UIcarusBowAnimInstance {
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
	struct FVector __CustomProperty_ArrowPlacment_346C68914A7EEA8B0E6F73955A504C04; 
	struct FTransform __CustomProperty_String_Global_Position_346C68914A7EEA8B0E6F73955A504C04; 
	struct FVector __CustomProperty_ArrowPlacment_05FAAC694154BA327AF6E0A82B580580; 
	struct FTransform __CustomProperty_AttachArrowToHand_05FAAC694154BA327AF6E0A82B580580; 
	struct UBP_ActionableBehaviour_Firearm_C* FirearmActionable; 
	struct AIcarusPlayerCharacter* Player; 
	bool IsArrowDetached; 
	bool Focusing; 
	struct UBP_FocusableBehaviour_C* FocusableRef; 
	struct FTransform StringWorldPosition; 
	struct FVector HandArrowPlacment; 
	bool Is3RDCha; 
	struct FTransform AttachOffset; 
	struct UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire Controller; 
	struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo Controller; 
	struct UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim Controller; 
	struct AIcarusPlayerCharacterSurvival* Owning Player; 
	bool ThirdPerson; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void CacheHandArrowPlacement(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CacheStringPosition(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CacheThirdPerson(); // (Public|BlueprintCallable|BlueprintEvent)
	void CacheFocusing(); // (Public|BlueprintCallable|BlueprintEvent)
	bool IsHandConnectedToString(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_BlendListByBool_D7940AD64B37E8BEA845C2A18C4FD86C(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequencePlayer_4A2404824A08E424DAF3A4BA753A97BE(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_BlendListByBool_D3E8A1FE4BB1A8BC9F8CFC80F89D5E09(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequenceEvaluator_595421C94D66207DCDE8EFA1D2C571C7(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequenceEvaluator_9CA2EBF6477B6F236BD1439AF9F9EE08(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void AnimNotify_Bow_AttachArrow(); // (BlueprintCallable|BlueprintEvent)
	void AnimNotify_Bow_DetachArrow(); // (BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequencePlayer_E32111814FB4E3E3640C89B10C4AEEAA(); // (BlueprintEvent)
	void ExecuteUbergraph_SK_BOW_Longbow_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

