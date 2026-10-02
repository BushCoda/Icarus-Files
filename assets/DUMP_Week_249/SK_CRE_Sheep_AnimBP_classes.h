// AnimBlueprintGeneratedClass SK_CRE_Sheep_AnimBP.SK_CRE_Sheep_AnimBP_C
struct USK_CRE_Sheep_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; 
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	bool __CustomProperty_DoLookAt_E02C58B5480484FDB505E19DAEB4C8A1; 
	struct FVector __CustomProperty_LookAtTargetLocation_E02C58B5480484FDB505E19DAEB4C8A1; 
	struct FVector ViewTargetLocation; 
	bool HasViewTarget; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Sheep_AnimBP_AnimGraphNode_ControlRig_E02C58B5480484FDB505E19DAEB4C8A1(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Sheep_AnimBP_AnimGraphNode_BlendListByBool_C0CDBF0D4E3B310E495964927036A70D(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Sheep_AnimBP_AnimGraphNode_BlendSpacePlayer_07AD3DA747783AEE150966B97D4F0BB7(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Sheep_AnimBP_AnimGraphNode_BlendSpacePlayer_C5CAA5D84B393BBDF934F7904953C9C1(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_Sheep_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

