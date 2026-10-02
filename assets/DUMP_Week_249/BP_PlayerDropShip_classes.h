// BlueprintGeneratedClass BP_PlayerDropShip.BP_PlayerDropShip_C
struct ABP_PlayerDropShip_C : AIcarusRocket {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHighlightableComponent* Highlightable; 
	struct UInteractableComponent* Interactable; 
	struct USceneComponent* DefaultSceneRoot; 
	struct ABP_IcarusPlayerControllerSurvival_C* AssignedPlayer; 
	struct TArray<struct ABP_DropshipSeat_C*> Seats; 
	struct TArray<struct ABP_PartBase_C*> HighlightComponents; 
	struct ABP_DropshipSeat_C* SeatToEnter; 
	bool Seated; 
	float DestinationHeight; 
	float LandHeightThreshold; 
	bool Descend; 
	float InitialPositionOffset_1; 
	bool Land; 

	void CalculateLandingVelocity(float Delta, struct FVector& Velocity, float& RangeDelta); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateHighlight(struct ABP_PartBase_C* Part, bool State); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRocketAssembled(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnWorldInteraction(struct UInteractableComponent* Interactable, struct AActor* Instigator, struct FHitResult& HitResult); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void EnterSeat(struct ABP_DropshipSeat_C* DropShipSeat); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Start(); // (BlueprintCallable|BlueprintEvent)
	void Build Default(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_PlayerDropShip(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

