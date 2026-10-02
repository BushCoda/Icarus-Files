// AnimBlueprintGeneratedClass AnimBP_FireExtinguisher.AnimBP_FireExtinguisher_C
struct UAnimBP_FireExtinguisher_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	bool Firing; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_AnimBP_FireExtinguisher(int32_t EntryPoint); // (Final|UbergraphFunction)
};

