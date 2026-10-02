// AnimBlueprintGeneratedClass SK_DEP_Extractor_01_Skeleton_AnimBP.SK_DEP_Extractor_01_Skeleton_AnimBP_C
struct USK_DEP_Extractor_01_Skeleton_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	bool IsExtracting; 
	bool IsPlayerInteracting; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_Extractor_01_Skeleton_AnimBP_AnimGraphNode_SequencePlayer_59594FD44D367B03FA0A2094C6B408CD(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_DEP_Extractor_01_Skeleton_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

