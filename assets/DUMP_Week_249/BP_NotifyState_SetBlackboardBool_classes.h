// BlueprintGeneratedClass BP_NotifyState_SetBlackboardBool.BP_NotifyState_SetBlackboardBool_C
struct UBP_NotifyState_SetBlackboardBool_C : UAnimNotifyState {
	struct FName BlackboardKeyName; 

	struct FString GetNotifyName(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
};

