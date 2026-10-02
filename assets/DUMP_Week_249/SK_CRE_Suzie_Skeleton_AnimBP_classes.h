// AnimBlueprintGeneratedClass SK_CRE_Suzie_Skeleton_AnimBP.SK_CRE_Suzie_Skeleton_AnimBP_C
struct USK_CRE_Suzie_Skeleton_AnimBP_C : UIcarusAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_LookAt AnimGraphNode_LookAt; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_Slot AnimGraphNode_Slot_3; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct FAnimNode_Slot AnimGraphNode_Slot_2; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct ABP_FactionBoss_SandWorm_C* PawnRef; 
	enum class SandWormState CurrentState; 
	struct AActor* TargetActor; 
	float IKStrength; 
	bool UseLookat; 
	struct FVector TargetLocation; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Suzie_Skeleton_AnimBP_AnimGraphNode_TransitionResult_957C4EB247E9D11DD69286A1EAEA5D8D(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Suzie_Skeleton_AnimBP_AnimGraphNode_TransitionResult_6DD9223641FB1047C7E03AB00DA5A11B(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Suzie_Skeleton_AnimBP_AnimGraphNode_TransitionResult_BDE704BB41C47520E5B35990ED2F4094(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Suzie_Skeleton_AnimBP_AnimGraphNode_TransitionResult_660BB6054D55F6652D3BF1BB9D16ED45(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void AnimNotify_HideMesh(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_Suzie_Skeleton_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

