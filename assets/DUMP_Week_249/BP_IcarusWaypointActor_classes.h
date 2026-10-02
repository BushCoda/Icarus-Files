// BlueprintGeneratedClass BP_IcarusWaypointActor.BP_IcarusWaypointActor_C
struct ABP_IcarusWaypointActor_C : AIcarusWaypointActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct USceneComponent* DefaultSceneRoot; 
	struct AIcarusPlayerState* OwningPlayerState; 

	void OnRep_OwningPlayerState(); // (BlueprintCallable|BlueprintEvent)
	struct AIcarusPlayerState* GetOwningPlayerState(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void CleanUpWaypointRefs(); // (Public|BlueprintCallable|BlueprintEvent)
	void ServerKillWaypoint(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void InitForPlayer(struct AIcarusPlayerState* OwningPlayerState); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetupWidget(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusWaypointActor(int32_t EntryPoint); // (Final|UbergraphFunction)
};

