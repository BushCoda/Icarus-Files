// AnimBlueprintGeneratedClass SK_Juvenile_RockGolem_Corpse_Animbp.SK_Juvenile_RockGolem_Corpse_Animbp_C
struct USK_Juvenile_RockGolem_Corpse_Animbp_C : UIcarusCorpseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_Root AnimGraphNode_Root; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_Juvenile_RockGolem_Corpse_Animbp(int32_t EntryPoint); // (Final|UbergraphFunction)
};

