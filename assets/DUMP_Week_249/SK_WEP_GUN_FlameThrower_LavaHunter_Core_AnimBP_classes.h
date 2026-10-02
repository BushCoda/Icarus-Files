// AnimBlueprintGeneratedClass SK_WEP_GUN_FlameThrower_LavaHunter_Core_AnimBP.SK_WEP_GUN_FlameThrower_LavaHunter_Core_AnimBP_C
struct USK_WEP_GUN_FlameThrower_LavaHunter_Core_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	int32_t StoredUnits; 
	int32_t MaxStoredUnits; 
	float RemainingFuel; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_GUN_FlameThrower_LavaHunter_Core_AnimBP_AnimGraphNode_ModifyBone_EBC781D94CA8D8FA0460DE8E1447B646(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_WEP_GUN_FlameThrower_LavaHunter_Core_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

