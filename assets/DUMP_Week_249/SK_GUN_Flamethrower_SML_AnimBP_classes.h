// AnimBlueprintGeneratedClass SK_GUN_Flamethrower_SML_AnimBP.SK_GUN_Flamethrower_SML_AnimBP_C
struct USK_GUN_Flamethrower_SML_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	int32_t StoredUnits; 
	int32_t MaxStoredUnits; 
	float RemainingFuel; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_Flamethrower_SML_AnimBP_AnimGraphNode_ModifyBone_BF19EC624A254267036FD085E3F7A43A(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_GUN_Flamethrower_SML_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

