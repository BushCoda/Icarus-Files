// BlueprintGeneratedClass BP_GH_DenEntrance.BP_GH_DenEntrance_C
struct ABP_GH_DenEntrance_C : ABP_MainLevelTeleport_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UPostProcessComponent* PostProcess; 
	struct UBoxComponent* PPContainer; 
	struct UStaticMeshComponent* EntranceBackBlocker; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UStaticMeshComponent* EntrancePlane; 
	struct USceneComponent* EntranceMeshes; 
	struct FFactionMissionsRowHandle RequiredMissionCompletion; 
	struct FAISetupRowHandle TrackedCreatureType; 

	void SetEntranceVisibility(bool Visible); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTeleportState(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void TeleportStateChanged(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnMissionHistoryUpdated(); // (BlueprintCallable|BlueprintEvent)
	void OnCreatureKilled(struct AIcarusPlayerCharacter* Player, struct AIcarusActor* Causer, struct AActor* Creature, struct APawn* KillingBlowFromPawn); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_GH_DenEntrance(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

