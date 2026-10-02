// AnimBlueprintGeneratedClass SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint.SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C
struct USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct UBP_ActionableBehaviour_Firearm_Base_C* NewFirearmBehaviourBase; 
	bool Loaded; 
	struct FTransform LoadedBulletTransform; 
	bool ThirdPerson; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_92A4012B473AB4B30E1C49ADACAD368B(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_15087A6A449F8634B0209B8B01722CFE(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint(int32_t EntryPoint); // (Final|UbergraphFunction)
};

