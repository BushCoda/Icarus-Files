// AnimBlueprintGeneratedClass SK_ITM_BF_LAM_AnimBP.SK_ITM_BF_LAM_AnimBP_C
struct USK_ITM_BF_LAM_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_ITM_BF_LAM_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

