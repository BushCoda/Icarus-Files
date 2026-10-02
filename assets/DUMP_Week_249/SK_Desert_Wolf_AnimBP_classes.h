// AnimBlueprintGeneratedClass SK_Desert_Wolf_AnimBP.SK_Desert_Wolf_AnimBP_C
struct USK_Desert_Wolf_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	bool __CustomProperty_DoLookAt_FC737F594D01C688654279A44529201A; 
	struct FVector __CustomProperty_LookAtTargetLocation_FC737F594D01C688654279A44529201A; 
	enum class EMovementState Current Movement State; 
	bool HasViewTarget; 
	struct FVector ViewTargetLocation; 
	bool IsAttacking; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Desert_Wolf_AnimBP_AnimGraphNode_ControlRig_FC737F594D01C688654279A44529201A(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Desert_Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_B3863DA049C4A74B971F619B0FD61247(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Desert_Wolf_AnimBP_AnimGraphNode_BlendListByBool_128B444E415F16FC38C222AAEFEB06F0(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Desert_Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_38B68DAB487E52F829BFDF832E9709C8(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_Desert_Wolf_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

