// AnimBlueprintGeneratedClass SK_CRE_Zebra_AnimBP.SK_CRE_Zebra_AnimBP_C
struct USK_CRE_Zebra_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; 
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Zebra_AnimBP_AnimGraphNode_BlendSpacePlayer_9B0353D541B1DA29C4BBAABCA161B88F(); // (BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_Zebra_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

