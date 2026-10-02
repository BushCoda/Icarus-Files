// Class LevelSequence.LevelSequence
struct ULevelSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; 
	struct FLevelSequenceObjectReferenceMap ObjectReferences; 
	struct FLevelSequenceBindingReferences BindingReferences; 
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; 
	struct UObject* DirectorClass; 
	struct TArray<struct UAssetUserData*> AssetUserData; 

	void RemoveMetaDataByClass(struct UObject* InClass); // (Final|Native|Public|BlueprintCallable)
	struct UObject* FindOrAddMetaDataByClass(struct UObject* InClass); // (Final|Native|Public|BlueprintCallable)
	struct UObject* FindMetaDataByClass(struct UObject* InClass); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UObject* CopyMetaData(struct UObject* InMetaData); // (Final|Native|Public|BlueprintCallable)
};

// Class LevelSequence.AnimSequenceLevelSequenceLink
struct UAnimSequenceLevelSequenceLink : UAssetUserData {
	struct FGuid SkelTrackGuid; 
	struct FSoftObjectPath PathToLevelSequence; 
};

// Class LevelSequence.DefaultLevelSequenceInstanceData
struct UDefaultLevelSequenceInstanceData : UObject {
	struct AActor* TransformOriginActor; 
	struct FTransform TransformOrigin; 
};

// Class LevelSequence.LevelSequenceMetaData
struct ULevelSequenceMetaData : UInterface {
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; 
	struct FSoftClassPath BurnInClass; 
	struct ULevelSequenceBurnInInitSettings* Settings; 

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // (Final|Native|Public|HasDefaults|BlueprintCallable)
};

// Class LevelSequence.LevelSequenceActor
struct ALevelSequenceActor : AActor {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; 
	struct ULevelSequencePlayer* SequencePlayer; 
	struct FSoftObjectPath LevelSequence; 
	struct FLevelSequenceCameraSettings CameraSettings; 
	struct ULevelSequenceBurnInOptions* BurnInOptions; 
	struct UMovieSceneBindingOverrides* BindingOverrides; 
	char bAutoPlay : 1; 
	char bOverrideInstanceData : 1; 
	char bReplicatePlayback : 1; 
	struct UObject* DefaultInstanceData; 
	struct ULevelSequenceBurnIn* BurnInInstance; 
	bool bShowBurnin; 

	void ShowBurnin(); // (Final|Native|Public|BlueprintCallable)
	void SetSequence(struct ULevelSequence* InSequence); // (Final|Native|Public|BlueprintCallable)
	void SetReplicatePlayback(bool ReplicatePlayback); // (Final|Native|Public|BlueprintCallable)
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ResetBindings(); // (Final|Native|Public|BlueprintCallable)
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // (Final|Native|Public|BlueprintCallable)
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor); // (Final|Native|Public|BlueprintCallable)
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // (Final|Native|Public|BlueprintCallable)
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature // (Public|Delegate) 
	struct ULevelSequence* LoadSequence(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void HideBurnin(); // (Final|Native|Public|BlueprintCallable)
	struct ULevelSequencePlayer* GetSequencePlayer(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct ULevelSequence* GetSequence(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // (Final|Native|Public|BlueprintCallable)
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // (Final|Native|Public|BlueprintCallable)
};

// Class LevelSequence.LevelSequenceAnimSequenceLink
struct ULevelSequenceAnimSequenceLink : UAssetUserData {
	struct TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; 
};

// Class LevelSequence.LevelSequenceBurnIn
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; 
	struct ALevelSequenceActor* LevelSequenceActor; 

	void SetSettings(struct UObject* InSettings); // (Event|Public|BlueprintEvent)
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass(); // (Native|Event|Public|BlueprintEvent|Const)
};

// Class LevelSequence.LevelSequenceDirector
struct ULevelSequenceDirector : UObject {
	struct ULevelSequencePlayer* Player; 
	int32_t SubSequenceID; 
	int32_t MovieScenePlayerIndex; 

	void OnCreated(); // (Event|Public|BlueprintEvent)
	struct UMovieSceneSequence* GetSequence(); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // (Final|Native|Public|BlueprintCallable)
	struct UObject* GetBoundObject(struct FMovieSceneObjectBindingID ObjectBinding); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct AActor*> GetBoundActors(struct FMovieSceneObjectBindingID ObjectBinding); // (Final|Native|Public|BlueprintCallable)
	struct AActor* GetBoundActor(struct FMovieSceneObjectBindingID ObjectBinding); // (Final|Native|Public|BlueprintCallable)
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint {
};

// Class LevelSequence.LevelSequencePlayer
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; 

	struct UCameraComponent* GetActiveCameraComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class LevelSequence.LevelSequenceProjectSettings
struct ULevelSequenceProjectSettings : UDeveloperSettings {
	bool bDefaultLockEngineToDisplayRate; 
	struct FString DefaultDisplayRate; 
	struct FString DefaultTickResolution; 
	enum class EUpdateClockSource DefaultClockSource; 
};

// Class LevelSequence.LevelSequenceMediaController
struct ALevelSequenceMediaController : AActor {
	struct ALevelSequenceActor* Sequence; 
	struct UMediaComponent* MediaComponent; 
	float ServerStartTimeSeconds; 

	void SynchronizeToServer(float DesyncThresholdSeconds); // (Final|Native|Public|BlueprintCallable)
	void Play(); // (Final|Native|Public|BlueprintCallable)
	void OnRep_ServerStartTimeSeconds(); // (Final|Native|Private)
	struct ALevelSequenceActor* GetSequence(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMediaComponent* GetMediaComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

