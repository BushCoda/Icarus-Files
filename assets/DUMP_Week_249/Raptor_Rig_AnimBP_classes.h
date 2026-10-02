// AnimBlueprintGeneratedClass Raptor_Rig_AnimBP.Raptor_Rig_AnimBP_C
struct URaptor_Rig_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_Slot AnimGraphNode_Slot_2; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	bool __CustomProperty_FourLeg_8BE6DE3840CE29EF8CD2CD8B7EE87A34; 
	float __CustomProperty_NeckScale_37C974F2442C7C07ABFFD4A14D44E9C8; 
	bool __CustomProperty_IsOnFourLegs_37C974F2442C7C07ABFFD4A14D44E9C8; 
	bool __CustomProperty_DoLookAt_37C974F2442C7C07ABFFD4A14D44E9C8; 
	struct FVector __CustomProperty_LookAtTargetLocation_37C974F2442C7C07ABFFD4A14D44E9C8; 
	bool Crouching; 
	float DriftIntensity; 
	struct UNiagaraComponent* DriftParticle_L; 
	struct UNiagaraComponent* DriftParticle_R; 
	struct TArray<enum class EPhysicalSurface> DisallowedSurfaces; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_Rig_AnimBP_AnimGraphNode_BlendSpacePlayer_50AB0677404001641A73829B2F6E8E39(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_Rig_AnimBP_AnimGraphNode_BlendSpacePlayer_45B302644035215ABE66D7844FA5A1ED(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_Rig_AnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_2ACFC64A4562C5720FD7F29239768D65(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_Rig_AnimBP_AnimGraphNode_BlendListByBool_84698EF9462E74306130E1AF478D314E(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void BlueprintBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_Raptor_Rig_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

