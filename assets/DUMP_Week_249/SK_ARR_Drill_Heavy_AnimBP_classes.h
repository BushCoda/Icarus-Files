// AnimBlueprintGeneratedClass SK_ARR_Drill_Heavy_AnimBP.SK_ARR_Drill_Heavy_AnimBP_C
struct USK_ARR_Drill_Heavy_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	float ChargedAmountForAnim; 
	bool ChargedForAnim; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_ARR_Drill_Heavy_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

