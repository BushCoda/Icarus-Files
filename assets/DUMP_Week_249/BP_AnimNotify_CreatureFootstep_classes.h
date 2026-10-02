// BlueprintGeneratedClass BP_AnimNotify_CreatureFootstep.BP_AnimNotify_CreatureFootstep_C
struct UBP_AnimNotify_CreatureFootstep_C : UAnimNotify {
	enum class ECreatureFootstepType Type; 
	enum class ECreatureFootstepDirection Direction; 

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	struct FString GetNotifyName(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
};

