// AnimBlueprintGeneratedClass SK_CHA_3RD_MAL_01_GraveStone_AnimBP.SK_CHA_3RD_MAL_01_GraveStone_AnimBP_C
struct USK_CHA_3RD_MAL_01_GraveStone_AnimBP_C : UIcarusCorpseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; 
	struct ABP_Gravestone_C* As BP Gravestone; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_CHA_3RD_MAL_01_GraveStone_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

