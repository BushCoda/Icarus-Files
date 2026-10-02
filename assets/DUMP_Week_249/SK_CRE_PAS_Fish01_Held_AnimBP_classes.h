// AnimBlueprintGeneratedClass SK_CRE_PAS_Fish01_Held_AnimBP.SK_CRE_PAS_Fish01_Held_AnimBP_C
struct USK_CRE_PAS_Fish01_Held_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_PAS_Fish01_Held_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

