// AnimBlueprintGeneratedClass SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C
struct USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	bool IsDeployed; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void AnimNotify_PlaySound(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

