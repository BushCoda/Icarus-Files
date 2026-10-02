// AnimBlueprintGeneratedClass SK-Wolf_AnimBP.SK-Wolf_AnimBP_C
struct USK-Wolf_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; 
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	bool __CustomProperty_DoLookAt_9B4ACD6D4D13BDB9189713AAB29F2301; 
	struct FVector __CustomProperty_LookAtTargetLocation_9B4ACD6D4D13BDB9189713AAB29F2301; 
	struct FVector ViewTargetLocation; 
	bool HasViewTarget; 
	bool IsAttacking; 
	bool SupportsRagdoll; 
	float LocomotionMultiplier; 
	bool MakeJawFloppy; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendListByBool_6571ACF8419A8566BC1131A6379BBB1D(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_ControlRig_9B4ACD6D4D13BDB9189713AAB29F2301(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_5A99F42445C3117E4C8398A977885D44(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendListByBool_4126597A410D8E2EE1B0C98E39852809(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_546C95C6415776AEF547859C8D181151(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK-Wolf_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

