// AnimBlueprintGeneratedClass SK_CRE_Kea_AnimBP.SK_CRE_Kea_AnimBP_C
struct USK_CRE_Kea_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; 
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct FVector __CustomProperty_TorsoLookAtTargetLocation_966C1A49486DC8378B1244B2DB71A7C2; 
	bool __CustomProperty_EnableTorsoLookAt_966C1A49486DC8378B1244B2DB71A7C2; 
	bool __CustomProperty_DoLookAt_966C1A49486DC8378B1244B2DB71A7C2; 
	struct FVector __CustomProperty_LookAtTargetLocation_966C1A49486DC8378B1244B2DB71A7C2; 
	enum class EMovementMode CurrentMovementMode; 
	bool IsGliding; 
	bool IsMoving; 
	struct FTimerHandle GlideTimer; 
	float ForcedFlapTime; 
	struct FVector TorsoTargetLocation; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Kea_AnimBP_AnimGraphNode_ControlRig_966C1A49486DC8378B1244B2DB71A7C2(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Kea_AnimBP_AnimGraphNode_ModifyBone_C205FA944404FA52A00D139DF302BC9E(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Kea_AnimBP_AnimGraphNode_BlendSpacePlayer_F20FD6634FBCC3574B6C438AEEA0487E(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Kea_AnimBP_AnimGraphNode_BlendSpacePlayer_6D1A31A94FBDD2B970FB43871890316C(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void OnContinuousGlide(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_CRE_Kea_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

