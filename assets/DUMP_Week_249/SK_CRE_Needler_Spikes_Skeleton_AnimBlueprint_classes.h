// AnimBlueprintGeneratedClass SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint.SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C
struct USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; 
	bool OnCooldown; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint(int32_t EntryPoint); // (Final|UbergraphFunction)
};

