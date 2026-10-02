// AnimBlueprintGeneratedClass SK_MTK_Drone_GEN_AnimBP.SK_MTK_Drone_GEN_AnimBP_C
struct USK_MTK_Drone_GEN_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; 
	struct FAnimNode_Slot AnimGraphNode_Slot_2; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FPositionHistory History; 
	float LastFrameVelocity; 
	float CurrentAcceleration; 
	float BankingRate; 
	float GameTime; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_GEN_AnimBP_AnimGraphNode_ModifyBone_CD7A2A0745DD81E003CA418207B2716E(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_GEN_AnimBP_AnimGraphNode_ModifyBone_5E780F6A49CC11CBAC711FBF8D875B12(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_GEN_AnimBP_AnimGraphNode_ModifyBone_FE0C9629487E2F938DC37F8CEE8B0065(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_GEN_AnimBP_AnimGraphNode_ModifyBone_AE66C5EC45A526A187B99F8D61BE9EEF(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_MTK_Drone_GEN_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

