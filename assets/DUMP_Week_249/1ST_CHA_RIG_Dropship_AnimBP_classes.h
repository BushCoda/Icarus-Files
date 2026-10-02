// AnimBlueprintGeneratedClass 1ST_CHA_RIG_Dropship_AnimBP.1ST_CHA_RIG_Dropship_AnimBP_C
struct U1ST_CHA_RIG_Dropship_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	bool Shake; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_1ST_CHA_RIG_Dropship_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

