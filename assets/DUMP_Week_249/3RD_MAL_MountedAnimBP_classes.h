// AnimBlueprintGeneratedClass 3RD_MAL_MountedAnimBP.3RD_MAL_MountedAnimBP_C
struct U3RD_MAL_MountedAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; 
	struct FAnimNode_Root AnimGraphNode_Root_3; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; 
	struct FAnimNode_Root AnimGraphNode_Root_2; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_2; 
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; 
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; 
	float __CustomProperty_VerletStrength_F17B49B14661E62C569CBAA56F4B29C5; 
	struct FVector __CustomProperty_RelativeFeetOffset_F17B49B14661E62C569CBAA56F4B29C5; 
	float __CustomProperty_VerletStrength_6654F16B430AA80A67797180F44F704C; 
	struct FVector __CustomProperty_LookAtDirection_6654F16B430AA80A67797180F44F704C; 
	bool __CustomProperty_DoLookAt_6654F16B430AA80A67797180F44F704C; 
	struct FVector __CustomProperty_HandSpaceTargetLocation_6654F16B430AA80A67797180F44F704C; 
	struct FVector __CustomProperty_RelativeHandsOffset_6654F16B430AA80A67797180F44F704C; 
	float __CustomProperty_SpineCurlAmount_6654F16B430AA80A67797180F44F704C; 
	float MountSpeed; 
	float AnimDelta; 
	struct FRotator LookRot; 
	float AimPitch; 
	float AimYaw; 
	struct ACharacter* MountCharacterRef; 
	struct FVector LookAtLocation; 
	float SmoothDirection; 
	struct FRotator LastRotation; 
	float TurnRate; 
	struct FVector RelativeFeetOffset; 
	struct FVector RelativeHandsOffset; 
	struct FVector HandsTargetLocation; 
	struct FVector LookAtDirection; 
	float VerletStrength; 

	void VehicleLowerBody(struct FPoseLink LowerInPose, struct FPoseLink& VehicleLowerBody); // (HasOutParms|BlueprintCallable)
	void VehicleUpperBody(struct FPoseLink UpperInPose, struct FPoseLink& VehicleUpperBody); // (HasOutParms|BlueprintCallable)
	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateTurnRate(); // (Public|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_MountedAnimBP_AnimGraphNode_TwoWayBlend_3FCC041B44867FFDEEAC279126665C3E(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_MountedAnimBP_AnimGraphNode_ControlRig_6654F16B430AA80A67797180F44F704C(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_3RD_MAL_MountedAnimBP(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

