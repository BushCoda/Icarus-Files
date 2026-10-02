// AnimBlueprintGeneratedClass SK_GUN_CHACRifle_AnimBP.SK_GUN_CHACRifle_AnimBP_C
struct USK_GUN_CHACRifle_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FVector BulletBoneLocation; 
	float BulletOffset; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_CHACRifle_AnimBP_AnimGraphNode_ModifyBone_1CDC1C8A4324F54288DC53B8AB92CE22(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_GUN_CHACRifle_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

