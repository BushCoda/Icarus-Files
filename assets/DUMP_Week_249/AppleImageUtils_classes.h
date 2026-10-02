// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailure; 
	struct FAppleImageUtilsImageConversionResult ConversionResult; 

	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // (Final|Native|Static|Public|BlueprintCallable)
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // (Final|Native|Static|Public|BlueprintCallable)
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // (Final|Native|Static|Public|BlueprintCallable)
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AppleImageUtils.AppleImageInterface
struct UAppleImageInterface : UInterface {
};

