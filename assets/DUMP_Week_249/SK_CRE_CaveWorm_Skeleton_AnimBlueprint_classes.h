// AnimBlueprintGeneratedClass SK_CRE_CaveWorm_Skeleton_AnimBlueprint.SK_CRE_CaveWorm_Skeleton_AnimBlueprint_C
struct USK_CRE_CaveWorm_Skeleton_AnimBlueprint_C : UAnimInstance {
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
	struct FAnimNode_Slot AnimGraphNode_Slot_2; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct ABP_FactionBoss_SandWorm_C* PawnRef; 
	enum class SandWormState CurrentState; 
	struct AActor* TargetActor; 
	float IKStrength; 
	bool UseLookat; 
	struct FVector TargetLocation; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_CaveWorm_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C2DD44F84FD89510C541FCBBB880E11C(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_CaveWorm_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_D06C46C149BF31769569429549049039(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_CaveWorm_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_F089911449BA2E3681A250AE7AEFBF65(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_CaveWorm_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_BF96E064498759C8F379B4A48AB6609C(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_CaveWorm_Skeleton_AnimBlueprint(int32_t EntryPoint); // (Final|UbergraphFunction)
};

