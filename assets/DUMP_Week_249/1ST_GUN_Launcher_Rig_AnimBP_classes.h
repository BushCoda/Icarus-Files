// AnimBlueprintGeneratedClass 1ST_GUN_Launcher_Rig_AnimBP.1ST_GUN_Launcher_Rig_AnimBP_C
struct U1ST_GUN_Launcher_Rig_AnimBP_C : UIcarusAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	bool IsADS; 
	float CurrentInterp; 
	float Interp Speed; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_1ST_GUN_Launcher_Rig_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

