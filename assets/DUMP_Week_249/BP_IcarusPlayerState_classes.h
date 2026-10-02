// BlueprintGeneratedClass BP_IcarusPlayerState.BP_IcarusPlayerState_C
struct ABP_IcarusPlayerState_C : AIcarusPlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	int32_t PlayerIdentityVisual; 
	int32_t PlayerMapColorIndex; 
	struct AIcarusWaypointActor* PersonalWaypoint; 
	float PlayerHealth; 
	bool DebugDeployablePlacement; 
	struct TSoftClassPtr<UObject> IcarusWaypointClass; 
	struct UObject* WaypointClass; 
	struct FMulticastInlineDelegate PlayerColorSelected; 
	bool DebugDeployableCollisionDisabled; 

	void HasValidPlayerColor(bool& HasValidColor); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnRep_PlayerIdentityVisual(); // (BlueprintCallable|BlueprintEvent)
	int32_t GetPlayerVisualIdentity(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void SetDeployableDebugEnabled(bool Enabled); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_DEC21D7041DA4135F51EAE8C5F4694B4(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_A3EAECF7499A23B0349644B397036FC7(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ServerMovePersonalWaypoint(struct FVector Location, struct AController* OwningController); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ServerDestroyWaypoint(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_UpdateHealthValue(float NewHealth); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void InitialisePlayerColor(); // (BlueprintCallable|BlueprintEvent)
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void TryInitialisePlayerColor(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void Server_ToggleDeployableCollision(bool DisableCollision); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusPlayerState(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void PlayerColorSelected__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

