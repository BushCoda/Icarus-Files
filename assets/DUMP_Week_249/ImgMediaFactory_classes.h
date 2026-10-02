// Class ImgMediaFactory.ImgMediaSettings
struct UImgMediaSettings : UObject {
	struct FFrameRate DefaultFrameRate; 
	float CacheBehindPercentage; 
	float CacheSizeGB; 
	int32_t CacheThreads; 
	int32_t CacheThreadStackSizeKB; 
	float GlobalCacheSizeGB; 
	bool UseGlobalCache; 
	uint32_t ExrDecoderThreads; 
	struct FString DefaultProxy; 
	bool UseDefaultProxy; 
};

