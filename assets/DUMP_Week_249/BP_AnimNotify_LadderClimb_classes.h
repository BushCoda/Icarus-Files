// BlueprintGeneratedClass BP_AnimNotify_LadderClimb.BP_AnimNotify_LadderClimb_C
struct UBP_AnimNotify_LadderClimb_C : UAnimNotify {
	enum class EAudioPlayerPerspective PerspectiveToPlayIn; 
	enum class EAudioPlayerAppendageType HandOrFoot; 
	bool ReversePlay; 
	struct UFMODEvent* HandTestFMODEvent; 
	struct UFMODEvent* FootTestFMODEvent; 

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	struct FString GetNotifyName(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
};

