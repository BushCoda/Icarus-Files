// AnimBlueprintGeneratedClass 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C
struct U3RD_MAL_RIG_BedAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root_3; 
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; 
	struct FAnimNode_Root AnimGraphNode_Root_2; 
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FVector Offset; 

	void VehicleLowerBody(struct FPoseLink LowerInPose, struct FPoseLink& VehicleLowerBody); // (HasOutParms|BlueprintCallable)
	void VehicleUpperBody(struct FPoseLink UpperInPose, struct FPoseLink& VehicleUpperBody); // (HasOutParms|BlueprintCallable)
	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_3RD_MAL_RIG_BedAnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

