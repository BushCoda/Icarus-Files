// BlueprintGeneratedClass IcarusAnimNotify_AddTemporaryStat.IcarusAnimNotify_AddTemporaryStat_C
struct UIcarusAnimNotify_AddTemporaryStat_C : UAnimNotify {
	struct TMap<struct FBaseStatsEnum, int32_t> TemporaryStats; 

	struct FString GetNotifyName(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
};

