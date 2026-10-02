// AnimBlueprintGeneratedClass SK_VHC_Speeder_Bike_AnimBP.SK_VHC_Speeder_Bike_AnimBP_C
struct USK_VHC_Speeder_Bike_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; 
	struct FAnimNode_Slot AnimGraphNode_Slot_2; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FTransform __CustomProperty_InterpolatedWorldPosition_778F051B4E3973B579C2C59E9C6F1577; 
	float __CustomProperty_DesiredFloorDistance_778F051B4E3973B579C2C59E9C6F1577; 
	struct FTransform __CustomProperty_InterpolatedWorldPosition_BBF3D394469D6BC23078C5B3555E0567; 
	float __CustomProperty_DesiredFloorDistance_BBF3D394469D6BC23078C5B3555E0567; 
	struct FVector __CustomProperty_Trace_Length_BBF3D394469D6BC23078C5B3555E0567; 
	float BankingRate; 
	float CurrentAcceleration; 
	float GameTime; 
	float LastFrameVelocity; 
	struct FPositionHistory History; 
	bool IsActive; 
	struct FTransform InterpolatedTransform; 
	struct FVector Trace Length; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VHC_Speeder_Bike_AnimBP_AnimGraphNode_ModifyBone_9A230EE540B2F8A39C650D912E2F1F60(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VHC_Speeder_Bike_AnimBP_AnimGraphNode_ModifyBone_283471A0460803CC47FF859D75810814(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VHC_Speeder_Bike_AnimBP_AnimGraphNode_ModifyBone_30FEAC154C4C2FD83E85C49407EC8C6F(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VHC_Speeder_Bike_AnimBP_AnimGraphNode_ModifyBone_CC4A0F19445C90246FC25996A747D4CA(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void BlueprintBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_VHC_Speeder_Bike_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

