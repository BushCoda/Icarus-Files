// AnimBlueprintGeneratedClass SK_DEP_Trap_Small_T4_AnimBP.SK_DEP_Trap_Small_T4_AnimBP_C
struct USK_DEP_Trap_Small_T4_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	bool IsTrapOpened; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_DEP_Trap_Small_T4_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

