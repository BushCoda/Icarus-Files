// AnimBlueprintGeneratedClass SK_BOW_Lithium_AnimBP.SK_BOW_Lithium_AnimBP_C
struct USK_BOW_Lithium_AnimBP_C : UIcarusBowAnimInstance {
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
	struct FVector __CustomProperty_ArrowPlacment_CC10F6134E450CFE41829F9129B1CF5F; 
	struct FTransform __CustomProperty_String_Global_Position_CC10F6134E450CFE41829F9129B1CF5F; 
	struct FVector __CustomProperty_ArrowPlacment_E4B4CB0A4917A138ACD794A65F90EC78; 
	struct FTransform __CustomProperty_AttachArrowToHand_E4B4CB0A4917A138ACD794A65F90EC78; 
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Lithium_AnimBP_AnimGraphNode_BlendListByBool_40F7C5EE48EFDF6A512D55A49DA88C87(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Lithium_AnimBP_AnimGraphNode_SequencePlayer_E7CC16E44321028A767D47B000463CC5(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Lithium_AnimBP_AnimGraphNode_BlendListByBool_A2D43A264785D285A1F032B7CD8CE3EC(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Lithium_AnimBP_AnimGraphNode_SequenceEvaluator_8923D4A742BB46DEC030748B4A634842(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Lithium_AnimBP_AnimGraphNode_SequenceEvaluator_17C6CE2D4B5269BC5BB7E08479481C4D(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void AnimNotify_Bow_AttachArrow(); // (BlueprintCallable|BlueprintEvent)
	void AnimNotify_Bow_DetachArrow(); // (BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Lithium_AnimBP_AnimGraphNode_SequencePlayer_2245746043FA0201F09EC4A79904538E(); // (BlueprintEvent)
	void ExecuteUbergraph_SK_BOW_Lithium_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

