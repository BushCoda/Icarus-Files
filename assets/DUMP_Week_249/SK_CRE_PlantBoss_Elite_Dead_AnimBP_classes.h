// AnimBlueprintGeneratedClass SK_CRE_PlantBoss_Elite_Dead_AnimBP.SK_CRE_PlantBoss_Elite_Dead_AnimBP_C
struct USK_CRE_PlantBoss_Elite_Dead_AnimBP_C : UIcarusCorpseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_Slot AnimGraphNode_Slot_2; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_PlantBoss_Elite_Dead_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

