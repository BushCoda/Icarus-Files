// AnimBlueprintGeneratedClass SK_DEP_GEN_WaterWheel_AnimBP.SK_DEP_GEN_WaterWheel_AnimBP_C
struct USK_DEP_GEN_WaterWheel_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	float RotationRate; 
	bool Is Active; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_DEP_GEN_WaterWheel_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

