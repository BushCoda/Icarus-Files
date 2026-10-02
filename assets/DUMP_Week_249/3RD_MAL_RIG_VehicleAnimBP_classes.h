// AnimBlueprintGeneratedClass 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C
struct U3RD_MAL_RIG_VehicleAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_Root AnimGraphNode_Root_3; 
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; 
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; 
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; 
	struct FAnimNode_Root AnimGraphNode_Root_2; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_2; 
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; 
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; 
	float VehicleSpeed; 
	float AnimDelta; 
	struct UObject* VehicleRef; 
	bool IsDriver; 
	struct FVector LHandSocketLocation; 
	struct FVector RHandSocketLocation; 
	struct FRotator LookRot; 
	float AimPitch; 
	float AimYaw; 

	void VehicleLowerBody(struct FPoseLink LowerInPose, struct FPoseLink& VehicleLowerBody); // (HasOutParms|BlueprintCallable)
	void VehicleUpperBody(struct FPoseLink UpperInPose, struct FPoseLink& VehicleUpperBody); // (HasOutParms|BlueprintCallable)
	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1BEB1E3046A901C989FDE0A7EE266963(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1789D1784BEF7D2507088CBCDA1D2102(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

