// AnimBlueprintGeneratedClass SK_CRE_Sheep_Dead_AnimBP.SK_CRE_Sheep_Dead_AnimBP_C
struct USK_CRE_Sheep_Dead_AnimBP_C : UIcarusCorpseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct FVector FakeVelocity; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_Sheep_Dead_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

