// BlueprintGeneratedClass IcarusAnimNotifyState_AddTemporaryStat.IcarusAnimNotifyState_AddTemporaryStat_C
struct UIcarusAnimNotifyState_AddTemporaryStat_C : UAnimNotifyState {
	struct TMap<struct FBaseStatsEnum, int32_t> StatsToAdd; 

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	struct FString GetNotifyName(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
};

