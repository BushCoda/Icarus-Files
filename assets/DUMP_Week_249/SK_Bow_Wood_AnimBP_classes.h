// AnimBlueprintGeneratedClass SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C
struct USK_Bow_Wood_AnimBP_C : UIcarusBowAnimInstance {
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
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_3; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct FVector __CustomProperty_ArrowPlacment_1AFC6DC841DF1B33A148B680C698303C; 
	struct FTransform __CustomProperty_String_Global_Position_1AFC6DC841DF1B33A148B680C698303C; 
	struct FVector __CustomProperty_ArrowPlacment_762D9D894231EBD747476CA4B48DD47C; 
	struct FTransform __CustomProperty_AttachArrowToHand_762D9D894231EBD747476CA4B48DD47C; 
	struct UBP_ActionableBehaviour_Firearm_C* FirearmActionable; 
	struct AIcarusPlayerCharacter* Player; 
	struct FTransform StringWorldPosition; 
	struct FVector HandArrowPlacment; 
	bool ArrowSwitch; 
	bool IsArrowDetached; 
	struct UBP_FocusableBehaviour_C* FocusableRef; 
	bool Focusing; 
	struct FTransform AttachOffset; 
	bool Is3RDCha; 
	struct UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire Controller; 
	struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo Controller; 
	struct UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim Controller; 
	struct AIcarusPlayerCharacterSurvival* Owning Player; 
	bool ThirdPerson; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void CacheFocusing(); // (Public|BlueprintCallable|BlueprintEvent)
	void CacheHandArrowPlacement(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CacheStringPosition(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CacheThirdPerson(); // (Public|BlueprintCallable|BlueprintEvent)
	bool IsHandConnectedToString(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_BlendListByBool_70413D204D31EB91B5FDB9A182B588B7(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequencePlayer_32A8F6624DF7992ABC9209A21EF8085F(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_BlendListByBool_64FCB31F4605BEED61D62A8CB5B4B258(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequenceEvaluator_7C9B176D4A593DD24D7ABFA297A8BA37(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequenceEvaluator_6DD8745D426A6F38770086BF085F12DF(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequencePlayer_0B0929B943D728A6B691ABBCA2363390(); // (BlueprintEvent)
	void AnimNotify_Bow_AttachArrow(); // (BlueprintCallable|BlueprintEvent)
	void AnimNotify_Bow_DetachArrow(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_Bow_Wood_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

