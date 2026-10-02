// AnimBlueprintGeneratedClass SK_CRE_Wildboar_AnimBP.SK_CRE_Wildboar_AnimBP_C
struct USK_CRE_Wildboar_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; 
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; 
	bool IsMovingSlowly; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wildboar_AnimBP_AnimGraphNode_BlendSpacePlayer_9523E0B74D074D3E7B4604A705BAC5DC(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wildboar_AnimBP_AnimGraphNode_BlendListByBool_4490A51240C283C2092C1E9CB4615D4C(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wildboar_AnimBP_AnimGraphNode_BlendSpacePlayer_92EE1771417D27777DB20988308559C1(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_Wildboar_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

