// Class GeometryCache.GeometryCache
struct UGeometryCache : UObject {
	struct TArray<struct UMaterialInterface*> Materials; 
	struct TArray<struct UGeometryCacheTrack*> Tracks; 
	int32_t StartFrame; 
	int32_t EndFrame; 
	uint64_t Hash; 
};

// Class GeometryCache.GeometryCacheActor
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; 

	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class GeometryCache.GeometryCacheCodecBase
struct UGeometryCacheCodecBase : UObject {
	struct TArray<int32_t> TopologyRanges; 
};

// Class GeometryCache.GeometryCacheCodecRaw
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; 
};

// Class GeometryCache.GeometryCacheCodecV1
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase {
};

// Class GeometryCache.GeometryCacheComponent
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; 
	bool bRunning; 
	bool bLooping; 
	bool bExtrapolateFrames; 
	float StartTimeOffset; 
	float PlaybackSpeed; 
	float MotionVectorScale; 
	int32_t NumTracks; 
	float ElapsedTime; 
	float Duration; 
	bool bManualTick; 

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // (Final|Native|Public|BlueprintCallable)
	void Stop(); // (Final|Native|Public|BlueprintCallable)
	void SetStartTimeOffset(float NewStartTimeOffset); // (Final|Native|Public|BlueprintCallable)
	void SetPlaybackSpeed(float NewPlaybackSpeed); // (Final|Native|Public|BlueprintCallable)
	void SetMotionVectorScale(float NewMotionVectorScale); // (Final|Native|Public|BlueprintCallable)
	void SetLooping(bool bNewLooping); // (Final|Native|Public|BlueprintCallable)
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // (Final|Native|Public|BlueprintCallable)
	void SetExtrapolateFrames(bool bNewExtrapolating); // (Final|Native|Public|BlueprintCallable)
	void PlayReversedFromEnd(); // (Final|Native|Public|BlueprintCallable)
	void PlayReversed(); // (Final|Native|Public|BlueprintCallable)
	void PlayFromStart(); // (Final|Native|Public|BlueprintCallable)
	void Play(); // (Final|Native|Public|BlueprintCallable)
	void Pause(); // (Final|Native|Public|BlueprintCallable)
	bool IsPlayingReversed(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPlaying(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsLooping(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsExtrapolatingFrames(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetStartTimeOffset(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPlaybackSpeed(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPlaybackDirection(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumberOfFrames(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMotionVectorScale(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetDuration(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetAnimationTime(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class GeometryCache.GeometryCacheTrack
struct UGeometryCacheTrack : UObject {
	float Duration; 
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; 

	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime); // (Final|Native|Public|HasOutParms)
};

// Class GeometryCache.GeometryCacheTrackStreamable
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	struct UGeometryCacheCodecBase* Codec; 
	float StartSampleTime; 
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack {

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // (Final|Native|Public|HasOutParms)
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack {

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // (Final|Native|Public|HasOutParms)
};

