// AnimBlueprintGeneratedClass SK_CRE_Ape_AnimBP.SK_CRE_Ape_AnimBP_C
struct USK_CRE_Ape_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FVector __CustomProperty_TargetLocation_F83B696C4A7EB26632AFE285FB302659; 
	bool IsAlive; 
	bool IsCarryingLog; 
	bool IsHangingInTree; 
	bool IsOnTrunk; 
	float RotationRate; 
	struct FRotator LastRotation; 
	struct FPositionHistory History; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ape_AnimBP_AnimGraphNode_ControlRig_F83B696C4A7EB26632AFE285FB302659(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ape_AnimBP_AnimGraphNode_BlendSpacePlayer_CAE9046C494769BFA73232834A47DD9C(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ape_AnimBP_AnimGraphNode_BlendSpacePlayer_FF04141440AAA3CDA65C07A5449AC4B1(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ape_AnimBP_AnimGraphNode_BlendListByBool_9F56B4E94B5244A93D551A9CC36D131A(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ape_AnimBP_AnimGraphNode_BlendListByBool_C6BFFEF34D9C41AB7354F0B4E49611D2(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_Ape_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

