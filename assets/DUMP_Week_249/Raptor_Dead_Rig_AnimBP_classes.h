// AnimBlueprintGeneratedClass Raptor_Dead_Rig_AnimBP.Raptor_Dead_Rig_AnimBP_C
struct URaptor_Dead_Rig_AnimBP_C : UIcarusCorpseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; 
	struct FVector ViewTargetLocation; 
	bool HasViewTarget; 
	bool IsAttacking; 
	float PostureBlendTime; 
	bool Is Attacking; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_Raptor_Dead_Rig_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

