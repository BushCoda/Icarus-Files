// AnimBlueprintGeneratedClass 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C
struct U1ST_CHA_RIG_VehicleAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root_3; 
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; 
	struct FAnimNode_Root AnimGraphNode_Root_2; 
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; 
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; 
	float DeltaT; 
	bool IsDriver; 
	struct UObject* VehicleRef; 
	float VehicleSpeed; 
	float SteeringValue; 
	float TotalSteeringAngle; 
	struct FVector LHandSocketLocation; 
	struct FVector RHandSocketLocation; 
	float SteeringAngle; 
	float CurrentOriginAngle; 
	float SteeringSpeed; 
	bool IsTurningRight; 
	bool IsTurningLeft; 

	void VehicleLowerBody(struct FPoseLink LowerInPose, struct FPoseLink& VehicleLowerBody); // (HasOutParms|BlueprintCallable)
	void VehicleUpperBody(struct FPoseLink UpperInPose, struct FPoseLink& VehicleUpperBody); // (HasOutParms|BlueprintCallable)
	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_ApplyAdditive_13410CC14B94F4DCCB2E1BAA4AD2333B(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_SequenceEvaluator_F2BD9F5440E7731C01AD5282C93DAE82(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

