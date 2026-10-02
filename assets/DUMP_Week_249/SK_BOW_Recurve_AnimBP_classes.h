// AnimBlueprintGeneratedClass SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C
struct USK_BOW_Recurve_AnimBP_C : UIcarusBowAnimInstance {
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
	struct FVector __CustomProperty_ArrowPlacment_E90AF9D644AEB8C07771F59532BDEF56; 
	struct FTransform __CustomProperty_String_Global_Position_E90AF9D644AEB8C07771F59532BDEF56; 
	struct FVector __CustomProperty_ArrowPlacment_63770F5D487BC3C2C8FC61BDF209CFEB; 
	struct FTransform __CustomProperty_AttachArrowToHand_63770F5D487BC3C2C8FC61BDF209CFEB; 
	struct UBP_ActionableBehaviour_Firearm_C* FirearmActionable; 
	struct AIcarusPlayerCharacter* Player; 
	struct UBP_FocusableBehaviour_C* FocusableRef; 
	bool Focusing; 
	struct FTransform StringWorldPosition; 
	struct FVector HandArrowPlacment; 
	bool IsArrowDetached; 
	struct FTransform AttachOffset; 
	bool Is3RDCha; 
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_BlendListByBool_9FE755934092A3714CDB3BABCD5F562B(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_SequencePlayer_6D67B7A94934BA80010E5EB98B8BC4AA(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_BlendListByBool_5CCE1804490BB6F54953859DB5E08E0B(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_SequenceEvaluator_CED749E64C3E4B0A031299956B3C373E(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_SequenceEvaluator_736F35A04FB3715EF40F09B932EC537D(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void AnimNotify_Bow_AttachArrow(); // (BlueprintCallable|BlueprintEvent)
	void AnimNotify_Bow_DetachArrow(); // (BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_SequencePlayer_709802004986C92C91829C952F86F9CC(); // (BlueprintEvent)
	void ExecuteUbergraph_SK_BOW_Recurve_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

