// AnimBlueprintGeneratedClass SK_BLD_Door_Thatch_AnimBP.SK_BLD_Door_Thatch_AnimBP_C
struct USK_BLD_Door_Thatch_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP_AnimGraphNode_TransitionResult_6485B04B4B596747616CAF8544E2E406(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP_AnimGraphNode_TransitionResult_0FA510EF4A4BA6BCC6A1698EB14B1B77(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP_AnimGraphNode_TransitionResult_5CD59F474518F44E8E55AC9C7CB1855D(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP_AnimGraphNode_TransitionResult_EE26991843F7EC0EA646C5A92B6AC7BF(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

