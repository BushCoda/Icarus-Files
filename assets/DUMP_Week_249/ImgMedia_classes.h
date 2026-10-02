// Class ImgMedia.ImgMediaSource
struct UImgMediaSource : UBaseMediaSource {
	bool IsPathRelativeToProjectRoot; 
	struct FFrameRate FrameRateOverride; 
	struct FString ProxyOverride; 
	struct FDirectoryPath SequencePath; 

	void SetSequencePath(struct FString Path); // (Final|Native|Public|BlueprintCallable)
	void SetMipLevelDistance(float Distance); // (Final|Native|Public|BlueprintCallable)
	void RemoveTargetObject(struct AActor* InActor); // (Final|Native|Public|BlueprintCallable)
	void RemoveGlobalCamera(struct AActor* InActor); // (Final|Native|Public|BlueprintCallable)
	struct FString GetSequencePath(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetProxies(struct TArray<struct FString>& OutProxies); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void AddTargetObject(struct AActor* InActor, float Width); // (Final|Native|Public|BlueprintCallable)
	void AddGlobalCamera(struct AActor* InActor); // (Final|Native|Public|BlueprintCallable)
};

