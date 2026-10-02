// AnimBlueprintGeneratedClass SK_ITM_FishingRod_T2_AnimBP.SK_ITM_FishingRod_T2_AnimBP_C
struct USK_ITM_FishingRod_T2_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	bool ShouldSnapToHand; 
	struct FTransform HandTargetTransform; 
	bool IsReeling; 
	float BendAmount; 
	struct FPositionHistory LurePositionHistory; 
	struct FFishDataRowHandle DefaultFish; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP_AnimGraphNode_ModifyBone_99CC83BD479B6388B303B6AA9641FEBC(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

