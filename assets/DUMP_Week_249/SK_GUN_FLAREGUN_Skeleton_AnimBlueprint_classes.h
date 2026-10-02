// AnimBlueprintGeneratedClass SK_GUN_FLAREGUN_Skeleton_AnimBlueprint.SK_GUN_FLAREGUN_Skeleton_AnimBlueprint_C
struct USK_GUN_FLAREGUN_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct UBP_ActionableBehaviour_Firearm_Base_C* NewFirearmBehaviourBase; 
	bool Loaded; 
	struct FTransform LoadedBulletTransform; 
	bool ThirdPerson; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_GUN_FLAREGUN_Skeleton_AnimBlueprint(int32_t EntryPoint); // (Final|UbergraphFunction)
};

