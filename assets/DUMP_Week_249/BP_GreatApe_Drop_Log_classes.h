// BlueprintGeneratedClass BP_GreatApe_Drop_Log.BP_GreatApe_Drop_Log_C
struct ABP_GreatApe_Drop_Log_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* DefaultSceneRoot; 
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> LogMeshes; 
	bool LevelSpawn; 

	void GetNumLogs(int32_t& Count); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_15F0DAA84D96562538870EB880F30603(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // (Event|Public|HasOutParms|BlueprintEvent)
	void Multi_PushLog(struct FVector Impulse, int32_t LogIndex); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_GreatApe_Drop_Log(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

