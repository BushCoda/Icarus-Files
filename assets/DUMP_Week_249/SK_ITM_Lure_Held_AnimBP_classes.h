// AnimBlueprintGeneratedClass SK_ITM_Lure_Held_AnimBP.SK_ITM_Lure_Held_AnimBP_C
struct USK_ITM_Lure_Held_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; 
	struct FPositionHistory History; 
	struct FRuntimeFloatCurve Custom Curve; 
	struct FVector HorizontalForce; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_ITM_Lure_Held_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

