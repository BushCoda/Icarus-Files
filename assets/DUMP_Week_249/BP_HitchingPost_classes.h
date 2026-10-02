// BlueprintGeneratedClass BP_HitchingPost.BP_HitchingPost_C
struct ABP_HitchingPost_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Attach; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct TArray<struct ACharacter*> TrappedCharacters; 
	float TrapRange; 
	struct TArray<struct ACharacter*> LastTrappedCharacters; 
	struct TMap<struct UCableComponent*, struct ACharacter*> DynamicCableComponentMap; 
	struct FVector AttachPoint; 
	int32_t Element Index; 

	struct FVector GetBaitLocation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct ACharacter*> GetCurrentlyTrappedCharacters(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool WantsDynamicSpawn(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct ACharacter* GetCurrentlyTrappedCharacter(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetTrapOrigin(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	float GetTrapRadius(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ReleaseCharacter(struct ACharacter* Character); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnTrappedCharacterEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetCableComponentForCharacter(struct ACharacter* Character, struct UCableComponent*& Output); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateRopeVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void CleanupTrappedCharacter(struct ACharacter* TrappedCharacter); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseTrappedCharacter(struct ACharacter* TrappedCharacter); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrapCharacter(struct ACharacter* TrappedCharacter); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_TrappedCharacter(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void NotifyDynamicCharacterSpawned(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetCurrentlyTrappedCharacter(struct ACharacter* Character); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void RemoveTrappedCharacter(struct ACharacter* Character); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_HitchingPost(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

