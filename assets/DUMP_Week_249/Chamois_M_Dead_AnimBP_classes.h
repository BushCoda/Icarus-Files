// AnimBlueprintGeneratedClass Chamois_M_Dead_AnimBP.Chamois_M_Dead_AnimBP_C
struct UChamois_M_Dead_AnimBP_C : UIcarusCorpseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FVector FakeVelocity; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_Chamois_M_Dead_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

