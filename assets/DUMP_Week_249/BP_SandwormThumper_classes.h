// BlueprintGeneratedClass BP_SandwormThumper.BP_SandwormThumper_C
struct ABP_SandwormThumper_C : ABP_Thumper_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsQuestActive; 

	void GetNewAIToSpawn(struct FVector AtLocation, struct FAISetupEnum& AI_ToSpawn, struct FEpicCreaturesRowHandle& EpicCreature, struct FTransform& SpawnTransform); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnThumperStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetTooltipClassOverride(struct TSoftClassPtr<UObject>& ClassOverride); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	float GetTotalEventTime(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetupSpawnerDifficulty(); // (Public|BlueprintCallable|BlueprintEvent)
	void CompleteThumperEvent(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SandwormThumper(int32_t EntryPoint); // (Final|UbergraphFunction)
};

