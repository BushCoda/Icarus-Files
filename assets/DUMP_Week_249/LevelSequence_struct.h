// ScriptStruct LevelSequence.LevelSequenceCameraSettings
struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; 
	enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint; 
};

// ScriptStruct LevelSequence.BoundActorProxy
struct FBoundActorProxy {
};

// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
struct FLevelSequenceAnimSequenceLinkItem {
	struct FGuid SkelTrackGuid; 
	struct FSoftObjectPath PathToAnimSequence; 
	bool bExportTransforms; 
	bool bExportCurves; 
	bool bRecordInWorldSpace; 
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
struct FLevelSequenceBindingReferences {
	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences; 
	struct TSet<struct FGuid> AnimSequenceInstances; 
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
struct FLevelSequenceBindingReferenceArray {
	struct TArray<struct FLevelSequenceBindingReference> References; 
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
struct FLevelSequenceBindingReference {
	struct FString PackageName; 
	struct FSoftObjectPath ExternalObjectPath; 
	struct FString ObjectPath; 
};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
struct FLevelSequenceObjectReferenceMap {
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
struct FLevelSequenceLegacyObjectReference {
};

// ScriptStruct LevelSequence.LevelSequenceObject
struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; 
	struct FString ComponentName; 
	struct TWeakObjectPtr<struct UObject> CachedComponent; 
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
struct FLevelSequencePlayerSnapshot {
	struct FString MasterName; 
	struct FQualifiedFrameTime MasterTime; 
	struct FQualifiedFrameTime SourceTime; 
	struct FString CurrentShotName; 
	struct FQualifiedFrameTime CurrentShotLocalTime; 
	struct FQualifiedFrameTime CurrentShotSourceTime; 
	struct FString SourceTimecode; 
	struct TSoftObjectPtr<UCameraComponent> CameraComponent; 
	struct FLevelSequenceSnapshotSettings Settings; 
	struct ULevelSequence* ActiveShot; 
	struct FMovieSceneSequenceID ShotID; 
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; 
	struct FFrameRate FrameRate; 
};

