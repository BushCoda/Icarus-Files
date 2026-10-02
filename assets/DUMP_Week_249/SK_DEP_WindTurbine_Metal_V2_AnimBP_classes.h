// AnimBlueprintGeneratedClass SK_DEP_WindTurbine_Metal_V2_AnimBP.SK_DEP_WindTurbine_Metal_V2_AnimBP_C
struct USK_DEP_WindTurbine_Metal_V2_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	bool Powered; 
	float RotationSpeed; 
	float MaxDegreesRotationPerSecond; 
	float Yaw; 
	float Roll; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP_AnimGraphNode_ModifyBone_9BEC68FC4FB55FF3D6061F87DC058B1E(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

