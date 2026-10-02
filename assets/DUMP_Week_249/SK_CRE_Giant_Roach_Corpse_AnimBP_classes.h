// AnimBlueprintGeneratedClass SK_CRE_Giant_Roach_Corpse_AnimBP.SK_CRE_Giant_Roach_Corpse_AnimBP_C
struct USK_CRE_Giant_Roach_Corpse_AnimBP_C : UIcarusCorpseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_Giant_Roach_Corpse_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

