// AnimBlueprintGeneratedClass SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C
struct USK_Dev_Hammer_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct UBP_ActionableBehaviour_Flying_Hammer_C* Hammer; 
	bool FlyingForward; 
	float Speed; 
	bool Swinging; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetHammerActionable(struct UBP_ActionableBehaviour_Flying_Hammer_C*& Hammer); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void AnimNotify_FmodEvent(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_Dev_Hammer_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

