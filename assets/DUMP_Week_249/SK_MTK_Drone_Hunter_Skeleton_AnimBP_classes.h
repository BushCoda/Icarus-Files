// AnimBlueprintGeneratedClass SK_MTK_Drone_Hunter_Skeleton_AnimBP.SK_MTK_Drone_Hunter_Skeleton_AnimBP_C
struct USK_MTK_Drone_Hunter_Skeleton_AnimBP_C : UIcarusCreatureAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_Slot AnimGraphNode_Slot_2; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	float LastFrameVelocity; 
	float GameTime; 
	float BankingRate; 
	float CurrentAcceleration; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Hunter_Skeleton_AnimBP_AnimGraphNode_ModifyBone_F6628B574B4410B2AC30679976B37250(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Hunter_Skeleton_AnimBP_AnimGraphNode_ModifyBone_5E8490404FB778AADBDDCD93C99B7BEE(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Hunter_Skeleton_AnimBP_AnimGraphNode_ModifyBone_7FFBF6414A27FB44621C0F9E7E908B03(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Hunter_Skeleton_AnimBP_AnimGraphNode_ModifyBone_FE9ED1564680E298B40219B437CC3709(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_MTK_Drone_Hunter_Skeleton_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

