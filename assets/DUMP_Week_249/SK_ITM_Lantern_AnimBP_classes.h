// AnimBlueprintGeneratedClass SK_ITM_Lantern_AnimBP.SK_ITM_Lantern_AnimBP_C
struct USK_ITM_Lantern_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; 
	struct FAnimNode_Root AnimGraphNode_Root; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_ITM_Lantern_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

