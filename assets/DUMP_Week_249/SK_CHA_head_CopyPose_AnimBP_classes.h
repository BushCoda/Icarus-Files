// AnimBlueprintGeneratedClass SK_CHA_head_CopyPose_AnimBP.SK_CHA_head_CopyPose_AnimBP_C
struct USK_CHA_head_CopyPose_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; 
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	bool IsAlive; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_CHA_head_CopyPose_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

