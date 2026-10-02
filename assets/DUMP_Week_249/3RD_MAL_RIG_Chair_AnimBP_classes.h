// AnimBlueprintGeneratedClass 3RD_MAL_RIG_Chair_AnimBP.3RD_MAL_RIG_Chair_AnimBP_C
struct U3RD_MAL_RIG_Chair_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; 
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; 
	struct FAnimNode_Root AnimGraphNode_Root_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_Chair_AnimBP_AnimGraphNode_TwoWayBlend_C412B1A04C8A3F73B4E7E89ED8F54F8C(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_3RD_MAL_RIG_Chair_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

