// BlueprintGeneratedClass BP_CaveComponent.BP_CaveComponent_C
struct UBP_CaveComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct UBoxComponent*> Volumes; 
	struct TArray<struct UBP_CaveEntranceComponent_C*> Entrances; 
	float ActiveUpdateFrequency; 
	struct FTimerHandle CaveUpdateTimerHandle; 
	struct AIcarusPlayerController* Player; 
	float SpelunkingDepth; 
	struct TSet<struct UPrimitiveComponent*> LocalPlayerOverlaps; 
	bool Debug; 
	struct AController* LocalPlayerController; 

	void CacheLocalPlayerController(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsLocalPlayer(struct AActor* InActor, bool& Local); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	float GetSpelunkingDepth(struct FVector Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	float GetEntranceDepthForAtmos(struct FVector Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PlayerOverlapValidation(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateOverlapState(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor); // (Private|BlueprintCallable|BlueprintEvent)
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor); // (Public|BlueprintCallable|BlueprintEvent)
	void InitCave(struct TArray<struct UBoxComponent*>& InVolumes, struct TArray<struct UBP_CaveEntranceComponent_C*>& InEntrances); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnChildComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnChildComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (BlueprintCallable|BlueprintEvent)
	void CustomEvent(enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void CaveUpdate(); // (BlueprintCallable|BlueprintEvent)
	void StartUpdateTimer(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_CaveComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

