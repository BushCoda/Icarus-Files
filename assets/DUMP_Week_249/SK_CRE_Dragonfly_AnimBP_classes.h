// AnimBlueprintGeneratedClass SK_CRE_Dragonfly_AnimBP.SK_CRE_Dragonfly_AnimBP_C
struct USK_CRE_Dragonfly_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FVector __CustomProperty_TorsoLookAtTargetLocation_9E49824343533777648F36B1E52FAB2D; 
	bool __CustomProperty_EnableTorsoLookAt_9E49824343533777648F36B1E52FAB2D; 
	bool __CustomProperty_DoLookAt_9E49824343533777648F36B1E52FAB2D; 
	struct FVector __CustomProperty_LookAtTargetLocation_9E49824343533777648F36B1E52FAB2D; 
	enum class EMovementMode CurrentMovementMode; 
	struct FVector TorsoTargetLocation; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Dragonfly_AnimBP_AnimGraphNode_ModifyBone_2814004247DE764C00432190FE7237BC(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Dragonfly_AnimBP_AnimGraphNode_BlendListByBool_5ADDEF924030880506F59184F565FB2B(); // (BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_Dragonfly_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

