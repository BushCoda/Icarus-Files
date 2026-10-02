// AnimBlueprintGeneratedClass CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C
struct UCHA_3RD_MAL_RIG_DropShipAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; 
	struct FAnimNode_Root AnimGraphNode_Root_3; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; 
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; 
	struct FAnimNode_Root AnimGraphNode_Root_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_2; 
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; 
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; 
	bool IsDriver; 
	struct UObject* VehicleRef; 
	float AimPitch; 
	float AimYaw; 
	struct FRotator LookRot; 
	float AnimDelta; 
	float VehicleSpeed; 
	struct FVector LHandSocketLocation; 
	struct FVector RHandSocketLocation; 
	bool Shake; 

	void VehicleLowerBody(struct FPoseLink LowerInPose, struct FPoseLink& VehicleLowerBody); // (HasOutParms|BlueprintCallable)
	void VehicleUpperBody(struct FPoseLink UpperInPose, struct FPoseLink& VehicleUpperBody); // (HasOutParms|BlueprintCallable)
	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP_AnimGraphNode_TwoWayBlend_48EE6D0D44CF60EFC312A8956D6A7A38(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

