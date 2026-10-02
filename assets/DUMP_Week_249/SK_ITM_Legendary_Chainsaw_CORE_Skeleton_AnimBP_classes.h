// AnimBlueprintGeneratedClass SK_ITM_Legendary_Chainsaw_CORE_Skeleton_AnimBP.SK_ITM_Legendary_Chainsaw_CORE_Skeleton_AnimBP_C
struct USK_ITM_Legendary_Chainsaw_CORE_Skeleton_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct ABP_SkeletalItem_Sandwyrm_Chainsaw_C* Chainsaw; 
	struct AIcarusPlayerCharacter* Player; 
	float ChainsawCharge; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_ITM_Legendary_Chainsaw_CORE_Skeleton_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

