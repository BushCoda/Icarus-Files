// AnimBlueprintGeneratedClass SK_CRE_Zebra_Dead_AnimBP.SK_CRE_Zebra_Dead_AnimBP_C
struct USK_CRE_Zebra_Dead_AnimBP_C : UIcarusCorpseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_Fabrik AnimGraphNode_Fabrik; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FVector FakeVelocity; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_Zebra_Dead_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

