// AnimBlueprintGeneratedClass SK_BOW_Crossbow_02_AnimBP.SK_BOW_Crossbow_02_AnimBP_C
struct USK_BOW_Crossbow_02_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; 
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; 
	struct UBP_ActionableBehaviour_Firearm_C* FirearmBehaviour; 
	bool IsADS; 
	bool Reloading; 
	bool Loaded; 
	struct UBP_ActionableBehaviour_Firearm_Base_C* NewFirearmBehaviourBase; 
	struct UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire Controller; 
	struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo Controller; 
	struct UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim Controller; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_BOW_Crossbow_02_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

