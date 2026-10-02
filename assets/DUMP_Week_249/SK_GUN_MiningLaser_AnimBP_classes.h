// AnimBlueprintGeneratedClass SK_GUN_MiningLaser_AnimBP.SK_GUN_MiningLaser_AnimBP_C
struct USK_GUN_MiningLaser_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	float Heat Value; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_GUN_MiningLaser_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

