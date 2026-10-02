// AnimBlueprintGeneratedClass SK_BLD_Door_Wood_AnimBP.SK_BLD_Door_Wood_AnimBP_C
struct USK_BLD_Door_Wood_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	enum class DoorState DoorState; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP_AnimGraphNode_TransitionResult_B74031CD4ADDB9A8B8EA9DAE29DC8A65(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP_AnimGraphNode_TransitionResult_BB4DC597439248347FA8F98180730FE7(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP_AnimGraphNode_TransitionResult_EB4B26AE41EE4C62CCFB9CB7FA339542(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP_AnimGraphNode_TransitionResult_7A32AE9A48873200E616ECAB2AE96285(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

