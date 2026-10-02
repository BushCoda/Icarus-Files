// AnimBlueprintGeneratedClass SK_BLD_Door_Concrete_AnimBP.SK_BLD_Door_Concrete_AnimBP_C
struct USK_BLD_Door_Concrete_AnimBP_C : UAnimInstance {
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Concrete_AnimBP_AnimGraphNode_TransitionResult_A3D6838544ED64268FCD4E975F5FE22E(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Concrete_AnimBP_AnimGraphNode_TransitionResult_3AAF2C9F4EC91AE839D49CABA9F6211A(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Concrete_AnimBP_AnimGraphNode_TransitionResult_BE003330418B246D284C428F47A011DE(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Concrete_AnimBP_AnimGraphNode_TransitionResult_FF085C14479D1B0780A94D8584538C92(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_BLD_Door_Concrete_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

