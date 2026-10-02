// AnimBlueprintGeneratedClass SK-Deer_AnimBP.SK-Deer_AnimBP_C
struct USK-Deer_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_AimOffsetLookAt AnimGraphNode_AimOffsetLookAt; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct FVector __CustomProperty_Trace_Length_162BB0D7450977913D57BAA9039D54DD; 
	float __CustomProperty_Trace_Offset_162BB0D7450977913D57BAA9039D54DD; 
	float __CustomProperty_Pelvis_Speed_Inc_162BB0D7450977913D57BAA9039D54DD; 
	float __CustomProperty_Pelvis_Speed_Dec_162BB0D7450977913D57BAA9039D54DD; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Deer_AnimBP_AnimGraphNode_BlendSpacePlayer_4D5A5B6C4BC22AA35441F7BC6BC83EE6(); // (BlueprintEvent)
	void ExecuteUbergraph_SK-Deer_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

