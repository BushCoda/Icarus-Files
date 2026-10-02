// AnimBlueprintGeneratedClass SK_CRE_Suzie_WorldBossProxy_AnimBP.SK_CRE_Suzie_WorldBossProxy_AnimBP_C
struct USK_CRE_Suzie_WorldBossProxy_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	bool IsPlayingMontage; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Suzie_WorldBossProxy_AnimBP_AnimGraphNode_ModifyBone_72AD53C74CE0BAB23BD9F5AC49B397C0(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_Suzie_WorldBossProxy_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

