// AnimBlueprintGeneratedClass SK_DEP_Armor_Stand_T4_Case_AnimBP.SK_DEP_Armor_Stand_T4_Case_AnimBP_C
struct USK_DEP_Armor_Stand_T4_Case_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	bool Case Open; 
	bool Is Interacting; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_Armor_Stand_T4_Case_AnimBP_AnimGraphNode_TransitionResult_9D6945AC404AC7D164339C839785C378(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_Armor_Stand_T4_Case_AnimBP_AnimGraphNode_TransitionResult_BF3B48AE4B60EA33314972838E0258D7(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_DEP_Armor_Stand_T4_Case_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

