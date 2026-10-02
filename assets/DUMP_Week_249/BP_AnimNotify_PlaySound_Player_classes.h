// BlueprintGeneratedClass BP_AnimNotify_PlaySound_Player.BP_AnimNotify_PlaySound_Player_C
struct UBP_AnimNotify_PlaySound_Player_C : UAnimNotify_PlaySoundPlayer {
	bool Follow; 
	bool UseListenerRotation; 
	bool ApplyPlayerTypeParameter; 
	enum class EAudioPlayerPerspective PerspectiveToPlayIn; 
	struct FName AttachPoint; 
	bool ApplyOcclusion; 
	struct FName OcclusionTrace; 
	bool ApplyWaterImmersion; 

	struct FString GetNotifyName(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
};

