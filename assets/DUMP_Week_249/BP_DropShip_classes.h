// BlueprintGeneratedClass BP_DropShip.BP_DropShip_C
struct ABP_DropShip_C : AIcarusRocket {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UAudioContextComponent* AudioContext; 
	struct UAudioOcclusionDropshipComponent* AudioOcclusionDropship; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct UIcarusNavigationDirtier* IcarusNavigationDirtier; 
	struct USphereComponent* Sphere; 
	struct UInventoryComponent* Inventory; 
	struct UHighlightableComponent* Highlightable; 
	struct UCameraComponent* Camera; 
	struct UIcarusCameraSpringArm* IcarusCameraSpringArm; 
	struct UTextRenderComponent* PlayerName; 
	struct UInteractableComponent* Interactable; 
	struct USceneComponent* DefaultSceneRoot; 
	struct TArray<struct ABP_PartBase_C*> HighlightComponents; 
	float DescentTime; 
	float CurrentTime; 
	float AscentTime; 
	struct TArray<struct FDropShipEvent> DecentActions; 
	struct TArray<struct FDropShipEvent> AscentActions; 
	struct FDropShipSequencesRowHandle DecentSequence; 
	struct FDropShipSequencesRowHandle AscentSequence; 
	bool ShipInteractionEnabled; 
	bool ClientReady; 
	bool ServerShipBuilt; 
	struct FText Name; 
	struct ABP_DropshipSeat_C* Seat; 
	bool CollisionEnabled; 
	int32_t PlayerIndex; 
	bool PartsAttached; 
	struct ABP_PartBase_C* TopPart; 
	struct ABP_PartBase_C* MidPart; 
	struct ABP_PartBase_C* BtmPart; 
	struct FVector ReplicatedLocation; 
	bool DebugDropshipSequence; 
	struct FString LogName; 
	bool Dropship Initialised; 
	bool DebugWithoutBackend; 
	enum class EDropshipDescentStateFMODParam FMODAudioDescentState; 
	enum class EDropshipAssignedPlayerType AssignedPlayerType; 
	bool bDatabaseReloaded; 
	bool PlayLandingAudio; 
	struct TArray<struct FItemData> GrantedLoadoutItems; 
	bool IsUnattendedLaunch; 
	struct FVector RelocationTarget; 
	struct FVector LastFoliageLocationCheck; 
	float DestroyFoliageRadius; 
	struct FText CachedPlayerName; 
	float SeatSpringArmLengthOffset; 
	struct FPlayerCharacterID LocalPlayerID; 
	bool PreventDamage; 

	void CheckForAtomiseFoliage(struct FVector CurrentLocation, struct FVector TargetLocation); // (Public|BlueprintCallable|BlueprintEvent)
	void TryAssignDebugDropship(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetDropshipLoadoutItems(struct FItemData& TopPart, struct FItemData& MidPart, struct FItemData& BottomPart); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ResetDropshipActions(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckClientPartsReady(bool& PartsReady); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetAssignedPlayerType(enum class EDropshipAssignedPlayerType PlayerType); // (Private|BlueprintCallable|BlueprintEvent)
	void UpdateGlobalAudioParameters(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void HasProspectExpired(bool& IsExpired); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateFMODState(struct FDropShipActionsEnum Action); // (Private|BlueprintCallable|BlueprintEvent)
	void OnRep_FMODAudioDescentState(); // (BlueprintCallable|BlueprintEvent)
	void Grant Loadout Items(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DebugSequence(float SequenceTime); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateFmodPlayerPerspective(bool bIsThirdPerson); // (Public|BlueprintCallable|BlueprintEvent)
	void StateUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitLandedState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FixDropshipLayout(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FixSeat(struct ABP_PartBase_C* Parent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FixPartsLocation(struct ABP_PartBase_C* Parent, struct ABP_PartBase_C* NewPart, struct FName ParentSocket, struct FName NewPartSocket); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnParts(struct FItemData TOP_Item, struct FItemData MID_Item, struct FItemData BTM_Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAudioState(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetCommandPart(struct ABP_RP_Command_Base_C*& Command); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_Name(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_ShipInteractionEnabled(); // (BlueprintCallable|BlueprintEvent)
	void SetInteraction(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReadyCheck(bool& Ready); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitialiseActions(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TriggerPartEvent(struct FDropShipActionsEnum Action); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TriggerShipEvent(struct FDropShipActionsEnum Action, bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TriggerActions(struct TArray<struct FDropShipEvent>& Actions, float& Time); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateHighlight(struct ABP_PartBase_C* Part, bool State); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRocketAssembled(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnServer_ClientReady(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void InitialisePosition(struct FVector InitialPositionOverride); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void SpawnShipParts(); // (BlueprintCallable|BlueprintEvent)
	void DropshipLog(struct FString Log); // (BlueprintCallable|BlueprintEvent)
	void OnWorldInteraction(struct UInteractableComponent* Interactable, struct AActor* Instigator, struct FHitResult& HitResult); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnProspectSessionEnded(enum class EEndProspectSessionContext Context); // (BlueprintCallable|BlueprintEvent)
	void OnRep_AssignedPlayerCharacterID(); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnRep_RocketState(); // (Event|Protected|BlueprintEvent)
	void OnDatabaseReload(); // (Event|Protected|BlueprintEvent)
	void OnDropshipSpawnPlayerInit(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void TriggerLeaveProspectLaunch(); // (Event|Public|BlueprintEvent)
	void TriggerLaunch(bool UnattendedLaunch); // (BlueprintCallable|BlueprintEvent)
	void TryInitialiseDropship(); // (BlueprintCallable|BlueprintEvent)
	void ProcessActions(float DeltaTime); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void BeginRelocation(struct FVector NewTargetLocation, bool PreventDamage); // (BlueprintCallable|BlueprintEvent)
	void DoRelocation(); // (BlueprintCallable|BlueprintEvent)
	void InitialiseMapIcon(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_DropShip(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

