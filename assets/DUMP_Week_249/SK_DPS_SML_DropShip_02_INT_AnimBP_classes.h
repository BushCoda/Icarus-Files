// AnimBlueprintGeneratedClass SK_DPS_SML_DropShip_02_INT_AnimBP.SK_DPS_SML_DropShip_02_INT_AnimBP_C
struct USK_DPS_SML_DropShip_02_INT_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	bool Shake; 
	struct UFMODAudioComponent* SFX_MediumShake; 
	struct UFMODAudioComponent* SFX_RattleSmall; 
	struct UFMODAudioComponent* SFX_RattleC; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_SK_DPS_SML_DropShip_02_INT_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};

