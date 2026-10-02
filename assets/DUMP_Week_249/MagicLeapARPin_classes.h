// Class MagicLeapARPin.MagicLeapARPinComponent
struct UMagicLeapARPinComponent : USceneComponent {
	struct FString ObjectUID; 
	int32_t UserIndex; 
	enum class EMagicLeapAutoPinType AutoPinType; 
	bool bShouldPinActor; 
	struct UMagicLeapARPinSaveGame* PinDataClass; 
	struct TSet<enum class EMagicLeapARPinType> SearchPinTypes; 
	struct USphereComponent* SearchVolume; 
	struct FMulticastInlineDelegate OnPersistentEntityPinned; 
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; 
	struct FMulticastInlineDelegate OnPinDataLoadAttemptCompleted; 
	struct FGuid PinnedCFUID; 
	struct USceneComponent* PinnedSceneComponent; 
	struct UMagicLeapARPinSaveGame* PinData; 

	void UnPin(); // (Final|Native|Public|BlueprintCallable)
	struct UMagicLeapARPinSaveGame* TryGetPinData(struct UMagicLeapARPinSaveGame* InPinDataClass, bool& OutPinDataValid); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool PinToRestoredOrSyncedID(); // (Final|Native|Public|BlueprintCallable)
	bool PinToID(struct FGuid& PinId); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void PinToBestFit(); // (Final|Native|Public|BlueprintCallable)
	bool PinSceneComponent(struct USceneComponent* ComponentToPin); // (Final|Native|Public|BlueprintCallable)
	bool PinRestoredOrSynced(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool PinActor(struct AActor* ActorToPin); // (Final|Native|Public|BlueprintCallable)
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	void PersistentEntityPinLost__DelegateSignature(); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	bool IsPinned(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetPinState(struct FMagicLeapARPinState& State); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool GetPinnedPinID(struct FGuid& PinId); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct UMagicLeapARPinSaveGame* GetPinData(struct UMagicLeapARPinSaveGame* PinDataClass); // (Final|Native|Public|BlueprintCallable)
	void AttemptPinDataRestorationAsync(); // (Final|Native|Public|BlueprintCallable)
	bool AttemptPinDataRestoration(); // (Final|Native|Public|BlueprintCallable)
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
struct UMagicLeapARPinFunctionLibrary : UBlueprintFunctionLibrary {

	void UnBindToOnMagicLeapContentBindingFoundDelegate(struct FDelegate& Delegate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void UnBindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate& Delegate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	enum class EMagicLeapPassableWorldError SetGlobalQueryFilter(struct FMagicLeapARPinQuery& InGlobalFilter); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetContentBindingSaveGameUserIndex(int32_t UserIndex); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EMagicLeapPassableWorldError QueryARPins(struct FMagicLeapARPinQuery& Query, struct TArray<struct FGuid>& Pins); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool ParseStringToARPinId(struct FString PinIdString, struct FGuid& ARPinId); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsTrackerValid(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t& Count); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	enum class EMagicLeapPassableWorldError GetGlobalQueryFilter(struct FMagicLeapARPinQuery& CurrentGlobalFilter); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t GetContentBindingSaveGameUserIndex(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	enum class EMagicLeapPassableWorldError GetClosestARPin(struct FVector& SearchPoint, struct FGuid& PinId); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	enum class EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, struct TArray<struct FGuid>& Pins); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FString GetARPinStateToString(struct FMagicLeapARPinState& State); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	enum class EMagicLeapPassableWorldError GetARPinState(struct FGuid& PinId, struct FMagicLeapARPinState& State); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool GetARPinPositionAndOrientation_TrackingSpace(struct FGuid& PinId, struct FVector& position, struct FRotator& Orientation, bool& PinFoundInEnvironment); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool GetARPinPositionAndOrientation(struct FGuid& PinId, struct FVector& position, struct FRotator& Orientation, bool& PinFoundInEnvironment); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	enum class EMagicLeapPassableWorldError DestroyTracker(); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EMagicLeapPassableWorldError CreateTracker(); // (Final|Native|Static|Public|BlueprintCallable)
	void BindToOnMagicLeapContentBindingFoundDelegate(struct FDelegate& Delegate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void BindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate& Delegate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FString ARPinIdToString(struct FGuid& ARPinId); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
};

// Class MagicLeapARPin.MagicLeapARPinInfoActorBase
struct AMagicLeapARPinInfoActorBase : AActor {
	struct FGuid PinId; 
	bool bVisibilityOverride; 

	void OnUpdateARPinState(); // (Event|Public|BlueprintCallable|BlueprintEvent)
};

// Class MagicLeapARPin.MagicLeapARPinRenderer
struct AMagicLeapARPinRenderer : AActor {
	bool bInfoActorsVisibilityOverride; 
	struct TMap<struct FGuid, struct AMagicLeapARPinInfoActorBase*> AllInfoActors; 
	struct AMagicLeapARPinInfoActorBase* ClassToSpawn; 

	void SetVisibilityOverride(bool InVisibilityOverride); // (Final|Native|Private|BlueprintCallable)
};

// Class MagicLeapARPin.MagicLeapARPinSettings
struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; 
	struct FMagicLeapARPinState OnUpdatedEventTriggerDelta; 
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
struct UMagicLeapARPinSaveGame : USaveGame {
	struct FGuid PinnedID; 
	struct FTransform ComponentWorldTransform; 
	struct FTransform PinTransform; 
	bool bShouldPinActor; 
};

// Class MagicLeapARPin.MagicLeapARPinContentBindings
struct UMagicLeapARPinContentBindings : USaveGame {
	struct TMap<struct FGuid, struct FMagicLeapARPinObjectIdList> AllContentBindings; 
};

