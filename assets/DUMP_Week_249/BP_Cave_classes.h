// BlueprintGeneratedClass BP_Cave.BP_Cave_C
struct ABP_Cave_C : ACave {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UChildActorComponent* WT_CaveVoid; 
	struct UBoxComponent* TriggerVolume; 
	struct UBP_CaveEntranceComponent_C* Entrance; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FName CollisionProfile; 
	struct UCurveFloat* EntranceDistanceCurve; 
	bool Debug; 
	struct TArray<struct UBP_CaveEntranceComponent_C*> Entrances; 
	struct TArray<struct FTransform> CachedLocations; 
	struct FTimerHandle CaveUpdateTimerHandle; 
	float ActiveUpdateFrequency; 
	struct TSet<struct UPrimitiveComponent*> LocalPlayerOverlaps; 
	float CaveVoidScale; 
	struct TMap<struct FString, struct FFCaveVolumeCache> CachedVolumeCaches; 
	struct TArray<struct UBoxComponent*> NewVolume; 
	struct TArray<struct FTransform> CachedVoidChildTransforms; 
	struct TArray<struct FTransform> CachedEntranceTransforms; 
	struct TArray<struct UBP_CaveEntranceComponent_C*> EntranceRefs; 
	float SpelunkingDepth; 
	struct AController* LocalPlayerController; 

	float GetCurrentSpelunkingDepth(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	float GetSpelunkingDepthFromLocation(struct FVector Location); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void IsLocalPlayer(struct AActor* InActor, bool& Local); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CacheLocalPlayerController(); // (Public|BlueprintCallable|BlueprintEvent)
	void NewFunction_1(); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayerOverlapValidation(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateOverlapState(); // (Public|BlueprintCallable|BlueprintEvent)
	bool HasCacheChanged(struct TMap<struct FString, struct FFCaveVolumeCache> NewCachedVolumeCaches, struct TArray<struct FTransform>& NewCachedVoidChildTransform, struct TArray<struct FTransform>& CachedEntranceTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CacheValues(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetEntranceDepthForAtmos(struct FVector Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetSpelunkingDepth(struct FVector Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor); // (Private|BlueprintCallable|BlueprintEvent)
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor); // (Public|BlueprintCallable|BlueprintEvent)
	void Refresh(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnChildComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnChildComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void CaveUpdate(); // (BlueprintCallable|BlueprintEvent)
	void StartUpdateTimer(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Cave(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

