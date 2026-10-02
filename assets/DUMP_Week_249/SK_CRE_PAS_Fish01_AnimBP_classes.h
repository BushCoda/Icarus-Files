// AnimBlueprintGeneratedClass SK_CRE_PAS_Fish01_AnimBP.SK_CRE_PAS_Fish01_AnimBP_C
struct USK_CRE_PAS_Fish01_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; 
	float __CustomProperty_RotationRate_59A6B454476A46BE947F70B5CEC02806; 
	float __CustomProperty_NewSpeed_59A6B454476A46BE947F70B5CEC02806; 
	bool __CustomProperty_AnimateFins_59A6B454476A46BE947F70B5CEC02806; 
	struct AFishActor* FishOwner; 
	bool IsDead; 
	float Speed Alpha; 
	struct FPositionHistory History; 
	struct FPositionHistory RotationHistory; 
	struct FRotator LastRotation; 
	float RotationRate; 
	bool ShouldAnimateFins; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_PAS_Fish01_AnimBP_AnimGraphNode_ControlRig_59A6B454476A46BE947F70B5CEC02806(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_PAS_Fish01_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

