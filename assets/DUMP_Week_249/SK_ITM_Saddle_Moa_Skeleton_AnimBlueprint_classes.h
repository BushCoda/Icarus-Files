// AnimBlueprintGeneratedClass SK_ITM_Saddle_Moa_Skeleton_AnimBlueprint.SK_ITM_Saddle_Moa_Skeleton_AnimBlueprint_C
struct USK_ITM_Saddle_Moa_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; 
	struct USkeletalMeshComponent* SourceMeshComponent; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_ITM_Saddle_Moa_Skeleton_AnimBlueprint(int32_t EntryPoint); // (Final|UbergraphFunction)
};

