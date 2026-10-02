// BlueprintGeneratedClass BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C
struct UBP_AnimNotify_CameraShake_C : UAnimNotify {
	struct UCameraShakeBase* Shake; 
	float Scale; 
	float Radius; 
	struct FName SourceBone; 

	struct FString GetNotifyName(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
};

