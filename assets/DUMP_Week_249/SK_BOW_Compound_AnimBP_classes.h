// AnimBlueprintGeneratedClass SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C
struct USK_BOW_Compound_AnimBP_C : UIcarusBowAnimInstance {
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
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct FVector __CustomProperty_ArrowPlacment_BDB4F72B4518DD90CB4119BB036AE435; 
	struct FTransform __CustomProperty_String_Global_Position_BDB4F72B4518DD90CB4119BB036AE435; 
	struct FVector __CustomProperty_ArrowPlacment_B26C34D24B2ABA795C98F4812B72BFD8; 
	struct FTransform __CustomProperty_AttachArrowToHand_B26C34D24B2ABA795C98F4812B72BFD8; 
	struct UBP_ActionableBehaviour_Firearm_C* FirearmActionable; 
	struct AIcarusPlayerCharacter* Player; 
	struct UBP_FocusableBehaviour_C* FocusableRef; 
	bool IsArrowDetached; 
	bool Focusing; 
	struct FTransform StringWorldPosition; 
	struct FVector HandArrowPlacment; 
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_BlendListByBool_AA08317045CA4F85288555AB8FBA0EF1(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_SequencePlayer_37F8541B4B53CE1261744D83C201076C(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_BlendListByBool_DBE7D59C4B35C1FDDCF1678B47AFDFDF(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_SequenceEvaluator_6C687CB14ABBE926703B7C974DD74AF9(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_SequenceEvaluator_0B377C5B4EC457C562A423A9AC27E086(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void AnimNotify_Bow_AttachArrow(); // (BlueprintCallable|BlueprintEvent)
	void AnimNotify_Bow_DetachArrow(); // (BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_SequencePlayer_36B9DD0F47DEB9B544D99B9083D0FC99(); // (BlueprintEvent)
	void ExecuteUbergraph_SK_BOW_Compound_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

